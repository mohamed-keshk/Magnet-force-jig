# Magnet force jig
#### A 3D printed jig designed to measure the pulling force of magnets
## Documentation

While working on a brushless motor idea I had, I found myself with one hundred magnets to choose only 14 magnets from, with no idea how to select these 14 magnets.
I needed to measure their weight and pull force, the first was easily done with a sensitive balance. On the other hand, measuring the pull force nedded a little bit more work.

I Designed and 3D printed a jig to hold a [40Kg load cell](https://www.amazon.com/Uxcell-Aluminum-Weighting-Sensor-Electronic/dp/B00R1J9LEY/ref=sr_1_2?crid=2A4KRS9HJRERL&keywords=40kg+load+cell&qid=1685732450&sprefix=40kgload+cell%2Caps%2C185&sr=8-2) and [HX711 load cell amplifier breakout board](https://www.amazon.com/Amplifier-Breakout-Converter-Raspberry-Microcontroller/dp/B07MTYT95R/ref=sr_1_4?keywords=hx711+load+cell+amplifier+module&qid=1685737288&sprefix=hx711+%2Caps%2C185&sr=8-4), connected all to an arduino and wrote a quick script just to give me a fast estimate of the pull force of each magnet to be able to compare between them.

The jig consists of three layers held together with 8mm stainless steel rods and linear bearings.

    1- The first layer is the base; fixed directly to the 8mm rods and is holding the load cell with one magnet attached to its end. 

    2- The second layer; is attached to three linear bearings and has a slot to house the magnet that will be tested. 

    3- The third layer is the top layer; directly fixed as well to the 8mm rods to act as a stoper or a limiter for the second layer and maybe house the electronics in a future version.

All 3D models, the SolidWorks source files, the codes and schematics will be included in the future
## Contributing
If you have suggestions or ideas to improve the device; contributions will always be welcome! 
## Feedback

If you have any feedback, please reach out at mohamed.t.keshk@gmail.com

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
