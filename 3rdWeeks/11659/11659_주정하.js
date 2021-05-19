require("readline")
  .createInterface(process.stdin, process.stdout)
  .on("line", (line) => {
    const input = line.toString().trim().split("\n");
    input[0] = input[0].split(" ");

    const n = +input[0][0];
    const m = +input[0][1];

    let sum = 0;

    const nums = input[1].split(" ").map((v) => (sum += +v));
    const log = [];
    // m의 [0], [1]은 첫째 줄 입력받았기 때문에 [2]부터
    for (let i = 2; i < m + 2; i++) {
      input[i] = input[i].split(" ").map((v) => +v);
      const first = Math.min(input[i][0] - 1, input[i][1] - 1);
      const second = Math.min(input[i][0] - 1, input[i][1] - 1);

      let preSum = 0;
      if (first > 0) {
        preSum = nums[first - 1];
      }
      const sum = nums[second] - preSum;
      log.push(sum);
    }
    console.log(log.join("\n"));
  });
