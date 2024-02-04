import os
import random
import my

# path = '.'
# for filename in os.listdir(path):
#     print(filename)

# import os
# path = '..'
# for filename in os.listdir(path):
#     newpath = os.path.join(path, filename)
#     if os.path.isdir(newpath):
#         print('***', filename)
#     else:
#         print(filename)

# import os
# def lister(path):
#     for filename in os.listdir(path):
#         newpath = os.path.join(path, filename)
#         if os.path.isdir(newpath):
#             print('***', filename)
#         else:
#             print(filename)
# lister('.')
# print('---')
# lister('..')

# import os
# def lister(path):
#     for filename in os.listdir(path):
#         newpath = os.path.join(path, filename)
#         if os.path.isdir(newpath):
#             print('***', filename)
#             lister(newpath)
#         else:
#             print(filename)
# lister('..')

# import os
# def lister(path, indent):
#     for filename in os.listdir(path):
#         newpath = os.path.join(path, filename)
#         if os.path.isdir(newpath):
#             print(indent, '***', filename)
#             lister(newpath, indent+'    ')
#         else:
#             if filename[-3:] == '.py':
#                 print(indent, filename)
# parentOfParent = os.path.join('..', '..')
# lister(parentOfParent, '')

# 1. Write a program that prints the name Fred 100 times, one time per line.  Do not use
# for or while.  Instead, create a function called printFred that takes in a number and
# prints Fred that number of times.  The function operates by displaying the name Fred
# once and then calling itself with the next smaller number, if that number is at least
# one.  The call printFred(100) should do what we want.

# def printFred(num):
#   print(101-num,'Fred')
#   if (num>1):  
#     printFred(num-1)

# printFred(100)

# 2 Write a program that lists all files in the current directory that contain the string
# 'random'.

# def contains(filename, pattern):
#   with open(filename) as file:
#     for line in file:
#       if pattern in line:
#         return True
#     return False
  
# for filename in os.listdir('.'):
#   if contains(filename, 'random'):
#     print(filename, 'contains random')

# 3 Write a program that reports the total number of files in the current directory and any
# subdirectories, subsubdirectories and so on.

# def counter(path):
#   count = 0
#   for filename in os.listdir(path):
#     newpath = os.path.join(path, filename)
#     if os.path.isdir(newpath):
#       count += count(newpath)
#     else:
#       count += 1
#   return count

# print(counter('.'))

#  4 Write a program that solves the word­scramble puzzles produced by Program 2 in
# Unit 4.  The user enters a scrambled string of letters and the program responds by
# displaying all words in Pride and Prejudice that can be formed by rearranging these
# letters.
# For this program, you should create a dictionary that has alphabetized strings of
# letters as keys and lists of words that can be formed with those letters as the
# associated values.  For example, the key 'acer'—with the letters in alphabetical
# order—would have the value ['care', 'race'].  These four letters can also be rearranged
# to form the word 'acre', but this is not used in Pride and Prejudice.
# To put a string of letters into alphabetical order, first use it to create a list.  Next, use
# the list method sort to put the list in order—if your list is called letters, just write
# letters.sort().  Finally, use the rejoin function you wrote for Program 2 in Unit 4 to
# convert the list back into a string.

# def alphabetize(s):
#   letters = list(s)
#   letters.sort()
#   return my.rejoin(letters)

# # print(alphabetize('race'))
# unscramble = {}

# with open('pap.txt') as book:
# # with open('pap.txt') as book:
#   for line in book:
#     for word in my.cleanedup(line).split():
#       key = alphabetize(word)
#       if key in unscramble:
#         #print('test', key)
#         if word not in unscramble[key]:
#           unscramble[key].append(word)
#       else:
#         unscramble[key] = [word]

# puzzle = input('Puzzle: ')
# key = alphabetize(puzzle)
# if key in unscramble:
#   print(unscramble[key])
# else:
#   print('No answer found')

# 5. Write a program to find the five most common words in Pride and Prejudice ending
# with ‘ing’.  Start by creating a dictionary of counts for all words ending in ‘ing’.
# Then use the dictionary to create a list like this:
# [[5, 'walking'], [17, 'sing'], [2, 'balancing'], ...]
# Each element is a two­item list containing a count and a word.  Call the list method
# sort on this list of lists.  The sorting will be done using the first item of the two­item
# lists—that is elements will be sorted from lowest counts at the beginning to highest
# counts at the end.  The last five elements will then be the ones we want.  Use a slice
# to select them.
# To process all the items in a dictionary, use this pattern:
# for key in dictionary:
# The name key will be assigned the keys used in dictionary, one at a time, though not
# in any predictable order.


# counts = {}

# with open('pap.txt') as book:
#   for line in book:
#     for word in my.cleanedup(line).split():
#       if word in counts:
#         counts[word] += 1
#       else:
#         counts[word] = 1

# ingWords = []
# for word in counts:
#   if word[-3:] == 'ing':
#     ingWords.append([counts[word], word])

# ingWords.sort() # today I learned that python sort does like this
# print(ingWords[-5:])

# 6. Write a program to choose a random five­card hand from a standard deck and then
# report if it is a one­pair hand (two cards of one face value and the other three all
# different face values), a two­pair hand (two cards of one face value, two cards of
# another face value and a fifth card of a third face value), a three­of­a­kind hand (three
# cards of the same face value and two others of different face values, a full house
# (three cards of one face value and two of another) or a four­of­a­kind hand (four cards
# of one face value and a fifth of a different face value).
# Start by creating a dictionary of counts for the face values.  Use this to form a list of
# just the counts.  Sort the list.  The result makes it easy to classify the hand.  For
# example, if the sorted list of counts is [2, 3], the hand is a full house.
# 2
# You should, of course, reuse functions compiled in your cards.py module


import cards
def evaluate(hand):
  fvCounts = {}
  for card in hand:
    fv = cards.faceValueOf(card)
    if fv in fvCounts:
      fvCounts [fv] += 1
    else:
      fvCounts [fv] = 1
  justCounts = []
  for fv in fvCounts:
    justCounts.append(fvCounts[fv])
    justCounts.sort()
  if justCounts == [1,1,1,2]:
    return 'one pair'
  if justCounts==[1,2,2]:
    return 'two pair'
  if justCounts == [1,1,3]:
    return 'three of a kind'
  if justCounts==[2,3]:
    return 'full house'
  if justCounts == [1,4]:
    return 'four of a kind'
  return 'nothing'
hand = cards.shuffledDeck()[:5]
print(hand)
print(evaluate(hand))