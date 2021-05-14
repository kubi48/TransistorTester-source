# TransistorTester-source
Sources for building the firmware for various Transistor Tester models.  

The sources for the "k" firmware are in the trunk folder.
The Makefiles for different models as well as the appropriate firmware (.hex and .eep)
are located in subdirectories of trunk. 
The picture-link.pdf file may help you to find the correct subdirectory,
when opened with xreader (Linux) or with the Adobe Acrobat Reader (Windows).

You can find some of the last versions of the "m" firmware in the directory Markus
as compressed tar archives.

At this location here you will only find the sources.
The latest version of the documentation can be found at
https://github.com/kubi48/TransistorTester-documentation. 

You can also find older versions of software and documentation at:
https://github.com/kubi48/TransistorTester-old-versions

For running the transistor tester software with Arduino UNO or Nano boards you
need a bootloader able to transfer data to the flash and the EEprom memory.
You can get a bootloader with this feature matching to 512 Byte
bootloader pages at the address:
https://github.com/kubi48/avr-assembler-optiboot
