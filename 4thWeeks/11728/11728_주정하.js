const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const arrsorting = (n, m) => {
  // 입력받은 첫번째, 두번째 값을 인자로 받음

  const nLength = n.length;
  const mLength = m.length;
  const answer = [];

  let nIndex = 0;
  let mIndex = 0;

  // 배열 안에 들어온 문자 n과 m을 숫자로 형변환
  n = n.map(e => parseInt(e));
  m = m.map(e => parseInt(e));

  while(nIndex < nLength || mIndex < mLength) {
  // 각 배열의 Index 0번째부터 서로 비교하며 작은 값을 answer[]에 push함
      if(nIndex < nLength && mIndex < mLength) {
          if(n[nIndex] > m[mIndex]) {
              answer.push(m[mIndex]);
              mIndex++; // 1
          } else {
              answer.push(n[nIndex]);
              nIndex++;
          }
       }
      // 한쪽 Index가 Length와 같아지면 (한쪽 배열을 다 push하면) 남은 배열의 마지막 값을 slice해서 answer에 push
      else {
        if(nIndex < nLength) {
            answer.push(...n.slice(nIndex));
            nIndex = nLength;
        } else {
            answer.push(...m.slice(mIndex));
            mIndex = mLength;
        }
    }
  }
  console.log(answer.join(" "));
};

const arr = [];
rl.on("line", (userInput) => {
  arr.push(userInput);
}).on("close", () => {
  const n = arr[1].split(" ");
  const m = arr[2].split(" ");
  delete arr;
  arrsorting(n, m);
  process.exit();
});

