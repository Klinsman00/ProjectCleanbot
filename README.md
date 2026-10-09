# Clean O Bot
_Yo! Have you ever had a room full of dust yet too tired to sweep them? Well introducing the Clean O bot! A **Vacuum Cleaner Robot** that can sweep and vacuum the floor flashing like the sun when you just woke up!_
Anyway jokes aside this project i am making is a vacuum cleaner robot that has fake mapping which is having a "memory" of where it has already vacuumed. As you can tell from it's name this is a cleaner robot that vacuums and sweeps the floor as it moves and is turned on by pressing the switch and while the bot is moving it will track it's movement using encoder so that it doesn't go back to the same place twice reducing the cleaning time then when hitting a wall the vacuum bot backs up and continue moving forward and never give up!

The reason i decided on making this project is because i thought about my family back in Sabah sweeping and vacuuming the house and want to lessen their burden a little so after making this robot i will be sending it over to them.

* Wiring diagram
<img width="1226" height="851" alt="image" src="https://github.com/user-attachments/assets/4eace66a-8c3b-4edf-a825-fdb2869e47ac" />


## Bill of Materials

**Total: RM623.80** / RM820 Forge A-tier cap · 3D printing not included yet (quote pending) · Full list: [bom.csv](bom.csv)

### Microcontroller — RM67.00

| Item | Qty | Price (RM) | Buy |
|---|:-:|--:|---|
| ESP32-S3 DevKitC (N16R8) | 1 | 67.00 | [Shopee](https://shopee.com.my/DIYMORE-ESP32-S3-DevKitC-1-N16R8-Development-Board-WiFi-BLE-5.0-Module-with-16MB-Flash-8MB-PSRAM-Dual-Core-240MHz-for-AIoT-Smart-Home-i.145270449.45661739634?extraParams=%7B%22display_model_id%22%3A386017578852%2C%22model_selection_logic%22%3A3%7D) |

### Motors & Drivers — RM194.30

| Item | Qty | Price (RM) | Buy |
|---|:-:|--:|---|
| DFRobot Micro Metal Gearmotor 210:1 w/ Encoder (cable included) | 2 | 94.30 | [DFRobot](https://www.dfrobot.com/product-1435.html) |
| 3V 1350RPM DC Micro Metal Gearmotor (MO-3V-1350) | 1 | 15.00 | [Cytron](https://my.cytron.io/p-3v-1350rpm-dc-micro-metal-gearmotor) |
| Micro Metal Gearmotor Bracket Pair | 1 | 8.00 | [Cytron](https://my.cytron.io/p-spg10-n20-dc-geared-motor-bracket-kit) |
| L298N Motor Driver | 1 | 5.00 | [Cytron](https://my.cytron.io/p-2amp-7v-30v-l298n-motor-driver-stepper-driver-2-channels) |
| IRF520 MOSFET Driver Module | 2 | 12.00 | [Shopee](https://shopee.com.my/MOSFET-Button-IRF520-MOSFET-Driver-Module-for-Raspberry-pi-Arduino-ElectricA--i.96013540.5653412121?extraParams=%7B%22display_model_id%22%3A21974599353%2C%22model_selection_logic%22%3A3%7D) |
| Delta BFB1012EH Blower Fan (12V) | 1 | 60.00 | [AliExpress](https://www.aliexpress.com/item/32264652512.html) |

### Sensors & Input — RM78.00

| Item | Qty | Price (RM) | Buy |
|---|:-:|--:|---|
| Sharp GP2D120 IR Distance Sensor (4–30cm) | 2 | 70.00 | [Cytron](https://my.cytron.io/p-sharp-analog-distance-sensor-4-30cm) |
| KW11 Roller Lever Microswitch (Type D) | 2 | 5.00 | [Shopee (Techmakers)](https://shopee.com.my/3-Pin-KW11-5A-Small-Touch-Long-Straight-Micro-Switch-Travel-Miniature-KW12-KW-125VAC-250VAC-Contact-Limit-Lever-Switch-i.55645224.1844550241?extraParams=%7B%22display_model_id%22%3A68229909526%2C%22model_selection_logic%22%3A3%7D) |
| On/Off Switch (SPST) | 1 | 3.00 | [Shopee](https://shopee.com.my/search?keyword=on%20off%20switch) |

### Power — RM89.00

| Item | Qty | Price (RM) | Buy |
|---|:-:|--:|---|
| 12V 9800mAh Polymer Li-ion Battery Pack (with BMS) | 1 | 69.00 | [Shopee](https://shopee.com.my/12v-DC-Rechargeable-Battery-Polymer-Lithium-Ion-Battery-with-Charger-i.39262325.2153389061?extraParams=%7B%22display_model_id%22%3A3998849337%2C%22model_selection_logic%22%3A3%7D&rModelId=3998849337&vItemId=57165012843&vModelId=33128) |
| DC5521 Female-to-Bare-Wire Cable | 1 | 5.00 | [Shopee](https://shopee.com.my/12v-Female-Cable-Pure-Copper-Core-Plug-Red-Black-Power-Cord-Monitoring-Power-Male-Female-Connector-DC5521-Power-Cord-i.689628071.10587867794?extraParams=%7B%22display_model_id%22%3A86968037147%2C%22model_selection_logic%22%3A3%7D) |
| LM2596 Buck Converter (5V fixed) | 1 | 4.00 | [Shopee](https://shopee.com.my/DC-DC-buck-converter-(LM2596-step-down-fixed-output-DC-voltage)-i.35780982.55303850475?extraParams=%7B%22display_model_id%22%3A302294481058%2C%22model_selection_logic%22%3A3%7D) |
| Inline Fuse Holder (mini blade) | 1 | 4.00 | [Shopee](https://shopee.com.my/Fuse-Holder-Black-12V-Mini-Blade-Water-Proof-Fuse-Holder-Mini-Waterproof-i.47907461.6050516278?extraParams=%7B%22display_model_id%22%3A446198273957%2C%22model_selection_logic%22%3A3%7D) |
| 5A Mini Blade Fuse | 1 | 7.00 | [Shopee](https://shopee.com.my/1-5-10-PIECE-PRICE!!!ORIGINAL-PERODUA-JAPAN-PEC-MINI-PLUG-IN-BLADE-FUSE-FOR-PROTON-TOYOTA-HONDA-NISSAN-HYUNDAI-ETC-i.112477153.4554780740?extraParams=%7B%22display_model_id%22%3A113807436703%2C%22model_selection_logic%22%3A2%7D) |

### Mechanical — RM47.70

| Item | Qty | Price (RM) | Buy |
|---|:-:|--:|---|
| Mini Wheel 42×19mm, 3mm D-shaft (pair) | 1 | 8.00 | [Cytron](https://my.cytron.io/p-mini-wheel-42x19-mm-1-pair) |
| W420 Steel Ball Castor (WL-BTU-W420) | 1 | 3.00 | [Cytron](https://my.cytron.io/p-w420-steel-ball-universal-wheel-castor) |
| Flexible Shaft Coupler 3mm–6mm | 1 | 6.50 | [Shopee](https://shopee.com.my/Aluminium-CNC-Motor-Jaw-Shaft-Coupler-Flexible-Coupling-Motor-Shaft-Coupling-3mm-4mm-5mm-6mm-8mm-10mm-i.33091591.948158578?extraParams=%7B%22display_model_id%22%3A30877687460%2C%22model_selection_logic%22%3A3%7D) |
| Ball Bearing (6mm bore) | 1 | 4.00 | [Shopee](https://shopee.com.my/Ball-Bearing-for-1mm-1.5mm-2mm-3mm-4mm-5mm-6mm-8mm-10mm-Metal-Shaft-RBT-Project-Toys-Model-i.114449913.18932166513?extraParams=%7B%22display_model_id%22%3A88108465059%2C%22model_selection_logic%22%3A3%7D) |
| M3×8mm Bolts | 20 | 2.00 | [Shopee](https://shopee.com.my/M3-M4-M5-M6-Screw-Pan-Head-Phillips-304-Stainless-Steel-GB818-Skru-i.243397959.20112160470?extraParams=%7B%22display_model_id%22%3A210689829549%2C%22model_selection_logic%22%3A2%7D) |
| M3×16mm Bolts | 20 | 3.20 | [Shopee](https://shopee.com.my/M3-M4-M5-M6-Screw-Pan-Head-Phillips-304-Stainless-Steel-GB818-Skru-i.243397959.20112160470?extraParams=%7B%22display_model_id%22%3A210689829549%2C%22model_selection_logic%22%3A2%7D) |
| M3 Heat-Set Brass Inserts (OD 4.5mm) | 1 | 8.00 | [Shopee](https://shopee.com.my/M1.4-M2-M2.5-M3-M4-Embedded-Nut-Threaded-Insert-RoHS-Standard-Brass-3D-Printing-i.243397959.18176839221?extraParams=%7B%22display_model_id%22%3A98661196800%2C%22model_selection_logic%22%3A3%7D) |
| M3 Nuts | 20 | 2.00 | [Shopee](https://shopee.com.my/Nylon-Lock-Nut-304-Stainless-Steel-Hexagon-M2-M2.5-M3-M4-M5-M6-M8-M10-M12-Hex-Lock-Nut-DIN985-i.243397959.4757954553?extraParams=%7B%22display_model_id%22%3A31434481836%2C%22model_selection_logic%22%3A2%7D) |
| Compression Springs 0.4×5×10mm (pack of 10) | 1 | 4.00 | [Shopee](https://shopee.com.my/-LY-XHYH-304-Stainless-Steel-Compression-Spring-(wire-Diameter-0.4mm-*-Outer-Diameter-3mm-12mm-*-Length-5mm-50mm)-Shock-Absorber-Spring-Precision-Pressure-Spring-i.1525505012.28934394190?extraParams=%7B%22display_model_id%22%3A138313557963%2C%22model_selection_logic%22%3A3%7D) |
| Washable Vacuum Cloth Bag (cut to size) | 1 | 7.00 | [Shopee](https://shopee.com.my/Big-Orange-Washable-Universal-Vacuum-Cleaner-Cloth-Dust-Bag-Vacuum-Cleaner-Bag-Reusable-i.216420158.5462054938?extraParams=%7B%22display_model_id%22%3A71759163225%2C%22model_selection_logic%22%3A3%7D) |

### Chassis — RM0.00

| Item | Qty | Price (RM) | Buy |
|---|:-:|--:|---|
| 3D Printing — PETG (chassis, roller core, motor box, bearing box) + TPU 95A (brush sleeve) | 1 | 0.00 | TBC |

### Wiring & Misc — RM54.50

| Item | Qty | Price (RM) | Buy |
|---|:-:|--:|---|
| Breadboard | 1 | 4.00 | [Shopee](https://shopee.com.my/MB102-Breadboard-170-400-830-Holes-Breadboard-Donut-Board-Arduino-Prototype-Multi-Color-i.1165814930.25477002583?extraParams=%7B%22display_model_id%22%3A208072027950%2C%22model_selection_logic%22%3A3%7D) |
| Red/Black Twin Cable 16AWG, 6.2A (per metre) | 3 | 7.20 | [Shopee](https://shopee.com.my/1-Meter-Red-Black-Twin-Cable-22AWG-20AWG-18AWG-17AWG-16AWG-14AWG-Electric-Electrical-Wire-Power-Cable-Speaker-Wire-i.268822975.28107542485?extraParams=%7B%22display_model_id%22%3A148740477335%2C%22model_selection_logic%22%3A3%7D) |
| Red/Black Twin Cable 22AWG, 1.25A (per metre) | 2 | 1.70 | [Shopee](https://shopee.com.my/1-Meter-Red-Black-Twin-Cable-22AWG-20AWG-18AWG-17AWG-16AWG-14AWG-Electric-Electrical-Wire-Power-Cable-Speaker-Wire-i.268822975.28107542485?extraParams=%7B%22display_model_id%22%3A148740477335%2C%22model_selection_logic%22%3A3%7D) |
| Perfboard | 1 | 3.00 | [Shopee](https://shopee.com.my/Double-Sided-Donut-Board-DIY-Robotics-Prototype-Board-PCB-Circuit-Board-i.1165814930.27521237000?extraParams=%7B%22display_model_id%22%3A252298009081%2C%22model_selection_logic%22%3A3%7D) |
| Dupont Jumper Wire Kit | 1 | 6.00 | [Shopee](https://shopee.com.my/40pcs-Dupont-Wire-10cm-20cm-30cm-for-Breadboard-DIY-Experiment-Jumper-Wire-Breadboard-wire-i.1165814930.24676987244?extraParams=%7B%22display_model_id%22%3A187468506199%2C%22model_selection_logic%22%3A3%7D) |
| 100Ω Resistor | 1 | 1.00 | [Shopee](https://shopee.com.my/10-pcs-of-Resistor-1-0.25W-1-10-100-1K-10K-100K-1M-ohm-1-4-0.25-Watt-Metal-Film-Resistance-Perintang-i.55645224.4011502286?extraParams=%7B%22display_model_id%22%3A11749661321%2C%22model_selection_logic%22%3A3%7D) |
| Green LED 5mm | 1 | 1.00 | [Shopee](https://shopee.com.my/10-pcs-of-5mm-LED-Red-Yellow-Green-Blue-Orange-Light-Emitting-Diode-Extra-Long-Led-Normal-TechMakers-i.55645224.9676906423?extraParams=%7B%22display_model_id%22%3A66372892367%2C%22model_selection_logic%22%3A3%7D) |
| TO-220 Heatsink | 2 | 4.00 | [Shopee](https://shopee.com.my/Heatsink-40x40x11-mm-Aluminium-Clear-Black-Gold-Anodized-i.6674515.812567757?extraParams=%7B%22display_model_id%22%3A321007863941%2C%22model_selection_logic%22%3A3%7D) |
| Thermal Heatsink Glue | 1 | 3.00 | [Shopee](https://shopee.com.my/Heatsink-40x40x11-mm-Aluminium-Clear-Black-Gold-Anodized-i.6674515.812567757?extraParams=%7B%22display_model_id%22%3A321007863941%2C%22model_selection_logic%22%3A3%7D) |
| Female Header Strips (1×40) | 1 | 3.00 | [Shopee](https://shopee.com.my/Straight-Pin-Header-(Female)-i.23949362.861366721?extraParams=%7B%22display_model_id%22%3A3671027746%2C%22model_selection_logic%22%3A3%7D) |
| Screw Terminal Blocks | 4 | 1.60 | [Shopee](https://shopee.com.my/-5mm-5.08mm-Pitch-2P-3P-4P-PCB-Panel-Mount-Screw-Terminal-Block-Connector-Pin-KF-KF301-WJ306-i.155961970.26250640462?extraParams=%7B%22display_model_id%22%3A222818414166%2C%22model_selection_logic%22%3A3%7D) |
| Heat-Shrink Assortment | 1 | 4.00 | [Shopee](https://shopee.com.my/Heat-Shrink-Tube-Shrinking-Assorted-Polyolefin-Insulation-Sleeving-Wire-Cable-Sleeve-Wrap-i.1544097918.42855274889?extraParams=%7B%22display_model_id%22%3A265446544760%2C%22model_selection_logic%22%3A3%7D&rModelId=265446544760&vItemId=44426434084&vModelId=320131770675&vShopId=1432004273) |
| Solder Wire | 1 | 15.00 | [Shopee](https://shopee.com.my/63-37-Tin-Lead-Solder-Wire-with-Rosin-Core-Available-in-0.5mm-to-1.5mm-Thickness-and-50g-to-100g-Sizes-i.1602560.7693354868?extraParams=%7B%22display_model_id%22%3A200304825170%2C%22model_selection_logic%22%3A3%7D&rModelId=200304825170&vItemId=51505517435&vModelId=370500704356&vShopId=1432004273) |

### Tools — RM40.00

| Item | Qty | Price (RM) | Buy |
|---|:-:|--:|---|
| Soldering Kit (iron, multimeter, pump, strippers, screwdrivers) | 1 | 40.00 | [Shopee](https://shopee.com.my/Portable-220V-60W-Electric-Soldering-Iron-Set-Adjustable-Temperature-200-450%E2%84%83-Electronic-DIY-Kits-i.1570699105.40227025340?extraParams=%7B%22display_model_id%22%3A282229759242%2C%22model_selection_logic%22%3A3%7D&rModelId=282229759242&vItemId=49761839273&vModelId=446026285498&vShopId=1432004273) |

### Shipping — RM53.30

| Item | Qty | Price (RM) | Buy |
|---|:-:|--:|---|
| DFRobot International Shipping | 1 | 53.30 | DFRobot |

