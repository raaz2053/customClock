# Clock Display

This code is designed to display the current date and time on an LCD screen using the DS3231 real-time clock module and the LiquidCrystal_I2C library for arduino. It initializes the LCD screen, retrieves the date and time from the DS3231 module, and continuously updates the display with the current date and time.

## Prerequisites

Before running this code, make sure you have the following components and libraries installed:

- Arduino board
- DS3231 real-time clock module
- LiquidCrystal_I2C library
- Wire library

## Circuit Connection

Connect the DS3231 module to the Arduino board as follows:

- DS3231 SDA pin to Arduino A4 pin
- DS3231 SCL pin to Arduino A5 pin
- DS3231 VCC pin to Arduino 5V pin
- DS3231 GND pin to Arduino GND pin
- LCD screen SDA pin to Arduino A4 pin
- LCD screen SCL pin to Arduino A5 pin
- LCD screen VCC pin to Arduino 5V pin
- LCD screen GND pin to Arduino GND pin

## Installation

1. Connect the Arduino board to your computer using a USB cable.
2. Open the Arduino IDE (Integrated Development Environment).
3. Create a new sketch and paste the provided code into the editor.
4. Install the required libraries:
   - Go to **Sketch > Include Library > Manage Libraries**.
   - Search for "LiquidCrystal_I2C" and click the "Install" button.
   - Search for "DS3231" and click the "Install" button.
5. Select the appropriate board and port under the **Tools** menu.
6. Click the **Upload** button or press **Ctrl+U** to compile and upload the code to the Arduino board.

## Usage

1. After uploading the code to the Arduino board, open the Serial Monitor by clicking **Tools > Serial Monitor** or pressing **Ctrl+Shift+M**.
2. Set the baud rate of the Serial Monitor to 9600.
3. You should see the current date and time displayed in the Serial Monitor.
4. Additionally, the LCD screen connected to the Arduino board will display the current time.
5. You can modify the code to customize the display format or add additional functionality as per your requirements.

## Troubleshooting

If the code doesn't work as expected, try the following:

- Double-check the circuit connections to ensure they are properly connected.
- Make sure you have installed the required libraries correctly.
- Verify that the DS3231 module is functioning correctly.
- Ensure that the LCD screen is properly initialized and functioning.

If you encounter any issues, refer to the Arduino documentation or seek assistance from the Arduino community.

## License

This code is released under the [MIT License](https://opensource.org/licenses/MIT). Feel free to modify and distribute it as needed.
