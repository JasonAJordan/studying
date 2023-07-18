s = "test,test2,test3"

words = s.split(',')
# print(words[0],words[1])
# print("asdf","eeeee")

def enigma(n):
    for i in range(n+1):
      help(i)
    print()

def help(x):
    for j in range(x):
        print((x-j) *2,end=' ')

enigma(5)

for i in range (2):
    print (i)

listtest = ["x"] * 3
    


# in1 = False
# in2T = True 
# out = in1 or (in2T and not in1) 

# print(out)

def binAdd():
    binstring = ""
    decNum = 12 #int(input('Enter a number'))
    while decNum > 0:
        if (decNum % 2 == 0):
            binstring.append('0')
        else:
            binstring.append('1')
        decNum= decNum //2
    print(binstring)

binAdd()