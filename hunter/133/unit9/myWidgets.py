from tkinter import *

class quitButton(Button):
    def __init__(self, parent):
        Button.__init__(self, parent)
        self['text'] = 'Quit'
        self['command'] = parent.destroy
        self.pack(side=BOTTOM, anchor=E)

class enhancedEntry(Frame):
    def __init__(self, parent, prompt, actionText, action):
        Frame.__init__(self, parent)
        self.inputBoxLabel = Label(self)
        self.inputBoxLabel['text'] = prompt
        self.inputBoxLabel.pack(side=LEFT, fill=X)
        self.inputBox = Entry(self)
        self.inputBox.pack(side=LEFT, fill=X)
        self.button = Button(self)
        self.button['text'] = actionText
        self.button['command'] = action
        self.button.pack(side=LEFT, fill=X)
    def get(self):
        return self.inputBox.get()
    def setActionText(self, actionText):
      self.button['text'] = actionText
    def setPrompt(self, prompt):
        self.inputBoxLabel['text'] = prompt
    def setAction(self, cmd):
        self.button['command'] = cmd

# The last question from unit 9 has the closest to what I want for test 9,
# the code will be derived from that. 

class CardsFrame (Frame) :
  def __init__ (self, parent, hand):
    Frame.__init__(self, parent)
    self.score = Label(self) 
    self.score['text'] = ""
    self.score.pack(expand=YES, fill=BOTH)

    self.entries = []
    self.entriesFrame = Frame(self)
    self.entriesFrame.pack(fill=X, anchor=W)

  def makeEntriesFrame(self, hand ):
    self.entriesFrame.destroy()
    self.entriesFrame = Frame(self)
    self.entriesFrame.pack(fill=X, anchor=W)

    self.entries = []
    for card in hand:
      self.entries.append(self.makeEntryFrame(card))

  def makeEntryFrame(self, card):
    entry = Button(self.entriesFrame,  width=15)
    entry['text'] = '{0}'.format(str(card))
    entry.pack( anchor='center')
    return entry
  

# For 9.2
class SlidingLabel(Label):
    def __init__(self, parent):
      Label.__init__(self, parent)

    def slideText(self, text):
      self.word = text
      self['text'] = ''
      self.doSlide()

    def doSlide(self):
       self.charactersToShow = len(self['text']) + 1
       self['text'] = self.word[-self.charactersToShow:]
       if self.charactersToShow < len(self.word):
          # we use self instead of root
          self.after(100, self.doSlide)

# For 9.3
class ReverseSlidingLabel(Label):
    def __init__(self, parent):
      Label.__init__(self, parent)

    def slideText(self, text):
      self.word = text
      self.charactersToShow = 0
      self['text'] = ''
      self.doSlide()

    def doSlide(self):
       self.charactersToShow += 1
       # I personally don't like this as a ' ' may not be the same size as "W"
       display = ' ' *(len(self.word) -self.charactersToShow)
       display += self.word[:self.charactersToShow]
       self['text'] = display
       if self.charactersToShow < len(self.word):
          self.after(100, self.doSlide)