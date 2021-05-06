const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let arr = []; // 입력받는 공간

rl.on("line", (line) => arr.push(line)).on("close", () => {
  const stairs = parseInt(arr.shift()); // arr에 입력한 첫번째 인덱스값 stairs 에 저장 (stairs = 계단의 총 길이)
  arr = arr.map(Number); // arr에 있는 요소들 숫자로 형변환

  dp = Array(301);
  dp[0] = arr[0]; // 첫번째 계단은 고정
  dp[1] = Math.max(arr[0] + arr[1], arr[1]); // (첫번째 + 두번째)계단과 두번째 계단을 비교해서 큰 값을 dp배열에 삽입
  dp[2] = Math.max(arr[1] + arr[2], arr[0] + arr[2]); // (두번째 + 세번째)계단과 (첫번째 + 세번째)계단을 비교해서 큰 값을 dp배열에 삽입

  for (let i = 3; i < stairs; i++) {
    dp[i] = Math.max(arr[i] + dp[i - 2], arr[i] + arr[i - 1] + dp[i - 3]); // 네번째 계단부터는 위에 했던 방식대로 loop 돌림
  }
  console.log(stairs);
  console.log(dp[stairs - 1]);
});
