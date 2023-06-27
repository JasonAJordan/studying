def prob4(amy, beth):
  if amy> 4:
    print("easy case")
    kate = -1
  else:
    print("comp case")
    kate = helper(amy,beth)
  return (kate)

def helper(meg,jo):
  s = ""
  for j in range(meg):
    print(j, ': ', jo[j])
    if j % 2 == 0:
      s = s +jo[j]
      print("building s:", s)
  return(s)

def forlooptest():
  for j in range (3):
    print(j)
  return 1

#r = prob4(4, "city")
#print("return: ", r
# )
# forlooptest()
p = forlooptest()

import random

r = random.random()

#print(r)


def getYear():
  num = 0
  while num <= 2000 or num >=2018:
    num = int(input('Enter a number > 2000 & < 2018 : '))
  return (num)

#x = getYear()
#print(x)