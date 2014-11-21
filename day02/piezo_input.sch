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
LIBS:xilinx
LIBS:electret_preamp-cache
EELAYER 24 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "noname.sch"
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L R R1
U 1 1 545C9951
P 5750 1850
F 0 "R1" V 5830 1850 40  0000 C CNN
F 1 "1M" V 5757 1851 40  0000 C CNN
F 2 "" V 5680 1850 30  0000 C CNN
F 3 "" H 5750 1850 30  0000 C CNN
	1    5750 1850
	1    0    0    -1  
$EndComp
$Comp
L DIODE D2
U 1 1 545C9968
P 6050 2300
F 0 "D2" H 6050 2400 40  0000 C CNN
F 1 "DIODE" H 6050 2200 40  0000 C CNN
F 2 "" H 6050 2300 60  0000 C CNN
F 3 "" H 6050 2300 60  0000 C CNN
	1    6050 2300
	0    -1   -1   0   
$EndComp
$Comp
L DIODE D1
U 1 1 545C997C
P 6050 1900
F 0 "D1" H 6050 2000 40  0000 C CNN
F 1 "DIODE" H 6050 1800 40  0000 C CNN
F 2 "" H 6050 1900 60  0000 C CNN
F 3 "" H 6050 1900 60  0000 C CNN
	1    6050 1900
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR2
U 1 1 545C9990
P 6050 2600
F 0 "#PWR2" H 6050 2600 30  0001 C CNN
F 1 "GND" H 6050 2530 30  0001 C CNN
F 2 "" H 6050 2600 60  0000 C CNN
F 3 "" H 6050 2600 60  0000 C CNN
	1    6050 2600
	1    0    0    -1  
$EndComp
$Comp
L +3,3V #PWR1
U 1 1 545C99A4
P 6050 1450
F 0 "#PWR1" H 6050 1410 30  0001 C CNN
F 1 "+3,3V" H 6050 1560 30  0000 C CNN
F 2 "" H 6050 1450 60  0000 C CNN
F 3 "" H 6050 1450 60  0000 C CNN
	1    6050 1450
	1    0    0    -1  
$EndComp
Wire Wire Line
	6050 2600 6050 2500
Wire Wire Line
	6050 1450 6050 1700
Wire Wire Line
	5750 1600 6050 1600
Connection ~ 6050 1600
Wire Wire Line
	5450 2100 6350 2100
Text Label 6350 2100 0    60   ~ 0
PiezoOut
Connection ~ 6050 2100
Connection ~ 5750 2100
Wire Wire Line
	6050 2500 5750 2500
Wire Wire Line
	5750 2500 5750 2200
Wire Wire Line
	5750 2200 5450 2200
$Comp
L CONN_01X02 P1
U 1 1 545C9A1F
P 5250 2150
F 0 "P1" H 5250 2300 50  0000 C CNN
F 1 "Piezo" V 5350 2150 50  0000 C CNN
F 2 "" H 5250 2150 60  0000 C CNN
F 3 "" H 5250 2150 60  0000 C CNN
	1    5250 2150
	-1   0    0    1   
$EndComp
Text Notes 4600 2500 0    60   ~ 0
1 goes to golden part
Text Notes 4050 1900 0    60   ~ 0
2 goes to silver part of the piezo
$EndSCHEMATC
