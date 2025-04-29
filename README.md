# Ultrasound Distance Measurement with ESP32 for Range Experiments

Owner: **Kaveesha Abeysundara** (SID: 201578163)    

Project: **Automated Tracking of Assembly Line-Side Flow Rack Parts**   

School of Mechanical Engineering   
University of Leeds  
LS2 9JT

Arduino code for measuring distances using an ultrasonic sensor on an ESP32 board.

[![License: All Rights Reserved](https://img.shields.io/badge/License-All%20Rights%20Reserved-red.svg)](LICENSE.md) <!-- Optional: You can create a LICENSE.md file -->

## Table of Contents

- [About](#about)
- [Hardware Setup](#hardware-setup)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Data Logging](#data-logging)
- [Repository Structure](#repository-structure)
- [License](#license)
- [Contact](#contact)

## About

This repository contains an Arduino sketch (`ultrasound.ino`) for measuring distances using an ultrasonic sensor (HC-SR04) connected to an ESP32 board. The sketch sends trigger pulses, measures the echo response time, and calculates the distance in centimeters. Timestamped readings are outputted over the serial connection.

Full source code is available at [ultrasoundexperimentcode on GitHub](https://github.com/kav12ab/ultrasoundexperimentcode).

## Hardware Setup

Connect the ultrasonic sensor to the ESP32 as follows:

-   `TRIG` → ESP32 digital pin 4
-   `ECHO` → ESP32 digital pin 5
-   `VCC` → 5V (or 3.3V if your sensor supports it)
-   `GND` → GND

*Note: You can adjust the `TRIG` and `ECHO` pin assignments within the `ultrasound.ino` sketch if needed.*

## Prerequisites

-   Arduino IDE (version 1.8.10 or later recommended)
-   ESP32 board support installed in the Arduino IDE (via Boards Manager)
-   An ESP32 development board
-   A USB cable for connection and power

## Installation

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/kav12ab/ultrasoundexperimentcode.git
    ```
2.  **Navigate to the directory:**
    ```bash
    cd ultrasoundexperimentcode
    ```

## Usage

1.  Open the `ultrasound.ino` file in the Arduino IDE.
2.  Connect your ESP32 board to your computer via USB.
3.  Select your specific ESP32 board from the `Tools > Board` menu (e.g., "ESP32 Dev Module").
4.  Select the correct serial port for your board under `Tools > Port`.
5.  Click the **Upload** button (right arrow icon).
6.  Once uploaded, open the **Serial Monitor** (`Tools > Serial Monitor` or the magnifying glass icon).
7.  Set the baud rate in the Serial Monitor to `9600 baud`.
8.  Observe the distance readings being printed in the format:
    ```
    <timestamp_ms>,<distance_cm>
    ```
    Example: `12345,15.75`

## Data Logging

To log the data:

1.  Copy the output directly from the Arduino Serial Monitor.
2.  Paste the copied data into a text file and save it with a `.csv` extension (e.g., `distance_log.csv`).
3.  Process and analyze the `.csv` file using your preferred tool (e.g., Python with pandas, Microsoft Excel, Google Sheets).

## Repository Structure

```plaintext
ultrasoundexperimentcode/      # Root folder
├── .vscode/                   # VS Code settings (optional)
├── build/                     # Auto-generated build artifacts
├── ultrasound.ino             # Main Arduino sketch
└── README.md                  # Project documentation
```

## License

**All rights reserved.**

This code is proprietary. You may **not** copy, modify, or distribute this code or repository without explicit permission from the owner.

## Contact

For questions, support, or permission requests, please open an issue on the GitHub repository:
[GitHub Issues](https://github.com/kav12ab/ultrasoundexperimentcode/issues)

Alternatively, you can attempt to reach out via GitHub profile: [kav12ab](https://github.com/kav12ab)
