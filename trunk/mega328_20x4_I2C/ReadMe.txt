This version use a LCD character display with 20 characters in 4 lines.
This display is connected with a I2C adapter board using a PCF8574 chip.
The I2C adapter board get 8 Bit data from the I2C side,
which are connected to the LCD as follows:
D4-D7 is connected to LCD D4-D7,
D0 is connected with LCD-E,
D1 is connected with LCD-RW,
D2 is connected with LCD-RS and
D3 is used to switch on the background light. 
The LCD-VEE Signal can be changed with the trimmer at the adapter board
to select the best contrast.

You must connect the SDA signal to the ATmega Pin PD2
(LCD-D6 of normal display connection, LCD-pin 13).
You must connect the SCL signal to the ATmega Pin PD5
(LCD-E of normal display connection, LCD-pin 6).
The default I2C address is 0x27, which can be changed with
the LCD_I2C_ADDR variable in the Makefile.

Please note, that the background light is allways turned on by the software.
You can deselect the background light by removing the jumper
at the I2C adapter module.

