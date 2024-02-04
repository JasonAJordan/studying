# Jason Jordan
# CSCI 133
# Unit 3 Test

# 1. The total number of tweets

# 2. The tweet that contains the most words (don’t use cleanedup for preprocessing here)

# 3. Finally, a username is a word that starts with an @ symbol (for example, @MarkTwain). For simplicity, 
# we will assume that any word that contains @ at any position is a username (that is, consider Mark@Twain or @Mark@Twain@ to be valid usernames). 
# Your program should compile the information on how many times different usernames are mentioned in Elon Musk’s 
# tweets, then provide an interface that allows a user to quickly look up how many times any particular username is mentioned.

def cleanedup(s):
    alphabet = '@abcdefghijklmnopqrstuvwxyz'
    cleantext = ''
    for character in s.lower():
        if character in alphabet:
            cleantext += character
        else:
            cleantext += ' '
    return cleantext

total = 0
longestLineCount =0
longestLineText = ''
concordance = {}
#with open('/Users/jason/Dev/studying/hunter/133/unit3/elon-musk.txt') as tweets:
with open('elon-musk.txt') as tweets:
  for line in tweets:
    total += 1
    words = line.split()
    if len(words) > longestLineCount:
       longestLineCount = len(words)
       longestLineText = line
    
    for word in cleanedup(line).split():
      for char in word:
         if char == '@':
          if word in concordance:
              concordance[word] = concordance[word] + 1
          else:
              concordance[word] = 1



print("Number of tweets:", total)
print("Tweet with max number of words:", longestLineText)
while True:
  name = input('Enter username:').lower()
  if name in concordance:
    print('Mentioned', concordance[name], 'times.')
  else:
    print('Not mentioned.')
  print()
