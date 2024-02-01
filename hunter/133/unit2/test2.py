# Jason Jordan
# CSCI 133
# Unit 2 Test


# 1.The total number of words
# 2.The average number of words in a line (total number of words / total number of lines)
# 3.The line with the most words and the number of words in that line
# 4.The total number of lines in your Python source code
# 5.Provide an interface that allows the user enter a word to look up how many lines contain 
#   that word and to see up to the first ten such lines. If no lines contain that word, then your program must output Not found.

# Part 1, 2, 3 
totalWordCount = 0
lineCount = 0
longestLineCount = 0
#with open('/Users/jason/Dev/studying/hunter/133/unit2/alice.txt') as book:
with open('alice.txt') as book:
    for line in book:
        lineWordCount = len(line.split())
        totalWordCount += lineWordCount
        lineCount = lineCount + 1
        if longestLineCount < lineWordCount:
            longestLineCount = lineWordCount
            longestLine = line

average = totalWordCount / lineCount

print('Total number of words:', totalWordCount)
print('Average number of words in a line:', average)
print('Longest line has 16 words:', longestLine)

# Part 4
pyFileLineCount = 0
#with open('/Users/jason/Dev/studying/hunter/133/unit2/test2.py') as file:
with open('test2.py') as file:
    for line in file:
        pyFileLineCount = pyFileLineCount + 1
print('Total number of lines in Python source code:', pyFileLineCount)


# Part 5
respone = input('Enter word: ')
found = False
count = 0
#with open('/Users/jason/Dev/studying/hunter/133/unit2/alice.txt') as book:
with open('alice.txt') as book:
    for line in book:
        if respone in line:
            found = True
            if count < 10:
                print(line)
                count = count + 1
if found == False:
    print("Not found.")


