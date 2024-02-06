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

#.3
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

def alphabetize(s):
  letters = list(s)
  letters.sort()
  return my.rejoin(letters)

# print(alphabetize('race'))
unscramble = {}

with open('pap.txt') as book:
# with open('pap.txt') as book:
  for line in book:
    for word in my.cleanedup(line).split():
      key = alphabetize(word)
      if key in unscramble:
        #print('test', key)
        if word not in unscramble[key]:
          unscramble[key].append(word)
      else:
        unscramble[key] = [word]

puzzle = input('Puzzle: ')
key = alphabetize(puzzle)
if key in unscramble:
  print(unscramble[key])
else:
  print('No answer found')