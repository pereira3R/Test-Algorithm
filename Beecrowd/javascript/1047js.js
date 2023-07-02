const [horaInicial, minutoInicial, horaFinal, minutoFinal] = require('fs').readFileSync('/dev/stdin', 'utf8').split(' ').map(Number);

const minutosInicial = horaInicial * 60 + minutoInicial;
const minutosFinal = horaFinal * 60 + minutoFinal;

let duracaoMinutos = (minutosFinal >= minutosInicial) ? minutosFinal - minutosInicial : 24 * 60 - (minutosInicial - minutosFinal);

const duracaoHoras = Math.floor(duracaoMinutos / 60);
const duracaoMinutosRestantes = duracaoMinutos % 60;

if (horaFinal === minutoInicial && minutoInicial === horaFinal && horaFinal === minutoFinal) {
    console.log(`O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)`);
}else{
    console.log(`O JOGO DUROU ${duracaoHoras} HORA(S) E ${duracaoMinutosRestantes} MINUTO(S)`);
}
