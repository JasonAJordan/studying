# Jason Jordan
# CSCI 133
# Unit 8 Test

# In this task, we are going to write a program test8.py that implements a graphical quiz game...


from tkinter import *
import random
import readquiz

# Given from instructions 
questions = readquiz.loadQuestions()
currentQuestion = random.choice(questions)
total = 0
correct = 0


# Even though this is only called once on start, I figured to live it as is.
def showStatus():
  statusLabel['text'] = 'Status'


def showStatusOnUpdateGoodAnswer():
  statusLabel['text'] = 'Your answer was correct'
  statusLabel['bg'] = 'light green'

def showStatusOnUpdateBadAnswer():
  statusLabel['text'] = 'Your answer was incorrect'
  statusLabel['bg'] = 'pink'

def showScore():
  scoreLabel['text'] = 'Score: {0} / {1}'.format(correct,total)

def getNewQuestion():
  global currentQuestion 
  currentQuestion = random.choice(questions)
  #questionLabel['text'] = '{0} / {1}'.format(currentQuestion[0], currentQuestion[1])
  questionLabel['text'] = '{0}'.format(currentQuestion[0])
  showScore()


# Not sure why it didn't let me do it this way.  
# def checkAnswer(boolValue):
#   if boolValue == currentQuestion[1]:
#     goodAnswer()
#   else:
#     badAnswer()
  
# We would have to change this if readquiz gave everytype of 
# question and not just true/falses
def checkAnswerTrue():
  if True == currentQuestion[1]:
    goodAnswer()
  else:
    badAnswer()

def checkAnswerFalse():
  if False == currentQuestion[1]:
    goodAnswer()
  else:
    badAnswer()
  

def goodAnswer():
  global correct, total
  correct += 1
  total += 1
  ## Update Status and Score labels accordingly
  getNewQuestion()
  showStatusOnUpdateGoodAnswer()

def badAnswer():
  global correct, total
  correct += 0
  total += 1
  ## Update Status and Score labels accordingly
  getNewQuestion()
  showStatusOnUpdateBadAnswer()

score = 0
root = Tk()

titleFrame = Frame(root)
titleFrame.pack(expand=YES, fill=X)

titleLabel = Label(titleFrame)
titleLabel['text'] = 'Question:'
titleLabel.pack(fill=X)

questionFrame = Frame(root)
questionFrame.pack(expand=YES,fill=X )

#200 felt too small. 
questionLabel = Message(root, width=250)
#questionLabel['text'] = currentQuestion[0]
questionLabel.pack(fill=X)

ButtonsFrame = Frame(root)
ButtonsFrame.pack(expand=YES,fill=X )

yesbutton = Button(ButtonsFrame)
yesbutton['text'] = 'Yes'
# readquiz.py has the answers as True or False
yesbutton['command'] = checkAnswerTrue  #checkAnswer(True) 
yesbutton.pack(side=LEFT, expand=YES, fill=BOTH)
nobutton = Button(ButtonsFrame)
nobutton['text'] = 'No'
nobutton['command'] = checkAnswerFalse #checkAnswer(False) 
nobutton.pack(side=RIGHT, expand=YES, fill=BOTH)


StatusFrame = Frame(root)
StatusFrame.pack(expand=YES, fill=BOTH)

statusLabel = Label(StatusFrame)
statusLabel.pack(side=LEFT)
scoreLabel = Label(StatusFrame)
scoreLabel.pack(side=RIGHT)


clickFrame = Frame(root)
clickFrame.pack(side=BOTTOM, expand=YES,fill =BOTH)


getNewQuestion()
showStatus()
showScore()

mainloop()