# import my
import random


# print(my.average([1,2,3,4]))
# print(my.cleanedup('This--WOW--is ready for split()'))

# import random
# colors = ['red', 'blue', 'green', 'yellow', 'orange']
# print(random.choice(colors))
# random.shuffle(colors)
# print(colors)

# countFlips = 0
# initial = 10
# bankroll = initial
# while 0 < bankroll < 2*initial:
#     flip = random.choice(['heads', 'tails'])
#     countFlips += 1
#     if flip == 'heads':
#         bankroll += 1
#     else:
#         bankroll -= 1
# print(countFlips)

# def oneGame(initial):
#     countFlips = 0
#     bankroll = initial
#     while 0 < bankroll < 2*initial:
#         flip = random.choice(['heads', 'tails'])
#         countFlips += 1
#         if flip == 'heads':
#             bankroll += 1
#         else:
#             bankroll -= 1
#     return countFlips
# # print(oneGame(10))

# totalFlips = 0
# for number in range(1000):
#     totalFlips += oneGame(10)
# print('Average number of flips:', totalFlips/1000)

def paperStatus(classSize):
    papers = list(range(classSize))
    random.shuffle(papers)
    print(papers)
    for student in range(classSize):
        if papers[student] == student:
            return 'warning'
    return 'okay'


def experiment(classSizes, repetitions):
    for classSize in classSizes:
        print('Class size: ', classSize)
        warnings = 0
        for number in range(repetitions):
            if paperStatus(classSize) == 'warning':
                warnings += 1
        print('Warnings:', warnings, 'out of', repetitions)
        print()

# print(paperStatus(30))
# print(paperStatus(30))
# print(paperStatus(30))

#experiment([10, 10, 10], 10000)

# Write a program that prints the name Fred 100 times, one time per line.
# for number in range(100):
#     print(number+1, 'Fred')
        
def cleanedup(s):
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    cleantext = ''
    for character in s.lower():
        if character in alphabet:
            cleantext += character
        else:
            cleantext += ' '
    return cleantext
concordance = {}

def wordlist(filepath):
    words = {}
    #with open('hunter/133/unit4/pap.txt') as book:
    with open(filepath) as book:
      for line in book:
        for word in cleanedup(line).split():
          length = len(word)
          if length in words:
             words[length].append(word)
          else: words[length] = [word]
          # if word not in words:
          #     words.append(word)
    return words

# words = wordlist('pap.txt')
# print(words)
        
# 2 In order to scramble a string, you’ll have to start by turning it into a list of
# individual characters.  After the list is rearranged randomly, you’ll want to put the
# characters back together into a single string.  Write a function called rejoin that
# does this.  The call rejoin(['c', 'a', 't']) should return the string 'cat'.

# 3 Write a function called scramble that takes in a string and returns a string with the
# same letters in a random order.

def scramble(string):
  l = list(string)
  random.shuffle(l)
  return rejoin(l)

def rejoin(string):
  word = ''
  for s in string:
      word += s
  return word

# s = 'caacaat'
# x = scramble(s)
# print(x)

# Write a program that produces word­scramble puzzles.  The program should choose
# words at random from Pride and Prejudice, display the letters of the word in a
# random order and challenge the user to guess the original word.

# level = 3
# words = wordlist('hunter/133/unit4/pap.txt')
# while True:
#   word = random.choice(words[level])
#   mixed = scramble(word)
#   print('Letters:', mixed)
#   guess = input('Guess: ')
#   if guess == word:
#     level += 1
#     print('Right!')
#   else:
#    print('Sorry, the word was', word)
#    level -= 1

# 3 Most of the puzzles produced by the previous program are much too hard.  Modify
# the program so that it gives the user a three­letter puzzle to start and then adjusts the
# number of letters up by one every time a correct answer is given and down by one for
# every wrong answer.  In this way, the program will generally produce puzzles that are
# at the user’s level.


# 4 Write a program that randomly chooses a hand of five cards from a standard deck of
# playing cards and displays it for the user to see.  Use a function that returns a shuffled
# deck, ready for dealing.
# A standard deck consists of 52 cards.  There are 13 each of four suits: clubs,
# diamonds, hearts and spades.  Within each suit, the 13 face values are: ace, 2, 3, 4, 5,
# 6, 7, 8, 9, 10, jack, queen and king.  We identify a card by its face value and suit, e.g.
# the 2 of hearts, the jack of clubs, etc
   
# cardValues = ['ace', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'jack', 'queen', 'king']
# suits = ['clubs', 'diamonds', 'hearts', 'spaces']

# def deck():
#   deck = []
#   for cardValue in cardValues:
#     for suit in suits:
#      deck.append(cardValue + ' of ' + suit)
#   random.shuffle(deck)
#   return deck

# d = deck()

# def detIsAce(string):
#   for word in string.split():
#     if word == "ace":
#       return True
#     else:
#        return False     

# def whichSuit(card):
#   return card.split()[2] 
import cards
d = cards.deck()

aceCount = 0
clubCount = 0
for num in range(5):
    print(d[num])
    if cards.detIsAce(d[num]):
      aceCount += 1
    if cards.whichSuit(d[num] ) == 'clubs':
      clubCount +=1
print('Aces:', aceCount)
print('clubCount',clubCount ) 
      

# Modify the previous program so that, in addition to displaying a five­card hand, it
# reports the number of aces and the number of clubs in the hand.  Use one function to
# determine the face value, given a string like 'queen of diamonds', and another one to
# determine the suit.

