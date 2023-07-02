var input = require('fs').readFileSync('/dev/sdtin', 'utf8');
var [a,b,c,d] = input.split('\n').map(Number);

var diferenceH = a - c;
var diferenceM = 0;
if(a == b == c == d){
    console.log("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
}if(b > d){
    diferenceH -= 1; 
    diferenceM = 60 - (b - d); 
    console.log("O JOGO DUROU " + diferenceH + " HORA(S) E " + diferenceM + " MINUTO(S)");
}else if(b < d){
    diferenceM = (d - b); 
    console.log("O JOGO DUROU " + diferenceH + " HORA(S) E " + diferenceM + " MINUTO(S)");
}