var value = require('fs').readFileSync('/dev/stdin', 'utf8').split('\n').map(Float);

if(0 >= value && value <= 400){
    console.log(`Novo salari: ${(value * 0.15) + value}`);
    console.log(`Reajuste ganho ${value * 0.15}`);
    console.log(`Em percentual 15 %`);
}else if(400.01 >= value && value <= 800){
    console.log(`Novo salari: ${(value * 0.12) + value}`);
    console.log(`Reajuste ganho ${value * 0.12}`);
    console.log(`Em percentual 12 %`);
}else if(800.01 >= value && value <= 1200){
    console.log(`Novo salari: ${(value * 0.10) + value}`);
    console.log(`Reajuste ganho ${value * 0.10}`);
    console.log(`Em percentual 10 %`);
}else if(1200.01 >= value && value <= 2000){
    console.log(`Novo salari: ${(value * 0.07) + value}`);
    console.log(`Reajuste ganho ${value * 0.07}`);
    console.log(`Em percentual 7 %`);
}