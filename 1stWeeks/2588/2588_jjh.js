const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let input = [];

rl.on("line", function (line) {
  input.push(line);
}).on("close", function () {
  let one = Number(input[0]) * (Number(input[1]) % 10);
  let hun = Number(input[0]) * Math.floor(input[1] / 100);
  let ten = Number(input[0]) * Math.floor((input[1] % 100) / 10);

  console.log(`${one}\n${ten}\n${hun}\n${Number(input[0]) * Number(input[1])}`);

  process.exit();
});
