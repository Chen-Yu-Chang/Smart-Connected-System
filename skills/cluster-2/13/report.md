#  Skill Name: Thermistor

Author: Chen-Yu Chang

Date: 2020-10-06
-----

## Summary
1. I built a directory (thermistor) to put all the codes, CMakeList.txt, Makefile...
2. I altered the text of CMakeList.txt to contain the right project.
3. I wrote a thermistor.c file that are in the code folder.
4. I configured and build the project and I can successfully use the voltage to convert into engineering units and display on the alphanumeric display. I used variable resistor generating a resistance as a function of temperature and with a fixed input voltage, an output voltage as a function of temperature.


## Sketches and Photos
![](images/1.jpeg)
![](images/3.png)

## Modules, Tools, Source Used Including Attribution
Software: Atom, GitHub, Xcode(C Language), Terminal

Hardware: Alphanumeric Display, ESP32, Wires, 10K Resistors, Thermistor: NTC mf52-103

## Supporting Artifacts

ADC Control:

https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/adc.html

ADC Example Code:

https://github.com/espressif/esp-idf/tree/39f090a4f1dee4e325f8109d880bf3627034d839/examples/peripherals/adc

Thermistor Formula:

https://www.jameco.com/Jameco/workshop/techtip/temperature-measurement-ntc-thermistors.html

-----

<div align="center">
<p>Thermistor Video</p>
<a href="https://www.youtube.com/embed/cx05q1l2594"><img src="https://img.youtube.com/vi/cx05q1l2594/0.jpg" alt="IMAGE ALT TEXT"></a>
