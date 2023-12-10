var lengthOfLastWord = function (s) {
  let array = s.trim(" ").split(" ");
  let arr = array.filter((element) => element != "");
  return arr[arr.length - 1].length;
};

console.log(lengthOfLastWord("Hello World"));
