const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
rl.on("line", function (line) {
  let num = Number(line);
  let result = 0;
  while (num > 0) {
    if (num % 5 == 0) {
      result += num / 5;
      break;
    }
    num -= 3;
    result++;
  }
  if (num >= 0) {
    console.log(result);
  } else {
    console.log("-1");
  }
}).on("close", function () {
  process.exit();
});
