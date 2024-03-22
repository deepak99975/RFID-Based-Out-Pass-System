//Import RFID module

local rfidModule = require("rfid_module")

//Set up RFID module

local success, errorMessage = rfidModule.setup()
if not success then
    print("Error setting up RFID module: " .. errorMessage)
    return
end

// Main loop to detect RFID tags

local tmr = tmr.create()
tmr:alarm(1000, tmr.ALARM_AUTO, function()
    -- Detect RFID tag
    local tagDetected, tagUid = rfidModule.detect()
    if tagDetected then
        print("RFID Tag Detected!")
        -- Add your logic to handle RFID detection here
        -- For example, you can use the tagUid variable to identify the specific tag
    else
        print("No RFID tag detected")
    end
end)
