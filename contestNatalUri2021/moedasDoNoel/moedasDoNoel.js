var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n').map(Number);

const [a, b] = lines;
let res = Number((String(b - a).match(/(?<=\.)\d+/)||["0"])[0].slice(0,2));

const obj = {
  50: 0,
  25: 0,
  10: 0,
  5: 0,
  1: 0
};

const vals = Object.keys(obj).reverse();

for(let i = 0; res > 0;) {
  if(res >= vals[i]) {
    res -= vals[i];
    obj[vals[i]] += 1;
  } else {
    i += 1;
  }
}

vals.forEach(v => console.log(obj[v] + " moeda(s) de " + v))