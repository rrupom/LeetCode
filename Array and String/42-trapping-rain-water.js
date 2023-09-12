/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function (height) {
  let size = height.length;
  let maxL = Array(size);
  let maxR = Array(size);
  let mxl = 0;
  maxL[0] = mxl;
  for (let i = 1; i < size; i++) {
    mxl = Math.max(height[i - 1], mxl);
    maxL[i] = mxl;
  }

  //   console.log(maxL);

  let mxr = 0;
  maxR[size - 1] = mxr;
  for (let i = size - 2; i >= 0; i--) {
    mxr = Math.max(height[i + 1], mxr);
    maxR[i] = mxr;
  }

  //   console.log(maxR);

  let rainWater = 0;

  for (let i = 0; i < size; i++) {
    let trap = Math.min(maxL[i], maxR[i]) - height[i];
    if (trap > 0) {
      rainWater += trap;
    }
  }

  return rainWater;

  //   return 10;
};

let height = [4, 2, 0, 3, 2, 5];
// let height = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1];
console.log(trap(height));
