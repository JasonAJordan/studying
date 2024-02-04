import os

def cleanedup(s):
    alphabet = 'abcdefghijklmnopqrstuvwxyz0123456789@_'
    cleantext = ''
    for character in s.lower():
        if character in alphabet:
            cleantext += character
        else:
            cleantext += ' '
    return cleantext


for filename in os.listdir('.'):
  counts = {}
  #print(filename[-7:])
  if (filename[-7:] == '.tweets'):
    with open(filename, encoding='utf-8') as lines:
      for line in lines:
        for word in cleanedup(line).split():
            if word[0] == '@':
              if word in counts:
                counts[word] += 1
              else:
                counts[word] = 1
    #counts.sort()

    listOfUsernames = []
    for usernames in counts:
      listOfUsernames.append([counts[usernames], usernames])
    listOfUsernames.sort()

    print(filename)
    for users in listOfUsernames[-3:]:
       print("  ", users[1], users[0])
    print()

