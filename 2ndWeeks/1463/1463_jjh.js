const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.on("line", function (line) {
  const num = Number(line); // 배열 크기를 만들기 위해 입력 받은 값 숫자로 형변환
  const arr = new Array(num + 1).fill(0); // 입력받은 크기만큼 배열 공간 만들고 0으로 초기화

  for (let i = 2; i <= num; i++) {
    arr[i] = arr[i - 1] + 1; // arr[2]에 1대입

    if (i % 2 === 0) {
      arr[i] = Math.min(arr[i], arr[i / 2] + 1); // 위에서 대입한  1(arr[i])과 0(arr[2/2]+1)을 비교해서 작은 값을 arr[2]에 대입
    }

    if (i % 3 === 0) {
      arr[i] = Math.min(arr[i], arr[i / 3] + 1); // 위의 코드와 마찬가지 (3으로 나누어졌던 과거 숫자들을 찾아야되므로 i/3)
    }
  }
  console.log(arr[num]);
}).on("close", function () {
  process.exit();
});
