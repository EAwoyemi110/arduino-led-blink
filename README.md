# Arduino LED Blink

## Overview
This project demonstrates basic GPIO (General Purpose Input/Output) control using an Arduino.  
An LED connected to digital pin 12 is toggled HIGH and LOW at 400 millisecond intervals.

Although simple, this project builds foundational embedded systems concepts including digital output control and timing loops.

---

## Concepts Practiced
- Pin configuration using `pinMode()`
- Digital output control with `digitalWrite()`
- Timing control using `delay()`
- Understanding microcontroller execution loops

---

## Hardware Used
- Arduino (Uno/Nano)
- LED
- 220Ω resistor
- Breadboard
- Jumper wires

---

## How It Works
1. Pin 12 is configured as an OUTPUT.
2. The LED is turned ON for 400ms.
3. The LED is turned OFF for 400ms.
4. The loop repeats continuously.

---

## Code

```cpp
void setup() {
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  delay(400);
  digitalWrite(12, LOW);
  delay(400);
}

## 🎥 Demo Video

[![Watch the LED Blink Demo](https://img.youtube.com/vi/WQyo7B2Gc8A/0.jpg)](https://youtube.com/shorts/WQyo7B2Gc8A)
