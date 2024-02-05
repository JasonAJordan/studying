def cleanedup(s):
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    cleantext = ''
    for character in s.lower():
        if character in alphabet:
            cleantext += character
        else:
            cleantext += ' '
    return cleantext

def average(numbers):
    total = 0
    for number in numbers:
        total += number
    return total/len(numbers)

def rejoin(string):
  word = ''
  for s in string:
      word += s
  return word