# Magnet force jig
#### A 3D printed jig designed to measure the pulling force of magnets
## Documentation

While working on a brushless motor idea I had, I found myself with one hundred magnets to choose only 14 magnets from, with no idea how to select these 14 magnets.
I needed to measure their weight and pull force, the first was easily done with a sensitive balance. On the other hand, measuring the pull force nedded a little bit more work.

I Designed and 3D printed a jig to hold a [40Kg load cell](https://amzn.to/3r4BYKk) and [HX711 load cell amplifier breakout board](https://amzn.to/3r4BYKk), connected all to an arduino and wrote a quick script just to give me a fast estimate of the pull force of each magnet to be able to compare between them.
I also added an IR Sensor [-one of these-](https://amzn.to/3Xl7S1v) to act as a fast switch to reset the value of the Max reading, so that I can repeat the measurement again.

The jig consists of three layers held together with 8mm stainless steel rods and linear bearings.
- The first layer is the base; fixed directly to the bottom of the 8mm rods and is holding the load cell with one magnet attached to its end.
- The second layer; is attached to three linear bearings and has a slot to house the magnet that will be tested.
- The third layer is the top layer; directly fixed as well to the 8mm rods to act as a stoper or a limiter for the second layer and maybe house the electronics in a future version.

## Using the jig
- connect your arduino and open the serial monitor.
- slide a magnet into the slot in the middle layer.
- move the second layer slowly down until the two magnets (the one your testing and the one attached to the load cell) are touching, be carefull not to slam the magnets together.
- reset the readings with reset button.
- start pulling the sliding layer upwards slowly untill the magnets are completly seprate.
- record the max reading.
- repeat the process a couple of times and take the average

All 3D models, the SolidWorks source files, the codes and schematics will be included in the future
## Contributing
If you have suggestions or ideas to improve the device; contributions will always be welcome! 
## Feedback

If you have any feedback, please reach out at mohamed.t.keshk@gmail.com

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
