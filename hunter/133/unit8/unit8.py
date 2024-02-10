# 1.
# from tkinter import *
# import cards


# def firstCard():
#     deck = cards.shuffledDeck()
#     card['text'] = deck[0]
# root = Tk()
# card = Label(root)
# card.pack()
# pick = Button(root)
# pick['text'] = 'Pick a card'
# pick['command'] = firstCard
# pick.pack()

# mainloop()

# .3
# from tkinter import *
# root = Tk()

# root['bg'] = 'light yellow'
# status = Frame(root)
# status['bg'] = 'light green'
# ID1 = Label(status)
# ID1['text'] = 'Status frame'
# ID1['bg'] = 'light blue'
# ID1.pack()

# action = Frame(root)
# action['bg'] = 'pink'
# ID2 = Label(action)
# ID2['text'] = 'Action frame'
# ID2['bg'] = 'light blue'
# ID2.pack()


# status.pack(side=LEFT, expand=YES, fill=BOTH)
# action.pack()

# mainloop()

#4 / 5 / 6
# from tkinter import *
# import random

# numberShares = 0
# account = 10000
# sharePrice = 97

# # def update():
# #     shares['text'] = 'You own {0} shares'.format(numberShares)
# #     cash['text'] = 'Cash balance: ${0:.0f}'.format(account)
# #     totalWorth = account + numberShares*sharePrice
# #     worth['text'] = 'Total worth: ${0:.0f}'.format(totalWorth)
# #     price['text'] = '${0:.2f}/share'.format(sharePrice)

# def update():
#     shares['text'] = 'You own {0} shares'.format(numberShares)
#     cash['text'] = 'Cash balance: ${0:.0f}'.format(account)
#     totalWorth = account + numberShares*sharePrice
#     worth['text'] = 'Total worth: ${0:.0f}'.format(totalWorth)
#     price['text'] = '${0:.2f}/share'.format(sharePrice)


# def doBuy():
#     global account, numberShares
#     if account >= 10*sharePrice:
#         numberShares += 10
#         account -= 10*sharePrice
#         update()

# def doSell():
#     global account, numberShares
#     if numberShares >= 10:
#         numberShares -= 10
#         account += 10*sharePrice
#         update()

# def changePrice():
#     global sharePrice
#     sharePrice += random.random()*4 - 2
#     update()
#     root.after(2000, changePrice)

# root = Tk()
# status = Frame(root)
# shares = Label(status)
# shares['text'] = 'Number of shares'
# shares.pack(anchor=W)
# cash = Label(status)
# cash['text'] = 'Cash on hand'
# cash.pack(anchor=W)
# worth = Label(status)
# worth['text'] = 'Total worth'
# worth.pack(side=BOTTOM, anchor=W)
# action = Frame(root)
# price = Label(action)
# price['text'] = 'Price of stock'
# price.pack(anchor=E)
# sell = Button(action)
# sell['text'] = 'sell'
# sell['command'] = doSell
# sell.pack(side=BOTTOM, fill=X)
# buy = Button(action)
# buy['text'] = 'buy'
# buy['command'] = doBuy #like the onclick function
# buy.pack(side=BOTTOM, fill=X)
# status.pack(side=LEFT, expand=YES, fill=BOTH)
# action.pack(side=RIGHT, expand=YES, fill=BOTH)

# changePrice()

# update()

# mainloop()


# def nextYear(year):
#     year += 1
#     print('***', year, '***')
# def makeItBeNextYear():
#     global year
#     year += 1
# year = 1832

# nextYear(year)
# print(year)
# makeItBeNextYear()
# print(year)

## Learn something
# Honestly I when directly to the video solutions for these

# import my
# from tkinter import *

# def alphabetize(s):
#   letters = list(s)
#   letters.sort()
#   return my.rejoin(letters)

# # print(alphabetize('race'))
# unscramble = {}
# filename = 'hunter\\133\\pap.txt'

# with open(filename) as book:
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

# def solve():
#   #puzzle = input('Puzzle: ')
#   puzzle = inputBox.get()
#   key = alphabetize(puzzle)
#   if key in unscramble:
#     #print(unscramble[key])
#     answerLabel['text'] = '{0}'.format(unscramble[key])
#   else:
#     #print('No answer found')
#     answerLabel['text'] = 'No answer found'

# root = Tk()

# inputFrame = Frame(root)
# inputFrame.pack(fill=X)

# inputBoxLabel = Label(inputFrame)
# inputBoxLabel['text'] = 'Enter scramble word:'
# inputBoxLabel.pack(side=LEFT, fill=X)

# inputBox = Entry(inputFrame)
# inputBox.pack(side=LEFT, fill=X)

# button = Button(inputFrame)
# button['text'] = 'unscramble'
# button['command'] = solve
# button.pack(side=LEFT, fill=X)

# answerLabel = Label(root)
# answerLabel.pack(side=BOTTOM, anchor=W)

# mainloop()

# Number 2
# from tkinter import *

# #Translate
# translations = {}
# word = ''

# def translate():
#   global word
#   word = userInput.get()
#   userInput.delete(0,END)
#   if word in translations:
#     answer['text'] = '{0} = {1}'.format(word, translations[word])
#   else:
#     prompt['text'] = 'Enter translation for {0}'.format(word)
#     do['text'] = 'save'
#     do['command'] = save
#     answer['text'] = ''

# def save():
#   translations[word] = userInput.get()
#   prompt['text'] = 'Enter word:'
#   userInput.delete(0,END)
#   do['text'] = 'Translate'
#   do['command'] = translate


# root = Tk()

# topFrame = Frame(root)
# topFrame.pack(fill=X)

# prompt = Label(topFrame)
# prompt['text'] = 'Enter word:'
# prompt.pack(side=LEFT)

# userInput = Entry(topFrame)
# userInput.pack(side=LEFT, fill=X)

# do = Button(topFrame)
# do['text'] = 'Translate'
# do['command'] = translate
# do.pack(side=LEFT)

# answer = Label(root)
# answer.pack(side=BOTTOM, anchor=W)

# mainloop()

# 3
# from tkinter import *
# import random

# score = 0
# root = Tk()

# scoreFrame = Frame(root)
# scoreFrame.pack(expand=YES, fill=BOTH)

# scoreLabel = Label(scoreFrame)
# scoreLabel.pack(expand=YES)

# def showScore():
#   scoreLabel['text'] = 'Score: {0}'.format(score)

# clickFrame = Frame(root)
# clickFrame.pack(side=BOTTOM, expand=YES,fill =BOTH)

# def changeLabels():
#   for button in buttons:
#     button['text'] = random.choice(['click', 'clack', 'cluck'])
#     button['bg'] = buttonDefaultColor
#   root.after(1500, changeLabels)

# def makeButton():
#   button = Button(clickFrame)
#   def cmd():
#     global score
#     if button['bg'] == buttonDefaultColor:
#       if button['text'] == 'click':
#         score += 10
#         button['bg'] = 'light green'
#       else:
#         score -= 10
#         button['bg'] = 'light yellow'
#       showScore()
#   button['command'] = cmd
#   button.pack(side=LEFT, expand=YES, fill=BOTH)
#   return button

# buttons = [makeButton() for i in range(5)]
# buttonDefaultColor = buttons[0]['bg']
# changeLabels()
# showScore()
# mainloop()

#4
from tkinter import *
import random
import my

counts = {}  
filename = 'hunter\\133\\pap.txt'

with open(filename) as book:
  for line in book:
    for word in my.cleanedup(line).split():
      if word in counts:
        counts[word] += 1
      else:
        counts[word] = 1

def search():
  endingWords = []
  ending = inputBox.get()

  for word in counts:
    if word[-(len(ending)):] == ending:
      endingWords.append([counts[word], word])

  endingWords.sort() # today I learned that python sort does like this
  answerLabel['text'] = makeAnswer(endingWords[-5:])
        
def makeAnswer(lastWords):
  if len(lastWords) == 0:
    return 'Nothing found'
  answer = ''
  for index in range(1, len(lastWords)+ 1):
    pattern = '{0} ({1}) '
    answer += pattern.format(lastWords[-index][1], lastWords[-index][0])
  return answer


root = Tk()
inputFrame = Frame(root)
inputFrame.pack(fill=X)

inputBoxLabel = Label(inputFrame)
inputBoxLabel['text'] = 'Enter ending:'
inputBoxLabel.pack(side=LEFT, fill=X)

inputBox = Entry(inputFrame)
inputBox.pack(side=LEFT, fill=X)

button = Button(inputFrame)
button['text'] = 'search'
button['command'] = search
button.pack(side=LEFT, fill=X)

answerLabel = Label(root)
answerLabel.pack(side=BOTTOM, anchor=W)

mainloop()