var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [A, B] = input.split('\n').map(Number)
var X = A + B; 
console.log('X = ', X); 

