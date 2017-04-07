# E-Paper Breakout Board for Teensy
Breakout board designed in [KiCad](http://kicad-pcb.org/) to connect [Pervasive Displays 2.15" E-Paper (E2215CS062)](http://www.digikey.com/product-detail/en/pervasive-displays/E2215CS062/E2215CS062-ND/5975949) to [Teensy 3.2](https://oshpark.com/teensy) or [Teensy LC](http://store.oshpark.com/products/teensy-lc).  Based [Teensy E-Paper Shield](https://blog.oshpark.com/2016/08/27/teensy-e-paper-shield/) by [Jarek Lupinski](https://hackaday.io/Jarek) in EAGLE.

My goal is to create a name badge I can wear at conferences and Maker Faires.  This was first step to verify the KiCad schematic and KiCad footprints work.  I will post more information as the badge project progresses.

[![Photo of E-Paper Display](https://raw.githubusercontent.com/pdp7/kicad-teensy-epaper/master/images/small/epaper-breakout-board-quotes.jpg)](https://oshpark.com/shared_projects/Wk76kUK3)

## OSH Park shared project
[![Preview of PCB top side](https://github.com/pdp7/kicad-teensy-epaper/blob/master/images/small/preview-top.png
)](https://oshpark.com/shared_projects/Wk76kUK3)
* [E-Paper Breakout Board for Teensy](https://oshpark.com/shared_projects/Wk76kUK3)

## KiCad PCB design files:
* repo: [pdp7/kicad-teensy-epaper](https://github.com/pdp7/kicad-teensy-epaper)
* commit: 54458f4

## Bill of Materials (BoM)
* [Digi-Key shopping cart](http://www.digikey.com/short/3wbn09)

[![Digi-Key shopping cart](https://raw.githubusercontent.com/pdp7/kicad-teensy-epaper/master/images/small/kicad-epaper-digikey-bom.png)](https://raw.githubusercontent.com/pdp7/kicad-teensy-epaper/master/images/kicad-epaper-digikey-bom.png)

## Source Code
* uses [EPD215](https://github.com/jarek319/EPD215) Arduino Library by Jarek Lupinski for his E-paper Teensy Shield
* requires pinout modification:
  * [EpaperQuoteDisplay.ino](https://github.com/pdp7/kicad-teensy-epaper/blob/master/code/EpaperQuoteDisplay.ino)
  * `EPD215 epaper( 17, 16, 14, 15, 13, 11 );`

## Photos
* [Google Photos gallery](https://photos.google.com/album/AF1QipMJIE_LHkBx4cDBC7Az4LCheKRHWRPANAtDPy4m)

## Video
* [YouTube: KiCad ePaper breakout for Teensy](https://www.youtube.com/watch?v=g4yw0fRVB_U)

## Related: Jarek's ePaper Teensy shield
  * OSH Park shared project: [Teensy e-Paper shield](https://oshpark.com/shared_projects/3KynIVn6)
  * My repo of Jarek's design files: [TeensyEpaperShield](https://github.com/pdp7/TeensyEpaperShield)
