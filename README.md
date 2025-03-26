Pan and Tilt Servo Control

This project uses two servo motors and an Arduino or ESP32 to create a simple pan-and-tilt mechanism for tasks like camera movement or object tracking.

Features

Smooth servo motion

Adjustable movement speed

Serial output for monitoring

Components

Arduino or ESP32

2 Servo Motors

Jumper Wires

Circuit Setup

Pan Servo → GPIO 26

Tilt Servo → GPIO 28

Connect VCC to 5V and GND to GND

Installation

Install the Arduino IDE.

Install the Servo library if not pre-installed.

Connect your board to your computer.

Uploading Code

Open pcr_2.ino in Arduino IDE.

Select your board and COM port under Tools.

Click Upload.

Customization

Adjust pos_pan and pos_tilt values for movement range.

Modify delay times for faster or smoother motion.

