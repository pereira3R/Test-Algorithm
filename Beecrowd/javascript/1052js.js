const v = parseInt(require('fs').readFileSync('/dev/stdin', 'utf8'));

const months = [
  'January',
  'February',
  'March',
  'April',
  'May',
  'June',
  'July',
  'August',
  'September',
  'October',
  'November',
  'December'
];

console.log(months[v - 1]);
