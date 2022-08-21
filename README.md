# guitar-case-sensor

A project to build humidity sensors into guitar cases and to read the humidity without opening the cases.

This repository contains the project's source code. A description of the project along with details of progress can be found on the [Guitar Case Humidity Sensor Project](https://cahamo.delphidabbler.com/projects/guitar-case-sensor/) page of the [Cahamo](https://cahamo.delphidabbler.com) website.

## Contents

At present only code used in developing and testing the project is available. This is stored in the `research` directory.

The is currently just one research project:

* `case-resistor-values` - a PlatformIO project that simply reads a specified analogue pin of an Arduino Uno a fixed number of times and then outputs on the serial port the mimimum and maximum values that were read. This is used with the circuit described [here](https://cahamo.delphidabbler.com/projects/guitar-case-sensor/case-detector-design) to determine the optimum values of resistors to be used to identify different guitar case sensors. Should also work on an Arduino Nano.
