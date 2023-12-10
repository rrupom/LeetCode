var reverseWords = function (s) {
  let words = s.trim().split(" ");
  words = words.filter((word) => word != "");
  return words.reverse().join(" ");
};

let s = "the sky is blue";
console.log(reverseWords(s));
