# Jason Jordan
# CSCI 133
# Unit 4 Test

import cards

def roundResult(deck):
  for num in range(6):
    if cards.faceValueOf(deck[num]) == 'ace':
      return 1
  return -1

while True:
  initalDollars = int(input('Enter initial amount: '))
  totalRounds = 0
  for num in range(1000):
    currentDollars = initalDollars
    rounds = 0
    while 0 < currentDollars < 2*initalDollars:
        # I have to shuffle the deck every round
        sdeck = cards.shuffledDeck()
        #print(currentDollars, rounds, totalRounds)
        currentDollars += roundResult(sdeck)
        rounds += 1
    totalRounds += rounds
  print('Average number of rounds:', totalRounds/1000 )
  
  