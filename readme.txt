The breadboard is connected as follows.
•	The short lead of the photo transistor connects to 3V3.
•	The long lead of the photo transistor connects to a 220 ohm (red-red-brown-gold) resistor. The other side of the resistor connects to ground.
•	The left lead of the photo transistor (connected to the resistor) also connects to pin A1 using the green wire.

The code used with the circuit board is quite simple.
•	First it initializes the LightSensor variable to the A1 pin
•	It then creates a LightData variables and sets the value as 0
•	It initializes the onboard LED on D7 as led
•	The setup initializes led as n output and the LightSensor as an input
•	The loop first sets the led on high turning the led on
•	Then it reads the value from the LightSensor and sets it to LightData
•	Then it sets an if condition
o	If LightData is equal or greater than 2500
It does a Particle.publish where the event name is Sunlight and the data is “Hits”
o	If Lightdata is less than 2500
It does a Particle.publish where the event name is Sunlight and the data is “Doesn’t Hit”
•	Then the led is turned off
•	Finally a delay is created for 10 seconds for testing purposes, a real life instance would create a delay much longer, suggested 30 minutes.
