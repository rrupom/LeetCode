/**
 * @param {number[]} ratings
 * @return {number}
 */
var candy = function (ratings) {
  let len = ratings.length;
  let left = Array(len).fill(1);
  let right = Array(len).fill(1);

  for (let i = 1; i < len; i++) {
    if (ratings[i] > ratings[i - 1]) {
      left[i] = left[i - 1] + 1;
    }
  }

  for (let i = len - 2; i >= 0; i--) {
    if (ratings[i] > ratings[i + 1]) {
      right[i] = right[i + 1] + 1;
    }
  }

  let totalCanday = 0;
  for (let i = 0; i < len; i++) {
    totalCanday += Math.max(left[i], right[i]);
  }
  return totalCanday;
};

let ratings = [1, 0, 2];
console.log(candy(ratings));
