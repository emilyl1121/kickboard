## 2025/10/15: Begin the devlog
---
## 2025/10/22: Preliminary research
I did some research on the project and reviewed the datasheets of some parts. 
Here are some parts I planned to use:

- microcontroller: ESP32-WROOM-32
- button: undecided, I don't know what buttons are suitable yet
- 6-digit 7-segment display -> MAX7219 8-Digit Module
- OLED? -> 0.96” I2C OLED

---
## Research
I began planning my schematic design and how the device would work out in terms of the layout. I did the planning in KiCAD and tried to find premade footpritns and symbols for my parts. I couldn't find those so maybe I would have to use other parts.

---
## Parts 
I asked chatGPT on my parts and what I should use for my project, it gave me options and answered my questions about the parts.
<img width="546" height="383" alt="image" src="https://github.com/user-attachments/assets/c01a1728-b23f-44c1-9609-6aa2588f18b1" />

I decided to switch from an ESP32 to NodeMCU-32s. 

---
## Initial schematic layout - bruteforcing
This is me putting my parts onto the schematic work table without knowing what pins to wire to which pins. I would have to do more research in order to learn about them. Maybe I should use some parts that I'm more familiar with and is more friendly to beginners like me.
<img width="890" height="845" alt="螢幕擷取畫面 2025-10-15 142643" src="https://github.com/user-attachments/assets/4f983f8f-983f-4f75-aa72-6eb05330c75e" />

---
## Parts, again
I couldn't find any footprints or symbols premade online like MAX7219, but the part is the most suitable for my project, so maybe I would have to draw it out myself.
Also, I figured using an arduino for the prototype would be the most convenient as I already have a few in my inventory, so I will be using an Arduino nano for my prototyping on breadboard.
<img width="618" height="431" alt="image" src="https://github.com/user-attachments/assets/7e9d2bed-a509-4fe8-a65b-b9678011a07e" />

---
## 2025/11/19: BOM and part purchasing
I purchased the parts on TaiwanIOT studio. 
<img width="419" height="317" alt="image" src="https://github.com/user-attachments/assets/de560418-1b41-4c8e-a33e-539123f5265d" />

---
## Restart schematic table :(
I figured that I couldn't use my initial parts because they are complicated and also requires more knowledge than I already know. I decide to switch to the basic ones and begin on trying to make this work. Here's my updated list of materials:

- Arduino Nano -> available footprint and symbol
- MAX7219 module (8-digit 7 segment display) 
- buttons (Still unsure about the type of buttons)
I would have to be creating the footprint and symbol myself for the MAX7219 display module since there isn't a premade one. :(

---
## Research : code
I studied on what the code should be about. I used arduino guide website to understand how to connect the module pins and controller. I used the sample code provided to see if they worked on my nano. 
<img width="526" height="375" alt="image" src="https://github.com/user-attachments/assets/3c5c9392-333c-43cf-8955-3fed7d7e97df" />

I would be coding on Arduino IDE and testing the code on my microcontroller.

--- 
## MAX7219's symbol and footprint
I tried to create the symbol for this module myself but it was really confusing seeing all the options and data variables. I searched them up one by one and also consulted ChatGPT on their functions. It was challenging because it needed to be precise or else the PCB would not be working. I hope this would work.
<img width="919" height="398" alt="image" src="https://github.com/user-attachments/assets/b10fb38e-303c-44c0-9dfc-ff4e2b91ce22" />


---
## MAX's footprint >:(
The footprint part is actually really similar to the symbol because the dimensions are the same. I just needed to recreate it.
<img width="473" height="175" alt="image" src="https://github.com/user-attachments/assets/077fe56e-c9d4-4126-98a2-b7b0a5653340" />
I made a lot of mistakes like misusing the f.silkscreen layer as edge.cuts, it would've resulted in a printed mounting hole instead of a real one. I realized that I have to pair each pin to its symbol so that they match up in the PCB schematic part, so I spent some time remaking it. It required a lot fo research but I managed to finish it!!!

---
## Breadboarding!
I tested my parts wire out using breadboard and jumper wires. I used a sample code and connected the arduino to a TM1637 instead of the MAX because it has to be soldered before I can connect it. Since they are similar displays, I used it as an alternative to test it out. It worked, as in the video:
https://github.com/user-attachments/assets/a82ff7d4-6c2c-46f4-a6dc-6d1277a9d424

