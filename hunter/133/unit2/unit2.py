# -*- coding: utf-8 -*-

# line = 'This is a sample line of text.'
# print(len(line))
# print(line.split())
# print(len(line.split()))


# print(2+3)
# print(71*(5-2))
# print(36/3)
# print(2**1000)

# x = 4
# print(x*2)
# print(x)
# x = x*2
# print(x)

# with open('hunter\\133\\unit2\\pap.txt') as book:
#     for line in book:
#         if 'property' in line:
#             print(line)

# count = 0
# with open('hunter\\133\\unit2\\pap.txt') as book:
#     for line in book:
#         count += len(line.split())
# print('Word count:', count)

# count = 0
# with open('hunter\\133\\unit2\\pap.txt') as book:
#     for line in book:
#         for word in line.split():
#             if word == 'the':
#                 count += 1
# print("Number of times 'the' is used:", count)

# maxcount = 0
# with open('hunter\\133\\unit2\\pap.txt') as book:
#     for line in book:
#         count = len(line.split())
#         if count>maxcount:
#             maxline = line
#             maxcount = count
# print(maxline)

## Apply what you know

# 0. Study the programs in the Learn something new section until you can write them
#       yourself from scratch without relying on this document or any other source of
#       information.  Here are the programs:
#   0.1. List the lines in the file pap.txt that contain the word ‘property’.
#   0.2. Count the number of words in the file pap.txt.
#   0.3. Count the number of times the word ‘the’ appears in the file pap.txt.
#   0.4. Find and display the line in the file pap.txt containing the most words

#'hunter\\133\\unit2\\pap.txt'

# linecount = 0
# wordcount = 0
# thecount = 0
# maxcount = 0
# with open('hunter\\133\\unit2\\pap.txt') as book:
#   for line in book:
#     linecount = linecount + 1
#     if 'the' in line:
#       thecount = thecount + 1
#     count = len(line.split())
#     if count > maxcount:
#             maxline = line
#             maxcount = count
#     for word in line.split():
#       wordcount = wordcount + 1
      

# print(linecount)
# print(wordcount)
# print(thecount)
# print(maxline)

# 1. Write a program that counts the number of times the lowercase letter ‘e’ is used in the
# file pap.txt.
# count = 0
# # with open('hunter\\133\\unit2\\pap.txt') as book:
# with open('/Users/jason/Dev/studying/hunter/133/unit2/pap.txt') as book:
#   for line in book:
#     for char in line:
#       if char == 'e':
#         count = count + 1
# print(count)


# 2. Write a program that checks itself and reports the number of lines of the program that
# contain the word ‘for’, either alone or as part of another word.
# count = 0
# with open('/Users/jason/Dev/studying/hunter/133/unit2/pap.txt') as book:
#   for line in book:
#     for word in line.split():
#       if 'for' in word:
#         count = count + 1
# print(count)
# # prints 1924

# 3. Write a program to determine which word is the shortest of the following: apple,
# banana, peach, plum, grapefruit.

# fruits = ['apple', 'banana', 'peach', 'plum', 'grapefruit']
# count = len(fruits[0])
# shortest = fruits[0]
# for fruit in fruits:
#   if len(fruit) < count:
#     shortest = fruit

# print(shortest)

# 4. Write a program to determine the average of the numbers given in a list.  The first
# line of your program should give a name to a list of numbers to be averaged: e.g.
# numbers = [3, 17, 1, 44, 239].

# numbers = [3, 17, 1, 44, 239]
# total = 0.0
# for num in numbers:
#   total += num
# average = total / len(numbers)
# print(average)

# 5. The list method append changes a list by adding an item at the end.  For example if
# students refers to the list ['Ed' 'Ted', 'Fred'], then after calling
# students.append('Jennifer') the list will be ['Ed' 'Ted', 'Fred', 'Jennifer'].  Write a
# program using this method to print a list of the lengths of the words given in a list.
# The first line of your program should give a name to the list of words, e.g. students =
# ['Ed', 'Ted', 'Fred', 'Jennifer'].  For this example, the output would be [2, 3, 4, 8].

# students = ['Ed', 'Ted', 'Fred', 'Jennifer']
# output = []
# for student in students:
#   output.append(len(student))
# print(output)

# 6 The built­in function input displays a string on the screen and returns a string
# containing what the user types in response.  For example, the statement answer =
# input('How are you feeling? ') will display the given question and wait for the user to
# type something and press enter.  Then answer will be assigned to a string that holds
# what the user has typed.  Write a program using input that asks the user to type in any
# number of words and then reports the maximum number of vowels contained in a
# single word, e.g. ‘please’ is a six­letter word containing three vowels.

respone = input('Please enter words: ')
words = respone.split()
vowels = 'aeiou'
maxvowels = 0
for word in words:
  count = 0
  for letter in word:
    if letter in vowels:
      count += 1
  if count > maxvowels:
    maxvowels = count 
    maxword = word
print( maxword, maxvowels)


