---
title: "Clean O Bot"
author: "Klinsman Tiong"
description: "A vacuum cleaner robot that can track it's movement to make sure every space is covered and not to go back to places already covered"
date: "September 1st"
---

Hello! This is my first time creating a hardware project or robotics project and am very excited about it. I started this project because i was just introduced this Hackclub from my new pre-university classmate so i wanted to start a project before i turn 19 next year. Then i thought about my house back in Sabah is quite big so it would be kind of tiring to sweep so i wanted to help my family back in sabah so i thought about a vacuum robot and therefore the project i am going to make is a vacuum cleaner robot. Although i don't have past experience on robotics project i am quite confident on my software skills so i will be coding the software myself and creating the PCB(although its also my first time doing this) on its version 2 and other functions like mapping the room and more. 

I have done research on cleaning bot from references Google, Claude AI ( for its hardware as i am new to electronics), CesNieto DIY vacuum bot, Youtube( on how vacuum works, how blower motor creates the vacuum and designs of cleaner bot).



# September 2nd to September 7th: Researching and studying


Thought that i only had to write journal then i can start but after asking questions in forge_help, a friend and claude AI, found out that I need a wiring diagram,
a proper 3d printable model with every measurement accurate. Cause i originally wanted to get the products first and then test out the hardware to learn along the way but i was so wrong it turns out we got to plan everything first which i agree as it is more budget friendly and systematic. I also made the mistake thinking that i only had to send a summary of what i wanted to do with a list of materials.

So i started to search for materials for it then came across a DIY vacuum robot website made by CesNieto and learned what actual system and how everything should look like and researched all the fundamentals like what each modules does, what a breadboard is and most of the basics. I only start my journaling week by week because i didn't know that we had to journal nearly everyday 
<img width="1517" height="897" alt="image" src="https://github.com/user-attachments/assets/2316830d-383a-45cf-9f2d-ad5ed6c0b01c" />




**Total time spent: 38 to 44 hours totaling up that week**



# September 7th to September 14th: Deeper Research and wiring diagram

Studied more deeper into the vacuum robot and it did not seem as simple as it looked. Learned how a vacuum works and that i need a 12V blower motor for it to work which i used the same as CesNieto.
This is an image i generated using Claude to understand more clearly
<img width="880" height="411" alt="image" src="https://github.com/user-attachments/assets/a6bdf2ca-1f4b-4681-9fcb-b9b96630eea4" />

Then i used the Delta BFB1012EH blower motor rather than AVC BA10033B12G because i couldn't find other shops to buy other than Amazon but for some reason Amazon doesn't deliver to my country so i will be using this alternative as it is more common

<img width="1212" height="537" alt="image" src="https://github.com/user-attachments/assets/23eee542-986f-45f0-a3fa-183e8efc4ecb" />

I needed a battery that is rechargeable yet needs to be 12 V so i found this LiPo battery but found out LiPo battery are too unstable to use and need a specialized balanced charger to charge.

<img width="1510" height="717" alt="image" src="https://github.com/user-attachments/assets/2f5d8317-3e70-4f97-bbcd-a0e22159121d" />

Found alternative battery called LiFePo4 battery that is rechargeable, stable, easy to charge and has 12 voltage although it does have higher cost.

<img width="952" height="472" alt="image" src="https://github.com/user-attachments/assets/c393a42c-bf60-4df9-b281-9de6cfcd4ff4" />


Started to design the 3d CAD model and tried to use TinkerCAD but was a utter failure as it is completely not detailed enough and aren't accurate. Also discovered KiCAD to design my wiring diagram.
<img width="1912" height="905" alt="image" src="https://github.com/user-attachments/assets/67aa64ad-d709-4794-a4aa-f440856e7b57" />
So then i found FreeCAD and tried experimenting a bit but completely do not know how to use it so i watched maybe 3 youtube videos to learn how to use it and realized this is going to take a long time and decide to put this as the last task before submitting my project for review.




**Total time spent: 38 to 44 hours**



# September 14th to September 19th: Finish designing wiring diagram and learned more about forge requirements


Continued to design my wiring diagram and realized that for some electronic parts i need to design it's symbol myself using connectors a<img width="1226" height="851" alt="image" src="https://github.com/user-attachments/assets/8ba38924-8d79-4c12-aad3-1409bc658ef3" />
nd took me some time because i was finding out where do all these wires and pins connect. Studied more about Esp32 S3 and researched on what microcontrollers does, how does it communicate and where does the pin go and which pin to use.
<img width="977" height="546" alt="image" src="https://github.com/user-attachments/assets/c22c6e2b-f3fa-4cf4-9193-8df806b13243" />

Then found out that I need a BOM file to record my list of materials and that the list of materials is not suppose to be in my Journal. Which my journal is suppose to record my progress and that my README is like a table of contents where my file should not be in there but my screenshots while my files should be in my main.

<img width="1226" height="851" alt="image" src="https://github.com/user-attachments/assets/078c850f-fa2f-40fa-89b3-2cccff9a0434" />
<img width="1912" height="845" alt="image" src="https://github.com/user-attachments/assets/59fc4951-e829-40d7-bc30-63e466129323" />


**Total time spent: 12 hours**

# September 24th: changing battery type and working on BOM

Listing out the BOM made some changes which is my battery changing it from LiFEPO4 battery to a Lithium ion battery because my country does not allow LiFePO4 battery to be shipped here so i have no choice but this is also a good alternative just that it is slightly less stable than LiFePO4 battery since the quality decreases when overcharged 
<img width="1512" height="862" alt="image" src="https://github.com/user-attachments/assets/7a2d6fdf-cb3d-4103-9538-923a7efb8326" />

i still have some materials i haven't finish listing due to the reason that i can't find my ideal materials ;-;


**Total time spent: 1 hour**





