# Game-VR-Experiance
<h1>Kingsisle Games VR Experiance!</h1>
<h1>!!!!PLEASE DO NOT SHARE THIS CONTENT WITH ANYONE!!!!</h1>

<p align="center">
<img src="https://github.com/DemonAxe1/img/blob/main/VR%20Wizard101%20walking%20thumb.PNG?raw=true.png"  height="20%" width="20%" alt="Disk Sanitization Steps"/> 
<h2>Description</h2>
This is hardware using an Arduino to create a VR controller system. Movement is tracked by a mechanical treadmill,
important game buttons are mapped to finger controls that are located on the left hand, 
and the mouse movement is simulated using a WII controller with a script that makes it act exactly like a mouse.
The biggest part is the headset, which uses another Arduino that mainly works with a gyroscope that calculates movement and rotation
so simulate mouse movement. This is extremely useful when the player in Wizard101 or Pirate101 is in fake first person
(this is achieved by walking backward in game till the character is out of view and then holding down the mouse button)
When fake first-person is combined with the simulated mouse movement of the gyroscope this simulates camera and body movement 
in the game. This means that the user walking on the treadmill can move around the world by just turning his head left and 
right. The user can also look up and down by looking up and down with the hardware on.

<br />


<h2>Languages and Utilities Used</h2>

- <b>Arduino</b> 
<h2>Hardware</h2>
- <b>Arduino Micro x2</br> 
- <b>TTP223 Capacitive touch sensor switch x5</br> 
- <b>Manual Treadmill</br> 
- <b>Phone VR Headset Housing</br> 
- <b>GY-521 MPU-6050 x1</br>
- <b>Bluetooth Dongle</br> 
- <b>Small Breadboards x3</br> 

<h2>Environments Used </h2>

- <b>Windows 10</b> (21H2)

<h2>Program walk-through:</h2>

<p align="center">
 
 <h2>Full Demo Preview: (NOT DONE)</h2></br>
 
 [![Watch the video](https://github.com/DemonAxe1/img/blob/main/VR%20walking%20pic.PNG?raw=true)](https://youtu.be/VnOuhUtfzFA)
 
 <h2>Walking and Mouse DEMO Preview</h2></br>
 
 [![Watch the video](https://github.com/DemonAxe1/img/blob/main/VR%20Walking%20and%20mouse%20Demo%20Thumb.PNG?raw=true)](https://youtu.be/g4vUEoqhlgo)
 
 <h2>VR Headset DEMO Preview</h2></br>
 
 [![Watch the video](https://github.com/DemonAxe1/img/blob/main/VR%20Head%20Demon%20Thumb.PNG?raw=true)](https://youtu.be/bpHyXMRcZ9g)
 
<p align="center">
The Arduino board controls the player’s movement when the player is in VR. This connects to a gyroscope (only using ground, power, SDA, and SCL connections) and a toggle switch on the other side of the headset: <br/>
<img src="https://github.com/DemonAxe1/img/blob/main/tr%20Arduino%20headset%20wiring.jpg?raw=true.png"  height="80%" width="80%" alt="Disk Sanitization Steps"/> 
<br />
<br />
This picture shows all the connections on the Arduino board that control all the movement, turning left and right, interaction buttons, and Fake FP macro toggle:  <br/>
<img src="https://github.com/DemonAxe1/img/blob/main/tr%20Treadmill%20arduino%20setup.jpg?raw=true.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
<br />
<br />
This is a backup shot showing how the touch sensors are mounted onto the fingers of the user, and how the cables rout out of the Arduino box: <br/>
<img src="https://github.com/DemonAxe1/img/blob/main/tr%20VR%20Tread%20arduino%20and%20Touch%20sensors.jpg?raw=true.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
<br />
</p>

<!--
 ```diff
- text in red
+ text in green
! text in orange
# text in gray
@@ text in purple (and bold)@@
```
--!>
