EESchema Schematic File Version 2
LIBS:power
LIBS:74xgxx
LIBS:74xx
LIBS:ac-dc
LIBS:actel
LIBS:adc-dac
LIBS:analog_switches
LIBS:atmel
LIBS:audio
LIBS:brooktre
LIBS:cmos_ieee
LIBS:cmos4000
LIBS:conn
LIBS:contrib
LIBS:cypress
LIBS:dc-dc
LIBS:device
LIBS:digital-audio
LIBS:display
LIBS:dsp
LIBS:elec-unifil
LIBS:ftdi
LIBS:gennum
LIBS:graphic
LIBS:hc11
LIBS:intel
LIBS:interface
LIBS:ir
LIBS:linear
LIBS:logo
LIBS:memory
LIBS:microchip_pic10mcu
LIBS:microchip_pic12mcu
LIBS:microchip_pic16mcu
LIBS:microchip_pic18mcu
LIBS:microchip
LIBS:microchip1
LIBS:microcontrollers
LIBS:motorola
LIBS:msp430
LIBS:nxp_armmcu
LIBS:opto
LIBS:philips
LIBS:powerint
LIBS:pspice
LIBS:references
LIBS:regul
LIBS:relays
LIBS:rfcom
LIBS:sensors
LIBS:siliconi
LIBS:special
LIBS:stm8
LIBS:stm32
LIBS:supertex
LIBS:texas
LIBS:transf
LIBS:transistors
LIBS:ttl_ieee
LIBS:valves
LIBS:video
LIBS:steim
LIBS:nescivi
LIBS:steim_audio
LIBS:steim_modded
LIBS:benjolin_euro-cache
EELAYER 24 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "simple electret preamp"
Date ""
Rev ""
Comp "UdK Berlin"
Comment1 "Constantin Engelmann"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L LM358 U?
U 1 1 545B9134
P 4800 2950
F 0 "U?" H 4750 3150 60  0000 L CNN
F 1 "LM358" H 4750 2700 60  0000 L CNN
F 2 "" H 4800 2950 60  0000 C CNN
F 3 "" H 4800 2950 60  0000 C CNN
	1    4800 2950
	1    0    0    -1  
$EndComp
$Comp
L R R1
U 1 1 545B9148
P 3950 2450
F 0 "R1" H 4030 2450 40  0000 C CNN
F 1 "100k" V 3957 2451 40  0000 C CNN
F 2 "" V 3880 2450 30  0000 C CNN
F 3 "" H 3950 2450 30  0000 C CNN
	1    3950 2450
	-1   0    0    1   
$EndComp
$Comp
L R R2
U 1 1 545B915A
P 3950 3450
F 0 "R2" H 4030 3450 40  0000 C CNN
F 1 "22k" V 3957 3451 40  0000 C CNN
F 2 "" V 3880 3450 30  0000 C CNN
F 3 "" H 3950 3450 30  0000 C CNN
	1    3950 3450
	-1   0    0    1   
$EndComp
$Comp
L MICROPHONE P?
U 1 1 545B9167
P 2950 2950
F 0 "P?" H 2850 3200 60  0000 C CNN
F 1 "MICROPHONE" H 3100 2950 60  0000 C CNN
F 2 "" H 2950 2950 60  0000 C CNN
F 3 "" H 2950 2950 60  0000 C CNN
	1    2950 2950
	1    0    0    -1  
$EndComp
$Comp
L R RBias
U 1 1 545B91A9
P 3350 2450
F 0 "RBias" H 3500 2450 40  0000 C CNN
F 1 "10k" V 3357 2451 40  0000 C CNN
F 2 "" V 3280 2450 30  0000 C CNN
F 3 "" H 3350 2450 30  0000 C CNN
	1    3350 2450
	-1   0    0    1   
$EndComp
Wire Wire Line
	3350 2700 3350 2850
Wire Wire Line
	3950 2700 3950 3200
Wire Wire Line
	3750 2850 4300 2850
Connection ~ 3950 2850
Wire Wire Line
	4700 2200 4700 2550
Wire Wire Line
	3350 2200 4700 2200
Connection ~ 3950 2200
$Comp
L R Rf
U 1 1 545B9213
P 5050 3500
F 0 "Rf" V 5130 3500 40  0000 C CNN
F 1 "1M" V 5057 3501 40  0000 C CNN
F 2 "" V 4980 3500 30  0000 C CNN
F 3 "" H 5050 3500 30  0000 C CNN
	1    5050 3500
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5300 3500 5500 3500
Wire Wire Line
	5500 3500 5500 2950
Wire Wire Line
	5300 2950 5700 2950
Connection ~ 5500 2950
Wire Wire Line
	4800 3500 4300 3500
Wire Wire Line
	4300 3500 4300 3050
Connection ~ 4300 3050
Text Label 5700 2950 0    60   ~ 0
PreampOut
Wire Wire Line
	3950 3700 3950 4400
$Comp
L +3,3V #PWR?
U 1 1 545B93A0
P 3950 2100
F 0 "#PWR?" H 3950 2060 30  0001 C CNN
F 1 "+3,3V" H 3950 2210 30  0000 C CNN
F 2 "" H 3950 2100 60  0000 C CNN
F 3 "" H 3950 2100 60  0000 C CNN
	1    3950 2100
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 2200 3950 2100
$Comp
L C C1
U 1 1 545B917B
P 3550 2850
F 0 "C1" H 3550 2950 40  0000 L CNN
F 1 "100n" H 3556 2765 40  0000 L CNN
F 2 "" H 3588 2700 30  0000 C CNN
F 3 "" H 3550 2850 60  0000 C CNN
	1    3550 2850
	0    1    1    0   
$EndComp
$Comp
L R Rg
U 1 1 545B9AA8
P 4300 3750
F 0 "Rg" H 4380 3750 40  0000 C CNN
F 1 "1k" V 4307 3751 40  0000 C CNN
F 2 "" V 4230 3750 30  0000 C CNN
F 3 "" H 4300 3750 30  0000 C CNN
	1    4300 3750
	-1   0    0    1   
$EndComp
$Comp
L CP2 C2
U 1 1 545B9ACE
P 4300 4200
F 0 "C2" H 4300 4300 40  0000 L CNN
F 1 "10µ" H 4306 4115 40  0000 L CNN
F 2 "" H 4338 4050 30  0000 C CNN
F 3 "" H 4300 4200 60  0000 C CNN
	1    4300 4200
	1    0    0    -1  
$EndComp
Connection ~ 4300 3500
$Comp
L GND #PWR?
U 1 1 545B9B4F
P 4300 4550
F 0 "#PWR?" H 4300 4550 30  0001 C CNN
F 1 "GND" H 4300 4480 30  0001 C CNN
F 2 "" H 4300 4550 60  0000 C CNN
F 3 "" H 4300 4550 60  0000 C CNN
	1    4300 4550
	1    0    0    -1  
$EndComp
Wire Wire Line
	4300 4400 4300 4550
Wire Wire Line
	3350 4400 4700 4400
Wire Wire Line
	4700 4400 4700 3350
Wire Wire Line
	3350 4400 3350 3050
Connection ~ 4300 4400
Connection ~ 3950 4400
Text Notes 4850 4400 0    60   ~ 0
non-inverting amplifier\nGain = (Rf/Rg) +1\nGain = 1M/1k + 1 \nGain = 1001 = 60dB\n\nC2 reduces DC Gain to about 1
Wire Notes Line
	4150 1900 4150 4650
Wire Notes Line
	6400 1900 6400 4650
Wire Notes Line
	6400 4650 4150 4650
Text Notes 1800 1750 0    60   ~ 0
RBias supplies power to electret capsule\nC1 blocks bias voltage from preamp
Text Notes 3850 1750 0    60   ~ 0
R1 & R2 form a voltage offset\nVoff = Vin * R2/(R1+R2)\nVoff = 3.3V * 22kΩ/(22kΩ + 100kΩ)\nVoff = 0.6V
Wire Notes Line
	3800 1900 3800 4650
Wire Notes Line
	3800 4650 4100 4650
Wire Notes Line
	4100 4650 4100 1900
Wire Notes Line
	4100 1900 3800 1900
Wire Notes Line
	3750 1900 3750 4650
Wire Notes Line
	3750 4650 2650 4650
Wire Notes Line
	2650 4650 2650 1900
Wire Notes Line
	2650 1900 3750 1900
Wire Notes Line
	4150 1900 6400 1900
Wire Notes Line
	3950 1750 3950 1900
Wire Notes Line
	3200 1900 3200 1750
Wire Notes Line
	3400 2750 3400 3750
Wire Notes Line
	3400 3750 4050 3750
Wire Notes Line
	4050 3750 4050 2750
Wire Notes Line
	4050 2750 3400 2750
Text Notes 3350 5150 0    60   ~ 0
C1 and R2 form a high pass filter\nFcutoff = 1/(2pi * R2* C1)\nFcutoff = 1/(2pi * 22kΩ * 100nF)\nFcutoff = 723Hz
Wire Notes Line
	3600 3750 3600 4800
$EndSCHEMATC
