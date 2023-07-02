const [a, b] = require('fs').readFileSync('/dev/stdin', 'utf8').split(' ').map(Number);

if(a === b){
    console.log("O JOGO DUROU 24 HORA(S)")
}else{
    var  hour = a > b ? (24 - a) + b : b - a; 
    console.log(`O JOGO DUROU ${hour} HORA(S)`);
}
