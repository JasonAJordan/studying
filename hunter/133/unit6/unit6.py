
import urllib.request
import os
import my

#with open('/Users/jason/Dev/studying/hunter/133/unit2/alice.txt') as book:
# filename = 'hunter\\133\\pap.txt'
# book = open(filename)
# lines = book.readlines()
# book.close()

# print(lines[130])

# import urllib.request
#url = ' http://meadoweast.com/csci133/hf.txt'
# filename = 'hunter\\133\\hf.txt'
# book = open(filename)
# lines = book.readlines()
# book.close()
# # book = urllib.request.urlopen(url)
# # lines = url.readlines()
# # book.close()
# print(lines[124])

import urllib.request, shelve
url = 'https://futureboy.us/frinkdata/cpiai.txt'

file = urllib.request.urlopen(url)
lines = file.readlines()
file.close()
cpi = {}
for line in lines:
    items = line.decode().split()
    if len(items) > 0 and items[0].isdigit():
        cpi[int(items[0])] = [float(item) for item in items[:13]]
shelf = shelve.open('cpi')
shelf['cpi'] = cpi
shelf.close()



shelf = shelve.open('cpi')
cpi = shelf['cpi']
shelf.close()

# for year in range(1920, 1991):
#     if cpi[year][1] > cpi[year][2]:
#         print(year)

# 1. Write and test a function called lengths that takes in a list of strings and returns a list
# of the lengths of the strings.  If we pass it ['Ed', 'Ted', 'Fred', 'Jennifer'], it will return
# [2, 3, 4, 8].  Your function should use a list comprehension.

# def lens(strings):
#   arr = []
#   for s in strings:
#     arr.append(len(s))
#   return arr

# names =  ['Ed', 'Ted', 'Fred', 'Jennifer']
# print(lens(names))

# 2 Write a program to add Pride and Prejudice to the shelve object that holds
# Huckleberry Finn.

import shelve

with open('hunter\\133\\pap.txt') as book:
  lines = book.readlines()
  # lines = []
  # for line in book:
  #   lines.append(line)
  
shelf = shelve.open('books')
shelf['Pride and Prejudice'] = lines
shelf.close()

with open('hunter\\133\\hf.txt') as book:
  lines = book.readlines()
shelf = shelve.open('books')
shelf['Huckleberry Finn'] = lines
shelf.close()

shelf = shelve.open('books')
newlines = shelf['Pride and Prejudice']
#print(newlines[100])
shelf.close()

# 3 Use the shelved versions of Pride and Prejudice and Huckleberry Finn to see which
# of the two novels uses longer words on average.



def averageWordLength(title):
  shelf = shelve.open('books')
  lines = shelf[title]
  shelf.close()

  number = 0
  totalLength = 0

  for line in lines:
    for word in my.cleanedup(line).split():
      number += 1
      totalLength += len(word)

  return totalLength/number

# for title in ['Pride and Prejudice', 'Huckleberry Finn']:
#   print(title, averageWordLength(title))

# 4 Use the shelved version of the Consumer Price Index data to find the largest
# percentage increase in prices ever recorded over the summer months—that is, from
# May to September—and the year in which it occurred.  Your program should use a
# function to compute the percentage increase.  If a value increases from begin to end,
# the percentage increase is given by the formula: 100*(end/begin-1)
 
# with open('hunter\\133\\hf.txt') as book:
#   lines = book.readlines()
# shelf = shelve.open('books')
# shelf['Huckleberry Finn'] = lines
# shelf.close()

# import urllib.request, shelve
# url = 'https://futureboy.us/frinkdata/cpiai.txt'

# file = urllib.request.urlopen(url)
# lines = file.readlines()
# file.close()
# cpi = {}
# for line in lines:
#     items = line.decode().split()
#     if len(items) > 0 and items[0].isdigit():
#         cpi[int(items[0])] = [float(item) for item in items[:13]]
# shelf = shelve.open('cpi')
# shelf['cpi'] = cpi
# shelf.close()


def pctIncrease(begin, end):
  return 100*(end/begin-1)

# # with open('hunter\\133\\cpi.txt') as book:
# #   lines = book.readlines()
# # shelf = shelve.open('cpi')
# # shelf = lines
# # shelf.close()


shelf = shelve.open('cpi')
cpi = shelf['cpi']
shelf.close()

maxIncrease = 0
for year in range(1913, 2008):
  increase = pctIncrease(cpi[year][5], cpi[year][9])

  if increase > maxIncrease:
    maxIncrease = increase
    maxYear = year

print(maxYear, maxIncrease)

# 6 Write a function f that takes in a number x and returns 17.7/(4x2-12x+13).  Then write a
# program that asks the user for two floating point numbers, checks the value of f at
# 100 evenly spaced points between these two numbers and reports the highest value
# found.  Use the built­in function max, which takes in a list of values and returns the
# highest.
