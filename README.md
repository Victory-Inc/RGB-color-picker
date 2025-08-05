# 🎨 RGB Color Picker (Arduino Project)

The **RGB Color Picker** is an interactive Arduino project that lets you control the color of an RGB LED by entering color names into the Serial Monitor. Once a color is typed, the LED will illuminate in that color. This is a great beginner-friendly project for learning about serial communication and color mixing with RGB LEDs.

---

## 🧩 Components Used

- 1 × RGB LED (common anode or cathode)
- 3 × 220Ω Resistors (one for each R, G, B pin)
- 1 × Arduino Uno (or compatible board)
- Jumper Wires
- Breadboard
- USB Cable (for programming and serial communication)

---

## ⚙️ How It Works

1. The RGB LED is connected to three PWM-capable digital pins on the Arduino (for red, green, and blue).
2. The Arduino continuously listens for user input from the Serial Monitor.
3. When you type a color (e.g., `"red"`, `"green"`, `"blue"`, `"yellow"`, `"white"`), the code maps the color name to RGB values.
4. The LED lights up in the corresponding color using `analogWrite()` on each pin.
5. If `"off"` is typed, the LED turns off.

This project demonstrates basic serial input processing and PWM control, and is easily extendable to support more colors.

---

## 📦 Getting Started

1. Connect the RGB LED to the Arduino with resistors (R → Pin 9, G → Pin 10, B → Pin 11, common → GND or 5V depending on LED type).
2. Upload the Arduino sketch.
3. Open the Serial Monitor (set baud rate to `9600`).
4. Type a color name and press Enter.
5. Watch the LED change color!

---

## ✅ Example Color Inputs

- `red`
- `green`
- `blue`
- `yellow`
- `cyan`
- `magenta`
- `white`
- `off`

You can modify the code to add even more color options!

---

## 🧠 Tips

- If you're using a **common anode** LED, remember to invert the RGB values in your code (i.e., use `255 - value`).
- Make sure the pins connected to the RGB LED support PWM (pins 9, 10, 11 are good defaults on most Arduino boards).

---

## 🔧 License

This project is open-source and free to use for learning and personal projects.

