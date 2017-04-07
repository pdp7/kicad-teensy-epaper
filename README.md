# E-Paper Breakout Board for Teensy
Breakout board designed in [KiCad](http://kicad-pcb.org/) to connect [Pervasive Displays 2.15" E-Paper (E2215CS062)](http://www.digikey.com/product-detail/en/pervasive-displays/E2215CS062/E2215CS062-ND/5975949) to [Teensy 3.2](https://oshpark.com/teensy) or [Teensy LC](http://store.oshpark.com/products/teensy-lc).  Based [Teensy E-Paper Shield](https://blog.oshpark.com/2016/08/27/teensy-e-paper-shield/) by [Jarek Lupinski](https://hackaday.io/Jarek) in EAGLE.

My goal is to create a name badge I can wear at conferences and Maker Faires.  This was first step to verify the KiCad schematic and KiCad footprints work.  I will post more information the badge project progresses.

## OSH Park Shared Project
* https://oshpark.com/shared_projects/Wk76kUK3

## Source Code
* Arduino Library by Jarek Lupinski for the E-paper Teensy Shield
  * https://github.com/jarek319/EPD215
* requires pinout modification:
  * https://gist.github.com/pdp7/6b5d5faf1752c44f46733b85cf7129c0
  * `EPD215 epaper( 17, 16, 14, 15, 13, 11 );`

## KiCad PCB design files:
* repo: [pdp7/kicad-teensy-epaper](https://github.com/pdp7/kicad-teensy-epaper)
* commit: 54458f4

## Photos
* [Google Photos gallery](https://photos.google.com/album/AF1QipMJIE_LHkBx4cDBC7Az4LCheKRHWRPANAtDPy4m)

## Video
* https://www.youtube.com/watch?v=g4yw0fRVB_U


## Bill of Materials
* [Digi-Key shopping cart](http://www.digikey.com/short/3wbn09)
  

## Related: Jarek's ePaper Teensy shield
  * OSH Park shared project: [Teensy e-Paper shield](https://oshpark.com/shared_projects/3KynIVn6)
  * My repo of Jarek's design files: [TeensyEpaperShield](https://github.com/pdp7/TeensyEpaperShield)
