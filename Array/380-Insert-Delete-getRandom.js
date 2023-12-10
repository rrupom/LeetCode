var RandomizedSet = function () {
  this.data = [];
  this.mp = new Map();
};

/**
 * @param {number} val
 * @return {boolean}
 */
RandomizedSet.prototype.insert = function (val) {
  if (this.mp.has(val)) return false;
  this.data.push(val);
  this.mp.set(val, this.data.length - 1);
  return true;
};

/**
 * @param {number} val
 * @return {boolean}
 */
RandomizedSet.prototype.remove = function (val) {
  if (!this.mp.has(val)) return false;
  const index = this.mp.get(val);

  // if the element is last element then simply remove from data array and mp map
  const lastElement = this.data.pop();
  if (val != lastElement) {
    // else we need to swap last element with the element need to remove and update the map;
    this.data[index] = lastElement;
    this.mp.set(lastElement, index);
  }
  this.mp.delete(val);
  return true;
};

/**
 * @return {number}
 */
RandomizedSet.prototype.getRandom = function () {
  const index = Math.floor(Math.random() * this.data.length);
  return this.data[index];
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * var obj = new RandomizedSet()
 * var param_1 = obj.insert(val)
 * var param_2 = obj.remove(val)
 * var param_3 = obj.getRandom()
 */
