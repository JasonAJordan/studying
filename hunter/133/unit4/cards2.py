import random

cardValues = ['ace', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'jack', 'queen', 'king']
suits = ['clubs', 'diamonds', 'hearts', 'spaces']

def deck():
  deck = []
  for cardValue in cardValues:
    for suit in suits:
     deck.append(cardValue + ' of ' + suit)
  random.shuffle(deck)
  return deck


# def detIsAce(string):
#   for word in string.split():
#     if word == "ace":
#       return True
#     else:
#        return False     

def getValue(card):
  return card.split()[0] 

def whichSuit(card):
  return card.split()[2] 



