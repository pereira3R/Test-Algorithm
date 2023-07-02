var n = parseFloat(require('fs').readFileSync('/dev/stdin', 'utf8').split('\n').map(Number));
let percent; 
if(n <= 400){
    percent = 15; 
}else if(n <= 800){
    percent = 12; 
}else if(n <= 1200){
    percent = 10; 
}else if(n <= 2000){
    percent = 7;
}else if(n > 2000){
    percent = 4; 
}

var nIncremet = (n * (percent/100)) + n;
var nAu = (n * (percent/100)); 

console.log(`Novo salario ${nIncrement}`);
console.log(`Reajuste ganho ${nAu}`);
console.log(`Em percentual ${percent}`);
