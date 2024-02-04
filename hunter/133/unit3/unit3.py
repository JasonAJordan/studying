

# passwords = {'smith':'apple', 'jones':'a34xx', 'brown':'zzzz'}
# username = input('username: ')
# password = input('Password: ')
# if password == passwords[username]:
#     print('You are logged in.')
# else:
#     print('Bad password.')

# concordance = {}
# with open('/Users/jason/Dev/studying/hunter/133/unit3/pap.txt') as book:
#     linenum = 1
#     for line in book:
#         for word in line.split():
#             if word in concordance:
#                 concordance[word].append(linenum)
#             else:
#                 concordance[word] = [linenum]
#         linenum += 1
# print('Test:', concordance['property'])


# this is super cool and fast
# def cleanedup(s):
#     alphabet = 'abcdefghijklmnopqrstuvwxyz'
#     cleantext = ''
#     for character in s.lower():
#         if character in alphabet:
#             cleantext += character
#         else:
#             cleantext += ' '
#     return cleantext
# concordance = {}

# with open('/Users/jason/Dev/studying/hunter/133/unit3/pap.txt') as book:
#     linenum = 1
#     for line in book:
#         for word in cleanedup(line).split():
#             if word in concordance:
#                 concordance[word].append(linenum)
#             else:
#                 concordance[word]=[linenum]
#         linenum += 1
# while True:
#     word = input('Enter word: ')
#     if word in concordance:
#         print('Found on lines:', concordance[word])
#     else:
#         print('Not found.')


## Apply what you know
        
# 0. Study the programs in the Learn something new section until you can write them
#   yourself from scratch without relying on this document or any other source of
#   information.  Here are the programs:
# 0.1. Write a program that prompts for input of a username and password and then
#   displays an appropriate message, depending on whether these match.  Use a
#   dictionary to hold the usernames and associated passwords.
# 0.2. Write a program that builds a word­line concordance for Pride and Prejudice and
#   tests it using one or more look­ups included in the program code.  Use split as a
#   rough method for breaking lines into word.
# 0.3. Revise the concordance program to allow a user to interactively look up as many
#   words as desired.
# 0.4. Revise the concordance program to use a more sophisticated method of breaking
#   lines into words: convert uppercase letters to lowercase and replace
#   non­alphabetic characters with spaces before using split.
# 0.5. Revise the concordance program by moving the text clean­up code into a
#   function and then calling that function before the application of split.


# passwords = {'smith':'apple', 'jones':'a34xx', 'brown':'zzzz'}
# username = input("Username: ")
# password = input("Password: ")

# if password == passwords[username]:
#   print("Correct")
# else:
#   print("Incorrect")

# not sure what I did so wrong....
# concordance = {}
# with open('/Users/jason/Dev/studying/hunter/133/unit3/pap.txt') as book:
#   lineNumber = 1
#   for line in book:
#     for word in line.split():
#       if word in concordance:
#           concordance[word].append(lineNumber)
#       else:
#           concordance[word]=[lineNumber]
#   lineNumber += 1

# print('Test:', concordance['property'])

## from example part 4
# concordance = {}
# alphabet = 'abcdefghijklmnopqrstuvwxyz'

# with open('/Users/jason/Dev/studying/hunter/133/unit3/pap.txt') as book:
#     linenum = 1
#     for line in book:
#         cleanline = ''
#         for character in line.lower():
#           if character in alphabet:
#               cleanline += character
#           else:
#               cleanline += ' '

#         for word in cleanline.split():
#             if word in concordance:
#                 concordance[word].append(linenum)
#             else:
#                 concordance[word]=[linenum]
#         linenum += 1
# while True:
#     word = input('Enter word: ')
#     if word in concordance:
#         print('Found on lines:', concordance[word])
#     else:
#         print('Not found.')

# Reuse the cleanedup function in a program that finds the longest word used in Pride
# and Prejudice.  Note that if you use split without cleanedup, your program will find
# ‘inconveniences­­cheerfulness’, which is long, but not a single word.

# def cleanedup(s):
#     alphabet = 'abcdefghijklmnopqrstuvwxyz'
#     cleantext = ''
#     for character in s.lower():
#         if character in alphabet:
#             cleantext += character
#         else:
#             cleantext += ' '
#     return cleantext
# concordance = {}
# longest = 0
# longestword = ''

# with open('hunter/133/unit3/pap.txt') as book:
# #with open('/Users/jason/Dev/studying/hunter/133/unit3/pap.txt') as book:
#     for line in book:
#         for word in cleanedup(line).split():
#           if len(word) > longest:
#             longestword = word
#             longest = len(word)

# print(longestword, longest)

# Write a program that learns vocabulary in a language other than English.  It asks the
# user for words in English, gives the translation if it has seen the word before and, if
# not, asks the user to enter it.  Here is a sample run.

# Enter English word: cat
# Enter translation: gato
# Enter English word: dog
# Enter translation: perro
# Enter English word: cat
# cat = gato

# translate = {}
# while True:
#   wordE = input('Enter English word: ')
#   if wordE in translate:
#     print(wordE, '=', translate[wordE])
#   else:
#     wordS = input('Enter translation: ')
#     translate[wordE] = wordS
#   print()

# Write a program that compiles information on the number of occurrences of each
# word used in Pride and Prejudice.  After the information is compiled, the user should
# be able to quickly find out how many times any particular words are used.

# def cleanedup(s):
#     alphabet = 'abcdefghijklmnopqrstuvwxyz'
#     cleantext = ''
#     for character in s.lower():
#         if character in alphabet:
#             cleantext += character
#         else:
#             cleantext += ' '
#     return cleantext

# concordance = {}


# with open('hunter/133/unit3/pap.txt') as book:
# #with open('/Users/jason/Dev/studying/hunter/133/unit3/pap.txt') as book:
#     for line in book:
#         for word in cleanedup(line).split():
#           if word in concordance:
#               concordance[word] = concordance[word] + 1
#           else:
#               concordance[word] = 1

# while True:
#     word = input("Enter a word ")
#     wordClean = cleanedup(word)
#     if wordClean in concordance:
#       print(wordClean, 'was said', concordance[wordClean], 'times.')
#     else:
#         print('Not found')
  
#4
# Write a program that prints the name Fred 100 times, one time per line.

# count = 1
# while count <= 100:
#   print(count, 'Fred')
#   count += 1

#5
# Write a program that repeatedly gets a group of numbers from the user and displays
# the average.  Define and use a function called average that takes in a list of numbers
# and returns the average.  Here is a sample run:

# while True:
#   total = 0
#   count = 0
#   numbers = input("Enter numbers:")
#   for num in numbers.split():
#     total = total + int(num)
#     count = count + 1
#   print("Average:", total/count)


# given solution
# def average (numbers):
#   total = 0
#   for number in numbers:
#     total += number
#   return total/len(numbers)
# while True:
#   text = input('Enter numbers: ') 
#   userNumbers = []
#   for word in text.split():
#     userNumbers.append(int (word))
#   print('Average:', average (userNumbers))

# Write a function called lengths that takes in a list of strings and returns a list of the
# lengths of the strings.  If we pass it ['Ed', 'Ted', 'Fred', 'Jennifer'], it will return [2, 3, 4,
# 8].  Use this function, along with the average function from the previous program
# and the cleanedup function, to write a program that accepts sentences from the user
# and reports the average length of the words in the sentence.

def cleanedup(s):
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    cleantext = ''
    for character in s.lower():
        if character in alphabet:
            cleantext += character
        else:
            cleantext += ' '
    return cleantext

def lengths(s):
  lengths = []
  for word in words:
    lengths.append(len(word))
  return lengths

def average(words):
  total = 0
  for word in words:
    total += word
  return total/len(words)

while True:
    line = input('Enter a sentence: ')
    words = cleanedup(line).split()
    print('Average word length:', average(lengths(words)))

    

