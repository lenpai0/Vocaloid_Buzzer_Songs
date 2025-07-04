# Vocaloid Buzzer Songs
<img width="503" alt="thumbnail v2" src="https://github.com/user-attachments/assets/b613e803-de9a-4d05-a022-0942785232c5" />

A collection of short vocaloid buzzer cover code using an Arduino Uno, piezo buzzer and push button. I took vocaloid song piano covers that I like (and allowed to use) and handtyped each note to play on the buzzer. I also used these for my "Guess the vocaloid song" on [tiktok](https://www.tiktok.com/@lenpai0). 

This code will work for any Arduino board. It mainly uses Arduino's tone() function meaning boards like ESP32 sadly aren't compatible without altering the code.

## Instructions
You will need:
- Arduino board
- Piezo buzzer
- Push button
- 1k resistor (any value close to 1k or above also works)

### Schematic
Pay attention to polarity marking on the Piezo buzzer. Wire positive side towards pin 8. 

![image](https://github.com/user-attachments/assets/043489cf-94dc-4b3a-8fb2-0ebe3cade53b)

![image](https://github.com/user-attachments/assets/248f6135-9f46-439d-959a-88048be92138)

Schematic drawn in Tinkercad and draw.io

## How to use
Download the 'Vocaloid Buzzer Code' folder and open the .ino inside of the song folder.

![image](https://github.com/user-attachments/assets/b0cefd83-3464-4239-83cb-2c4ebd40fc09)


![image](https://github.com/user-attachments/assets/c87296a7-0d59-400a-83f8-f98d4f2b1e75)


Upload the code to the Arduino board and push the button to play the melody.

![image](https://github.com/user-attachments/assets/72545bd6-8aa9-40f1-9ccf-1b78dbde8153)

If it doesn't play, double check the wiring. Are all the ground connected?

## Light it up
You can add a simple LED and resistor in parallel of the buzzer so you can visually see it light up when it's playing. 

![image](https://github.com/user-attachments/assets/d2063ca4-4228-4db7-9f6e-ec90d3d4e031)

## Usage
If you find yourself using this code to add to your project or make a video/tutorial with it, I simply ask that you credit me @lenpai0 and provide a link to this page so everything is traceable. Thanks and enjoy!

