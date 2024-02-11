# Learn something new

# import random

# class Card:
#     def __init__(self, f, s):
#         self.myFaceValue = f
#         self.mySuit = s
#     def __str__(self):
#         return self.myFaceValue + ' of ' + self.mySuit
#     def faceValue(self):
#         return self.myFaceValue
#     def suit(self):
#         return self.mySuit
    
# class Deck:
#   faceValues = ['ace', '2', '3', '4', '5', '6', '7', '8',
#                 '9', '10', 'jack', 'queen', 'king']
#   suits = ['clubs', 'diamonds', 'hearts', 'spades']
#   def __init__(self):
#       self.theCards = [Card(faceValue, suit)
#                         for faceValue in Deck.faceValues
#                         for suit in Deck.suits]
#       self.shuffle()
#   def shuffle(self):
#       random.shuffle(self.theCards)
#   def deal(self):
#       return self.theCards.pop()
#   def cardsLeft(self):
#       return len(self.theCards)

    
# card1 = Card('jack', 'spades')
# card2 = Card('3', 'hearts')

# deck1 = Deck()
# deck2 = Deck()
# while deck1.cardsLeft() > 0:
#   card1 = deck1.deal()
#   card2 = deck2.deal()
#   print('{0:18s} {1:18s}'.format(str(card1), str(card2)),end='')
#   sameFaceValue = card1.faceValue() == card2.faceValue()
#   sameSuit = card1.suit() == card2.suit()
#   if sameFaceValue and sameSuit:
#       print('  Coincidence!!!')
#   else:
#       print()


# class personalDeck(Deck):
#     def __init__(self, name):
#         Deck.__init__(self)
#         self.owner = name
#     def __str__(self):
#         return "{0}'s deck".format(self.owner)
    

# from tkinter import *
# from myWidgets import *
# word = ''
# def slide():
#     global word
#     word = userInput.get()
#     result['text'] = ''
#     doSlide()
# def doSlide():
#     charactersToShow = len(result['text']) + 1
#     result['text'] = word[-charactersToShow:]
#     if charactersToShow < len(word):
#         root.after(100, doSlide)
# root = Tk()
# quitButton(root)
# userInput = enhancedEntry(root, 'Enter text:', 'Go', slide)
# userInput.pack(fill=X)
# result = Label(root)
# result.pack(side=LEFT, fill=X, anchor=W)

# mainloop()

#Apply what you know

'''1.Define a new class for bank accounts.  Include methods to deposit money in the
account, to withdraw money from the account and to display a statement of all
transactions.  Printing a bank account should display the owner’s name and the
current balance.  Write a test program to demonstrate the use of all features of the
class
'''

# def money(number):
#   pattern = '${0:.2f}'
#   return pattern.format(number)

# class Account:
#   def __init__(self, name, amount):
#     self.owner = name
#     self.balance = amount
#     self.transactions = []
#     self.runningBalance = amount
#   def __str__(self):
#     pattern = 'Account of {0}, balance: {1}'
#     return pattern.format(self.owner, money(self.balance))
#   def deposit(self, amount):
#     self.balance += amount
#     self.transactions.append(['Deposit', amount])
#   def withdraw(self, amount):
#     self.balance -= amount
#     self.transactions.append(['Withdrawl', amount])
#   def statement(self):
#     pattern = '{0:>12s} {1:>12s} {2:>12s}'
#     print(pattern.format('Withdrawals', 'Deposits', 'Balance'))
#     print(pattern.format('', '', ''))
#     for tran in self.transactions:
#       amount = tran[1]
#       if tran[0] == 'Deposit':
#         self.runningBalance += amount
#         print(pattern.format('', money(amount), money(self.runningBalance)))
#       else:
#         self.runningBalance -= amount
#         print(pattern.format(money(amount),'', money(self.runningBalance)))
#     self.transactions = []


# x = Account('John Doe', 321)
# print(x)

# x.deposit(1.95)
# x.withdraw(22.95)
# x.withdraw(100)
# x.statement()

# print()

# x.deposit(300)
# x.withdraw(29.95)
# x.withdraw(75.92)
# x.statement()

'''
2. Define a new sliding label widget based on the code for Program 9.0.5.  Include a
method that sets the text property of the label by sliding it into place from the
left hand side.  Add this widget to myWidgets.py and use it to rewrite Program 9.0.5.

3. 2 but reverse

'''
# from tkinter import *
# from myWidgets import *



# word = ''
# # def slide():
# #     global word
# #     word = userInput.get()
# #     result['text'] = ''
# #     doSlide()
# # def doSlide():
# #     charactersToShow = len(result['text']) + 1
# #     result['text'] = word[-charactersToShow:]
# #     if charactersToShow < len(word):
# #         root.after(100, doSlide)

# def go():
#     result.slideText(userInput.get())

# root = Tk()
# quitButton(root)
# userInput = enhancedEntry(root, 'Enter text:', 'Go', go)
# userInput.pack(fill=X)

# #result = SlidingLabel(root)
# result = ReverseSlidingLabel(root)
# result.pack(side=LEFT, fill=X, anchor=W)

# mainloop()

# 4 Add the enhanced entry widget of Program 9.0.5 to myWidgets.py and use it to
# rewrite the word scramble puzzle solver of Program 8.1.

# import my
# from tkinter import *
# from myWidgets import *

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
#   puzzle = userInput.get()
#   key = alphabetize(puzzle)
#   if key in unscramble:
#     answerLabel['text'] = '{0}'.format(unscramble[key])
#   else:
#     answerLabel['text'] = 'No answer found'

# root = Tk()

# userInput = enhancedEntry(root, 'Enter scrambled word:', 'unscramble', solve)
# userInput.pack(fill=X)

# answerLabel = Label(root)
# answerLabel.pack(side=BOTTOM, anchor=W)

# mainloop()

#5. Use the enhanced entry widget of Program 9.0.5 to rewrite the vocabulary learner of
# Program 8.2.  Be sure that code for the enhanced entry widget is included in
# myWidgets.py before you start

# from tkinter import *
# from myWidgets import *

# translations = {}
# word = ''


# def translate():
#   global word
#   word = userInput.get()
#   # userInput.delete(0,END)
#   if word in translations:
#     answer['text'] = '{0} = {1}'.format(word, translations[word])
#   else:
#     userInput.setPrompt('Enter translation for {0}'.format(word))
#     userInput.setActionText('save')
#     userInput.setAction(save)
#     answer['text'] = ''

# def save():
#   translations[word] = userInput.get()
#   userInput.setPrompt('Enter word:')
#   userInput.setActionText('Translate')
#   userInput.setAction(translate)


# root = Tk()

# userInput = enhancedEntry(root, ' Enter word:', 'Translate', translate)
# userInput.pack(fill= X)

# answer = Label(root)
# answer.pack(side=BOTTOM, anchor=W)

# mainloop()

# 3 Define a new widget that initially displays a single entry box, along with two buttons.
# One button can be set to display any text and carry out any function, as in the
# enhanced entry widget.

from tkinter import *
from myWidgets import *

class multipleEntry (Frame) :
  def __init__ (self, parent, promptText, actionText, action):
    Frame.__init__(self, parent)
    self.prompt = Label (self) 
    self.prompt['text'] = promptText 
    self.prompt.pack(anchor=W)

    self.entries =[self.makeEntryFrame()]
    self.moreButton = self.makeMoreButton()

    self.actionButton =  Button(self)
    self.actionButton['text'] = actionText 
    self.actionButton['command'] = action 
    self.actionButton.pack(side=BOTTOM, anchor=W)

  def makeEntryFrame(self):
    self.lastFrame = Frame(self)
    self.lastFrame.pack(fill=X, anchor=W)
    entry = Entry(self.lastFrame)
    entry.pack(side=LEFT)
    return entry
  
  def makeMoreButton(self):
    button = Button(self.lastFrame)
    button['text'] = 'More'
    button['command'] = self.addEntry
    button.pack(side=LEFT)
    return button
  
  def addEntry(self):
    self.entries.append(self.makeEntryFrame())
    self.moreButton.destroy()
    self.moreButton = self.makeMoreButton()

  def get(self):
    print([entry.get() for entry in self.entries])
    return [entry.get() for entry in self.entries]

def pick():
  names = userInput.get()
  favorite['text'] = 'My favorite name is '
  for name in names:
    if len(name) >= 5:
      favorite['text'] += name
      return
  favorite['text'] += names[0]

root = Tk()

userInput = multipleEntry(root, 'Enter Names:', 'Pick favorite', pick)
userInput.pack(expand=YES, fill=BOTH)

favorite = Label(root)
favorite.pack(side=BOTTOM, anchor=W)
mainloop()
