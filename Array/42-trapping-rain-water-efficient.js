var trap = function (height) {
  let left = 0;
  let right = height.length - 1;
  let maxL = height[left];
  let maxR = height[right];

  let rainWater = 0;

  while (left < right) {
    if (maxL <= maxR) {
      left++;
      maxL = Math.max(maxL, height[left]);
      let trap = Math.min(maxL, maxR) - height[left];
      if (trap > 0) {
        rainWater += trap;
      }
    } else {
      right--;
      maxR = Math.max(maxR, height[right]);
      let trap = Math.min(maxL, maxR) - height[right];
      if (trap > 0) {
        rainWater += trap;
      }
    }
  }

  return rainWater;
};

// let height = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1];
let height = [4, 2, 0, 3, 2, 5];
console.log(trap(height));
