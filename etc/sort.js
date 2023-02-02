
// function sortTest(array) {
//   return array.sort(function(a, b) {
//     console.log(a - b, array)
//     return a - b;
//   }
//   )
// }

// // const sorted = [3,6,9,4,6].sort(function(a, b) {
// //   console.log(a - b)
// //   return a - b;
// // });

// console.log(sortTest([3,2,6,4,7]));

(() => {
  const sorted = [3,6,9,4,6].sort(function(a, b) {
      return a - b;
  });
  console.log(sorted);
})();