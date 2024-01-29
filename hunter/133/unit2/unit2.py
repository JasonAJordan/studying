# line = 'This is a sample line of text.'
# print(len(line))
# print(line.split())
# print(len(line.split()))


# print(2+3)
# print(71*(5-2))
# print(36/3)
# print(2**1000)

# x = 4
# print(x*2)
# print(x)
# x = x*2
# print(x)

# with open('hunter\\133\\unit2\\pap.txt') as book:
#     for line in book:
#         if 'property' in line:
#             print(line)

# count = 0
# with open('hunter\\133\\unit2\\pap.txt') as book:
#     for line in book:
#         count += len(line.split())
# print('Word count:', count)

# count = 0
# with open('hunter\\133\\unit2\\pap.txt') as book:
#     for line in book:
#         for word in line.split():
#             if word == 'the':
#                 count += 1
# print("Number of times 'the' is used:", count)

# maxcount = 0
# with open('hunter\\133\\unit2\\pap.txt') as book:
#     for line in book:
#         count = len(line.split())
#         if count>maxcount:
#             maxline = line
#             maxcount = count
# print(maxline)

## Apply what you know

# 0. Study the programs in the Learn something new section until you can write them
#       yourself from scratch without relying on this document or any other source of
#       information.  Here are the programs:
#   0.1. List the lines in the file pap.txt that contain the word ‘property’.
#   0.2. Count the number of words in the file pap.txt.
#   0.3. Count the number of times the word ‘the’ appears in the file pap.txt.
#   0.4. Find and display the line in the file pap.txt containing the most words

#'hunter\\133\\unit2\\pap.txt'

# linecount = 0
# wordcount = 0
# thecount = 0
# maxcount = 0
# with open('hunter\\133\\unit2\\pap.txt') as book:
#   for line in book:
#     linecount = linecount + 1
#     if 'the' in line:
#       thecount = thecount + 1
#     count = len(line.split())
#     if count > maxcount:
#             maxline = line
#             maxcount = count
#     for word in line.split():
#       wordcount = wordcount + 1
      

# print(linecount)
# print(wordcount)
# print(thecount)
# print(maxline)

# 1. Write a program that counts the number of times the lowercase letter ‘e’ is used in the
# file pap.txt.
count = 0
with open('hunter\\133\\unit2\\pap.txt') as book:
  for line in book:
    for char in line:
      if char == 'e':
        count = count + 1
print(count)
