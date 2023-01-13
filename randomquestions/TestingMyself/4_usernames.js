/**************************************************************************************
Write a function `usernames(names)` that takes in an array of names. The function
should return an array containing the corresponding usernames. See the examples.

Examples:

var names = [
  'Oscar Alvarez',
  'Danny Catalano',
  'Kurstie Ozuna',
  'Matt Haws'
];

usernames(names); // => [ 'oalvarez', 'dcatalano', 'kozuna', 'mhaws' ]

Difficulty: Medium
*************************************************************************************/

function usernames(names) {
  for (let i = 0; i < names.length; i++){
    let firstChar = names[i].split(" ")[0].toLowerCase()[0]
    names[i] = firstChar + names[i].split(" ")[1].toLowerCase()

  }
  return names
}


var names = [
  'Oscar Alvarez',
  'Danny Catalano',
  'Kurstie Ozuna',
  'Matt Haws'
];


console.log(usernames(names))
