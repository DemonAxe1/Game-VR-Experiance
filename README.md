# Game-VR-Experiance
<h1>Kingsisle Games VR Experiance!</h1>

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
- <b>Arduino Micro</br> 
- <b>TTP223 Capacitive touch sensor switch</br> 
- <b>Manual Treadmill</br> 
- <b>Phone VR Headset Housing</br> 
- <b>GY-521 MPU-6050</br>
- <b>Bluetooth Dongle</br> 
- <b>Small Breadboards</br> 

<h2>Environments Used </h2>

- <b>Windows 10</b> (21H2)

<h2>Program walk-through:</h2>

<p align="center">
 
 [![Watch the video](https://github.com/DemonAxe1/img/blob/main/VR%20walking%20pic.PNG?raw=true)](https://youtu.be/VnOuhUtfzFA)


Launch the program, prompted to pick an option: <br/>
<img src="https://youtu.be/vt5fpE0bzSY.png"  height="80%" width="80%" alt="Disk Sanitization Steps"/> 
<br />
<br />
Results are printed and the user is prompted to go again:  <br/>
<img src="https://imgur.com/VuNocrG.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
<br />
<br />
Another option is selected: <br/>
<img src="https://imgur.com/amYKXml.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
<br />
<br />
Prompt to continue or end the program reapears, y to go again, anything else to exit:  <br/>
<img src="https://imgur.com/2YPuUDB.png" height="80%" width="80%" alt="Disk Sanitization Steps"/>
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
