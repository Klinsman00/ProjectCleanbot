# Clean O Bot
_Yo! Have you ever had a room full of dust yet too tired to sweep them? Well introducing the Clean O bot! A **Vacuum Cleaner Robot** that can sweep and vacuum the floor flashing like the sun when you just woke up!_
Anyway jokes aside this project i am making is a vacuum cleaner robot that has fake mapping which is having a "memory" of where it has already vacuumed. As you can tell from it's name this is a cleaner robot that vacuums and sweeps the floor as it moves and is turned on by pressing the switch and while the bot is moving it will track it's movement using encoder so that it doesn't go back to the same place twice reducing the cleaning time then when hitting a wall the vacuum bot backs up and continue moving forward and never give up!

The reason i decided on making this project is because i thought about my family back in Sabah sweeping and vacuuming the house and want to lessen their burden a little so after making this robot i will be sending it over to them.

* Wiring diagram
<img width="1226" height="851" alt="image" src="https://github.com/user-attachments/assets/4eace66a-8c3b-4edf-a825-fdb2869e47ac" />


Bill of Materials
Total: RM623.80 / RM820 Forge A-tier cap · 3D printing not included yet (quote pending) · Full list: bom.csv
Microcontroller — RM67.00
Item	Qty	Price (RM)	Buy
ESP32-S3 DevKitC (N16R8)	1	67.00	Shopee
Motors & Drivers — RM194.30
Item	Qty	Price (RM)	Buy
DFRobot Micro Metal Gearmotor 210:1 w/ Encoder (cable included)	2	94.30	DFRobot
3V 1350RPM DC Micro Metal Gearmotor (MO-3V-1350)	1	15.00	Cytron
Micro Metal Gearmotor Bracket Pair	1	8.00	Cytron
L298N Motor Driver	1	5.00	Shopee
IRF520 MOSFET Driver Module	2	12.00	Shopee
Delta BFB1012EH Blower Fan (12V)	1	60.00	AliExpress
Sensors & Input — RM78.00
Item	Qty	Price (RM)	Buy
Sharp GP2D120 IR Distance Sensor (4–30cm)	2	70.00	Cytron
KW11 Roller Lever Microswitch (Type D)	2	5.00	Shopee (Techmakers)
On/Off Switch (SPST)	1	3.00	Shopee
Power — RM89.00
Item	Qty	Price (RM)	Buy
12V 9800mAh Polymer Li-ion Battery Pack (with BMS)	1	69.00	Shopee
DC5521 Female-to-Bare-Wire Cable	1	5.00	Shopee
LM2596 Buck Converter (5V fixed)	1	4.00	Shopee
Inline Fuse Holder (mini blade)	1	4.00	Shopee
5A Mini Blade Fuse	1	7.00	Shopee
Mechanical — RM47.70
Item	Qty	Price (RM)	Buy
Mini Wheel 42×19mm, 3mm D-shaft (pair)	1	8.00	Cytron
W420 Steel Ball Castor (WL-BTU-W420)	1	3.00	Cytron
Flexible Shaft Coupler 3mm–6mm	1	6.50	Shopee
Ball Bearing (6mm bore)	1	4.00	Shopee
M3×8mm Bolts	20	2.00	Shopee
M3×16mm Bolts	20	3.20	Shopee
M3 Heat-Set Brass Inserts (OD 4.5mm)	1	8.00	Shopee
M3 Nuts	20	2.00	Shopee
Compression Springs 0.4×5×10mm (pack of 10)	1	4.00	Shopee
Washable Vacuum Cloth Bag (cut to size)	1	7.00	Shopee
Chassis — RM0.00
Item	Qty	Price (RM)	Buy
3D Printing — PETG (chassis, roller core, motor box, bearing box) + TPU 95A (brush sleeve)	1	0.00	TBC
Wiring & Misc — RM54.50
Item	Qty	Price (RM)	Buy
Breadboard	1	4.00	Shopee
Red/Black Twin Cable 16AWG, 6.2A (per metre)	3	7.20	Shopee
Red/Black Twin Cable 22AWG, 1.25A (per metre)	2	1.70	Shopee
Perfboard	1	3.00	Shopee
Dupont Jumper Wire Kit	1	6.00	Shopee
100Ω Resistor	1	1.00	Shopee
Green LED 5mm	1	1.00	Shopee
TO-220 Heatsink	2	4.00	Shopee
Thermal Heatsink Glue	1	3.00	Shopee
Female Header Strips (1×40)	1	3.00	Shopee
Screw Terminal Blocks	4	1.60	Shopee
Heat-Shrink Assortment	1	4.00	Shopee
Solder Wire	1	15.00	Shopee
Tools — RM40.00
Item	Qty	Price (RM)	Buy
Soldering Kit (iron, multimeter, pump, strippers, screwdrivers)	1	40.00	Shopee
Shipping — RM53.30
Item	Qty	Price (RM)	Buy
DFRobot International Shipping	1	53.30	DFRobot
