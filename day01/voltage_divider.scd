var rldr = 32e3;
var r = 10e3;
var vin = 3.3;
var vout;
vout = r/(r+rldr) * vin;
// vout.postln
vout.linlin(0, 3.3, 0, 1023).postln