# Line Follower Bot
An automated guided vehicle, which follow a visual line embedded on the floor.

## How Does the Line Follower Robot Work?
The working of a line follower robot is pretty straightforward. These robots have the capability to detect a black or dark line on a lighter surface depending on the contrast. They estimate whether the line underneath them is shifting toward their left or right as they move over them. Based on that estimation, they give respective signals to the motors to turn left or right so as to maintain a steady center with respect to the line.

## Materials
Components required are as follows :

- 1 X NodeMCU
- 2 X IR Sensor Module
- 2 X Geared DC Motor
- 1 X Motor Driver Module
- 2 X Wheels
- 2 X Robot Chassis
- 1 X Castor Wheel
- Few Jumper Wires
- Nut-Bolts
- 1 X 9V-battery / Power Bank (For efficient performance)

Assemble the robot using the above mentioned components. Fix the IR sensor module at appropriate height and distance on the Chassis of the robot. Burn the Above code on NodeMCU using Arduino IDE & change the value of threshold in your program accordingly so that the sensors are able to differentiate between the white part & the black line of your track. For better performance & longer battery use Power Bank.

## License
The software licensed under the [MIT license](LICENSE).
