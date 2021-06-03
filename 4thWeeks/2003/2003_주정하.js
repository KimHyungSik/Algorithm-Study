const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
const numberSum = (limitArr, numArr) => {
  const sumArr = [10001];
  let sum = 0;
  let count = 0;
  let mid = 0;

  const numberArr = Number(limitArr[0]);
  const cutlineNum = Number(limitArr[1]);

  for (let i = 0; i < numberArr; i++) {
    sum += Number(numArr[i]);
    sumArr[i] = sum;
  }
  // unshift를 통해 [0,1,2,3,4...] 배열로 만든다
  sumArr.unshift(0);

  for (let i = 0; i <= numberArr; i++) {
    // start에 포인터 한개, end에 포인터 한개 만든다.
    start = i;
    end = numberArr;

    // 중간지점 mid보다 cutlineNum이 작다면 start를 한칸 앞으로,
    // cutlineNum이 크다면 end를 한칸 뒤로
    while (start <= end) {
      mid = parseInt((start + end) / 2);
      if (cutlineNum > sumArr[mid] - sumArr[i]) {
        start = mid + 1;
      } else if (cutlineNum < sumArr[mid] - sumArr[i]) {
        end = mid - 1;
      } else {
        count++;
        break;
      }
    }
  }
  console.log(count);
};

const inputArr = [];
rl.on("line", (userInput) => {
  inputArr.push(userInput);
}).on("close", () => {
  const limitArr = inputArr[0].split(" ");
  const numArr = inputArr[1].split(" ");
  numberSum(limitArr, numArr);
});
