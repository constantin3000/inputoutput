###6.11

###install audio library
	
	https://www.pjrc.com/teensy/arduino_libraries/Audio.zip

###electret preamp
![image](electret_preamp.png)
![image](electret_preamp_annotations.png)

	The LM358 is a simple single supply OpAmp, we only have one gain stage with a gain of 1000, with the GainBandwithProduct (GBP) of 1MHz (see Datasheet) at unity gain we get about GWP of 1kHz at 1000x gain. => two gain stages would be better (less distortion, more bandwidth)
	besides a TLC272 would be a better but not overly expensive substitude

##Piezo input protection
![image](piezo_input.png)

	PLEASE NOTE: diodes are polarized, the black strip on the diode indicates the Kathode (- part) which is represented by the arrow in the schematic symbol
	
	a piezo can output very high voltage peaks that could possibly damage the inputs of the teensy, this little circuits limits the voltage to the voltage rails by clipping (think of a guitar distortion pedal)
	TLC272

 
techniques to remove dc offset:
	
	http://openenergymonitor.org/emon/buildingblocks/digital-filters-for-offset-removal



###references
[LM358 Datasheet](http://www.ti.com/lit/ds/symlink/lm158-n.pdf)

[Preampschaltung mit ausführlicher Erklärung](http://www.minidisc.org/mic_preamp/Simple%20Stereo%20Electret%20Mic%20Preamp.htm)

[Opamp Grundschaltungen](https://www.mikrocontroller.net/articles/Operationsverst%C3%A4rker-Grundschaltungen)