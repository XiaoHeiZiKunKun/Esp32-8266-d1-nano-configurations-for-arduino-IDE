This code is just a debug, extencially to test the board with the blink of the second LED.

The mechanism is simple, you should:

&nbsp;&nbsp;1) define the **LED_BUILTIN**

&nbsp;&nbsp;2) there's 2 default functions **setup()** and **loop()**. In the setup() function, you should initialize the output with **pinMode(LED_BUILTIN, OUTPUT)**. With loop() functions you should activate the LED with **digitalWrite(LED_BUILTIN, HIGH)**, HIGH stands for **high voltage**: it's the requirement to activate the LED; and 
**delay(1000)** to sleep 1000 milliseconds. To simulate a blink you should setting in the loop() function HIGH and LOW alternatively, coordinting with delay() function.
