# Esp32-8266-d1-nano-configurations-for-arduino-IDE

**1. Board overview**

The esp32 board in question is under AZ-delivery's production. I will share an initial configuration, utils, and useful links.

This board has 2 LEDs, wich one is red and stands for the power supply when plugging with usb to pc, the second has color blue.
<p align="center">
  <img src="https://www.az-delivery.de/cdn/shop/files/esp32-d1-mini-nodemcu-wifi-modul-esp-32-bluetooth-internet-entwicklungsboard-mit-usb-c-anschluss-kompatibel-mit-arduino-und-kompatibel-mit-wemos-d1-mini-711012.jpg?v=1730181118&width=2000" alt="Image of a esp32 D1 nano board" width="300">
</p>

**2. Installation guide**

&nbsp;&nbsp;&nbsp;&nbsp;I) Install Arduino IDE from https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE
  
&nbsp;&nbsp;&nbsp;&nbsp;II) For many the driver is not compatible/recognized by x86 or x64, so to start will require a installation of driver CH340x, or CP210xx to UART bridge. The following installation files are shared in this repos.

**3. Starting configurations**

If you have done section 1 and 2 you should find in __tools__ window the port as __COMx__ like COM3, and set a port.

In following I've presented a initial configuration for testing the LED in the section __/Led_ON_OFF__ to simulate a blink.
