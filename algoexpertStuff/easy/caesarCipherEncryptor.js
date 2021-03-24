function caesarCipherEncryptor(string, key) {
    // Write your code here.
      let newString = []
      let alph = 'abcdefghijklmnopqrstuvwxyz'.split("")
      
      for (let i = 0; i < string.length; i ++){
          let letter = string[i];
          const newIdx = (alph.indexOf(letter) + key) % 26
          const newLetter = alph[newIdx]
          newString.push(newLetter)
      }
      return newString.join("");
  }