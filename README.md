# E-Paper Badge with Teensy LC designed in KiCad
E-Paper badge designed in [KiCad](http://kicad-pcb.org/) to connect [Pervasive Displays 2.15" E-Paper](http://www.digikey.com/product-detail/en/pervasive-displays/E2215CS062/E2215CS062-ND/5975949) to [Teensy LC](http://store.oshpark.com/products/teensy-lc). _([Teensy 3.2](https://oshpark.com/teensy) is also compatible)._  Based [Teensy E-Paper Shield](https://blog.oshpark.com/2016/08/27/teensy-e-paper-shield/) by [Jarek Lupinski](https://hackaday.io/Jarek) in EAGLE.

[![Photo of E-Paper Display](https://raw.githubusercontent.com/pdp7/kicad-teensy-epaper/master/images/small/epaper-badge-7.jpg)](https://oshpark.com/projects/1CiimZcf)
[![Additional Photo of E-Paper Display](https://raw.githubusercontent.com/pdp7/kicad-teensy-epaper/master/images/small/epaper-badge-5.jpg)](https://oshpark.com/projects/1CiimZcf)

## OSH Park shared project
* [KiCad Teensy E-Paper Badge](https://oshpark.com/projects/1CiimZcf)

[![Preview of PCB top side](https://raw.githubusercontent.com/pdp7/kicad-teensy-epaper/master/images/small/preview-top.png)](https://oshpark.com/projects/1CiimZcf)

## KiCad PCB design files
* repo: [kicad-teensy-epaper](https://github.com/pdp7/kicad-teensy-epaper/)
* commit: [Reworked layout for aesthetics [0a40263]](https://github.com/pdp7/kicad-teensy-epaper/commit/0a4026351685b28afe0d5b1825abe197254be2be)
* requires KiCad library [wickerlib](https://github.com/wickerbox/wickerlib) by [Jenner Hanni](http://jennerhanni.net/) of [Wickerbox Electronics](http://wickerbox.net/) for the 34-position FPC connector that the e-paper display plugs into:
  * [CONN-HEADER-FH34SRJ-34S-0.5SH.kicad_mod](https://github.com/wickerbox/wickerlib/blob/master/libraries/Wickerlib.pretty/CONN-HEADER-FH34SRJ-34S-0.5SH.kicad_mod)

## Bill of Materials (BoM)
* [Teensy LC](http://store.oshpark.com/products/teensy-lc) sold by OSH Park. Designed and manufactured by [PJRC](https://www.pjrc.com/teensy/teensyLC.html).
  * _[Teensy 3.2](https://oshpark.com/teensy) is also compatible but more expensive_
* [Pervasive Displays 2.15" e-paper with ITC](http://www.pervasivedisplays.com/products/215)
  * Model number: E2215CS062
  * Digi-Key: [E2215CS062-ND](http://www.digikey.com/product-detail/en/pervasive-displays/E2215CS062/E2215CS062-ND/5975949)
  * Datasheet: [2.15" TFT EPD Panel (E2215CS062)](http://www.pervasivedisplays.com/LiteratureRetrieve.aspx?ID=232067)
  * App note: [2.15" Aurora_Mb Application Note](http://www.pervasivedisplays.com/LiteratureRetrieve.aspx?ID=232068)
* [Hirose FH34SRJ-34S-0.5SH FPC connector](https://www.digikey.com/short/3hv1q0)
  * Part number: FH34SRJ-34S-0.5SH(99)
  * Digi-Key: [H124726CT-ND](https://www.digikey.com/short/3hv1q0)
  * Datasheet: [FH34(S) Series Datasheet](https://www.hirose.com/product/en/download_file/key_name/FH34SRJ/category/Catalog/doc_file_id/31646/?file_category_id=4&item_id=27&is_series=1)
* Teensy headers
  * Digikey: [S7012-ND](https://www.digikey.com/short/3db830) _(CONN HEADER FEMALE 14POS.1" TIN)_ 
  * optional as Teensy can be soldered directly to PCB
* Capacitor 1uF 0805  (qty 9)
  * Digi-Key: [1276-1066-1-ND](https://www.digikey.com/short/3db8tm) _(CAP CER 1UF 25V X7R 0805)_
  * Reference: C1 C3 C4 C5 C6 C7 C8 C9 C10    
* Capacitor 2.2uF 0805  (qty 1)
  * Digi-Key: [1276-2953-1-ND](https://www.digikey.com/short/3db8tp) _(CAP CER 2.2UF 25V X7R 0805)_
  * Reference: C2
* Inductor 47uH (qty 1):
  * Digi-Key: [732-7252-1-ND](https://www.digikey.com/short/3db8tq) _(FIXED IND 47UH 800MA 521 MOHM)_
  * Reference: L1
* Resistor 2.2 Ohm 0805 (qty 1):
  * Digi-Key: [311-2.20CRCT-ND](https://www.digikey.com/short/3db8tz) _(RES SMD 2.2 OHM 1% 1/8W 0805)_
  * Reference: R1
*	Schotty diodes SOD123 (qty 3):
  * Digi-Key: [MBR0530CT-ND](https://www.digikey.com/short/3db883) _(DIODE SCHOTTKY 30V 500MA SOD123)_
  * Reference: D1 D2 D3
* Mosfet N-Ch SOT23 (qty 1):
  * Digi-Key: [785-1012-1-ND](https://www.digikey.com/short/3db8t8) _(MOSFET N-CH 30V 3.8A SOT23)_
  * Reference: Q1


### [Digi-Key shopping cart](http://www.digikey.com/short/3wbn09)
[![Digi-Key shopping cart](https://raw.githubusercontent.com/pdp7/kicad-teensy-epaper/master/images/small/kicad-epaper-digikey-bom.png)](https://raw.githubusercontent.com/pdp7/kicad-teensy-epaper/master/images/kicad-epaper-digikey-bom.png)
### Battery Power
These products are used to power the badge from a battery:
* **[LiPo battery charger add-on for Teensy 3.1](https://www.tindie.com/products/onehorse/lipo-battery-charger-add-on-for-teensy-31/)** from Pesky Products on Tindie
  * **WARNING:** The trace between VIN and VUSB must be cut! Here is an [demostration of cutting the trace](https://learn.adafruit.com/assets/28069) on Adafruit Learning System.
* **[Lithium Ion Polymer Battery - 3.7v 500mAh](https://www.adafruit.com/product/1578)** from Adafruit
  * Initial capacity chosen for a good trade off between weight and power. I have not yet measured how long it will run with different capacities.

## Source Code
* uses [EPD215](https://github.com/jarek319/EPD215) Arduino Library by Jarek Lupinski for his E-paper Teensy Shield
* requires pinout modification:
  * [EpaperQuoteDisplay.ino](https://github.com/pdp7/kicad-teensy-epaper/blob/master/code/EpaperQuoteDisplay.ino)
  * `EPD215 epaper( 17, 16, 14, 15, 13, 11 );`
  
## Photos
* [Google Photos gallery](https://goo.gl/photos/csZV9jxah2BSP6vG9)
* [images directory in github repo](https://github.com/pdp7/kicad-teensy-epaper/tree/master/images)

## Video
* [YouTube: *E-Paper Badge with Teensy LC designed in KiCad*](https://www.youtube.com/watch?v=AxnLgPFTEOA)

## Related: Jarek's ePaper Teensy shield
  * OSH Park shared project: [Teensy e-Paper shield](https://oshpark.com/shared_projects/3KynIVn6)
  * My repo of Jarek's design files: [TeensyEpaperShield](https://github.com/pdp7/TeensyEpaperShield)
