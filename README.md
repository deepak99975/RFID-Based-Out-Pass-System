# RFID-Based-Out-Pass-System

## Overview
The RFID-Based Out-Pass System is designed to automate the entry management process for hostels or mess facilities using RFID technology. This system integrates an Atmega 328 microcontroller with RFID modules for card detection and NodeMCU for wireless communication, enabling secure and efficient access control.

## Features
- Automated RFID card detection for entry management.
- Real-time communication between RFID modules and NodeMCU for data processing.
- Secure and efficient access control system for hostels, mess facilities, or similar environments.
- Easily scalable and customizable for different RFID card types and user access levels.

## Hardware Requirements
- Atmega 328 microcontroller.
- RFID module compatible with Atmega 328.
- NodeMCU for wireless communication.
- RFID cards or tags for user identification.

## Software Requirements
- Arduino IDE for programming Atmega 328.
- Lua-based IDE for programming NodeMCU.
- Serial communication software for debugging (e.g.Arduino Serial Monitor).

## Installation and Setup
1. Connect the RFID module to the Atmega 328 microcontroller following the hardware wiring diagram.
2. Upload the `RFID_Arduino.ino` code to the Atmega 328 using the Arduino IDE.
3. Connect the NodeMCU to the Atmega 328 for wireless communication.
4. Upload the `RFID_NodeMCU.lua` code to the NodeMCU using a Lua-based IDE.
5. Power up the system and ensure proper communication between components.
6. Test the RFID detection and communication functionality.

## Testing and Calibration:
1. Power up the system and ensure proper communication between components.
2. Test RFID detection functionality by placing RFID tags/cards near the RFID reader.
3. Verify access control rules and system responses for authorized and unauthorized access attempts

## Usage
1. Place RFID cards/tags near the RFID reader to detect entry.
2. The system will process the RFID data and allow authorized access based on predefined rules.
3. Monitor system logs or debug output for real-time status and events.
4. Customize system behavior and access rules as needed in the code.

## Circuit Diagram
![a583e87b-19dd-4f14-b523-278b5d83a5cb](https://github.com/deepak99975/RFID-Based-Out-Pass-System/assets/136265214/e055fc22-9dc1-42a8-ae56-3a12d68eb91c)

## Working principle of RFID
![270d5cda-f49b-4e03-a723-32deaa07b7e6](https://github.com/deepak99975/RFID-Based-Out-Pass-System/assets/136265214/3b8ba787-dbea-4634-b457-6a395102eb51)

## Result
![IMG_20191013_180759-Deepak](https://github.com/deepak99975/RFID-Based-Out-Pass-System/assets/136265214/60cd4f86-325e-4613-a854-454a48a50297)
![RFID_Based_OUT_System_](https://github.com/deepak99975/RFID-Based-Out-Pass-System/assets/136265214/977d313e-c8ea-4880-93cc-395c2154b045)

## Contributors
- [Deepak Joshi]([https://github.com/your-username](https://github.com/deepak99975)) - Project Lead and Developer

## Acknowledgments
- Special thanks to [Department of ECE - NIET] for supporting this project.
