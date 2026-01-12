#  **Robotic Flower Capstone Project for Digital Electronics Class**

   
## $\color{#FFBF00}{Background:}$ 

The goal of this project was to create a robot whose petals open/close in the presence/absence of light. I was inspired by the abilities of flowers to open/close and orient their petals towards the direction of sunlight.

## $\color{#FFBF00}{Parts:}$ 
#### 1. 2000 Series Dual Mode Servo (25-2, Torque)
This servo was used because it is heavy-duty and provided adequate torque for this project.
#### 2. Arduino Nano Board
The Arduino Nano was chosen because it was compact and provided all of the needed capabilities (Pulse-Width Modulation).
#### 3. Photoresistors
The photoresistors were chosen as the sensor. The resistance increases as the amount of light on the face of the photoresistor increases. In order to use these, a 10K ohm pull down resistor also needs to be wired up to it.
#### 4. 16 Gauge 1.5 mm aluminum craft wire
The wire was used to form the petals and the support bars. It is a light, easy to mold wire that allowed me to create the forms I needed for this project.
#### Other parts:
Kevlar Line, Cardboard, Hot Glue, Foam Board, Superglue, 3D Printed Cone, Breadboard, Jumper Wires, Digital Multimeter, 4.5 V 2 Amp Power Supply


## $\color{#FFBF00}{Technical~Troubles:}$ 
One challenge was not being able to tie all of the strings tight enough. In order for the mechanism to work, each petal has to  be tied with an equal amount of tension onto the central ring so that they all move evenly. As the bottom petal loops were not all the exact same, this was quite difficult and I had to retie the strings multiple times. It was also difficult to tie the string onto the servo because there had to be extra slack so I could lift up the base to be able to tie the servo as it was mounted. I also encountered issues with the software side, as I encountered error codes quite frequently while uploading the code. The solutions to these were to try different laptops, use the ATmega328P Old Bootloader, and just keep trying again and again. 

## $\color{#FFBF00}{Future~Improvements:}$
I would like to implement solar tracking as another biomimicry aspect to this project. This could be implemented by using a lazy susan gear, and another servo. I could fix the base of the project to the top aprt of the lazy susan and fasten a small gear underneath, and then have a servo on the side to turn that gear. I could also have the servo turn to a higher angle (180+) for an even more closed petal.

## $\color{#FFBF00}{Other~Documents:}$
##### Digital Notebook: https://docs.google.com/document/d/1FoLAD4LG06D-zq-VpQF_cWfgUHIjSzth0WziENIFGdc/edit?usp=sharing
##### Wiring Diagram: https://docs.google.com/drawings/d/1BsYlsud8C6ge_CTJODbY0ax6KTi8jNW1JN64MGfQskQ/edit?usp=sharing
##### Code Block Flowchart: https://drive.google.com/file/d/1LtU9n1cHKqjt8nuFBBJbA91envWL7ict/view?usp=sharing
