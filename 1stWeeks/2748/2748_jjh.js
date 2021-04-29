const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.on("line", function (line) {
  let read = line
    .toString()
    .split()
    .map((el) => parseInt(el));

  let fibo = [0, 1];

  for (let i = 2; i <= read; i++) {
    fibo[i] = BigInt(fibo[i - 1]) + BigInt(fibo[i - 2]);
  }
  console.log(String(fibo[read]));
}).on("close", function () {
  process.exit();
});
