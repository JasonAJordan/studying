import urllib.request, shelve

url = 'https://futureboy.us/frinkdata/cpiai.txt'

file = urllib.request.urlopen(url)
lines = file.readlines()
file.close()
cpi = {}
for line in lines:
    items = line.decode().split()
    if len(items) > 0 and items[0].isdigit():
        cpi[int(items[0])] = [float(item) for item in items[:13]]


shelf = shelve.open('cpi')
shelf['cpi'] = cpi
shelf.close()

# def pctIncrease(begin, end):
#     return 100*(end/begin-1)
# print('       Percent increase in CPI')
# print('             (Jan-Jan)')
# print('      1 year  5 years 10 years')
# # for year in range(1914, 2009):
# #     currentCPI = cpi[year][1]
# #     print(year, pctIncrease(cpi[year-1][1], currentCPI), sep=' ', end=' ')

# #     if year-5 >= 1913:
# #         print(pctIncrease(cpi[year-5][1], currentCPI), end=' ')
# #     if year-10 >= 1913:
# #         print(pctIncrease(cpi[year-10][1], currentCPI), end='')
# #         print()
# pattern1 = '{0:d}  {1:6.1f}'
# pattern2 = '{0:9.1f}'
# for year in range(1914, 2009):
#     currentCPI = cpi[year][1]
#     pct = pctIncrease(cpi[year-1][1], currentCPI)
#     print(pattern1.format(year, pct), end='')
#     if year-5 >= 1913:
#         pct = pctIncrease(cpi[year-5][1], currentCPI)
#         print(pattern2.format(pct), end='')
#     if year-10 >= 1913:
#         pct = pctIncrease(cpi[year-10][1], currentCPI)
#         print(pattern2.format(pct), end='')
#     print()

# def pctIncrease(begin, end):
#     return 100*(end/begin-1)

# def increaseByPct(begin, pct):
#     return begin+begin*pct/100

# startValue = 175.1
# while True:
#     value = startValue
#     pct = float(input('Enter percent: '))
#     for year in range(5):
#         value = increaseByPct(value, pct)
#     print('Total increase: ', pctIncrease(startValue, value))
#     print()

# def pctIncrease(begin, end):
#     return 100*(end/begin-1)
# def increaseByPct(begin, pct):
#     return begin+begin*pct/100

# def totalPct(pct):
#     startValue = 175.1
#     value = startValue
#     for year in range(5):
#         value = increaseByPct(value, pct)
#     return pctIncrease(startValue, value)

# def totalPct2(pct):
#     startValue = 154.4
#     value = startValue
#     for year in range(10):
#         value = increaseByPct(value, pct)
#     return pctIncrease(startValue, value)


# def goalSeek(function, lowLimit, highLimit, target, maxError=.01):
#     error = maxError + 1
#     while error > maxError:
#         guess = (lowLimit+highLimit)/2
#         result =  function(guess)
#         error = abs(result-target)
#         if result > target:
#             highLimit = guess
#         if result < target:
#             lowLimit = guess
#     return guess

# print(goalSeek(totalPct,-100, 100, 13.2))
# print(goalSeek(totalPct2, -100, 100, 13.2, .000001))

# def pctIncrease(begin, end):
#     return 100*(end/begin-1)
# def increaseByPct(begin, pct):
#     return begin+begin*pct/100
# def makeTotalPct(startValue, years):
#     def totalPct(pct):
#         value = startValue
#         for year in range(years):
#             value = increaseByPct(value, pct)
#         return pctIncrease(startValue, value)
#     return totalPct
# def goalSeek(function, lowLimit, highLimit, target, maxError=.01):
#     error = maxError + 1
#     while error > maxError:
#       guess = (lowLimit+highLimit)/2
#       result = function(guess)
#       error = abs(result-target)
#       if result > target:
#         highLimit = guess
#       if result < target:
#         lowLimit = guess
#     return guess

# totalPct = makeTotalPct(175.1, 5)
# totalPct2 = makeTotalPct(154.4, 10)
# print(goalSeek(totalPct, -100, 100, 13.2, .0001))
# print(goalSeek(totalPct2, -100, 100, 28.4, .0001))


# import shelve
# def pctIncrease(begin, end):
#     return 100*(end/begin-1)

# def increaseByPct(begin, pct):
#     return begin+begin*pct/100

# def makeTotalPct(startValue, years):
#     def totalPct(pct):
#         value = startValue
#         for year in range(years):
#             value = increaseByPct(value, pct)
#         return pctIncrease(startValue, value)
#     return totalPct

# def goalSeek(function, lowLimit, highLimit, target, maxError=.01):
#   error = maxError + 1
#   while error > maxError:
#       guess = (lowLimit+highLimit)/2
#       result = function(guess)
#       error = abs(result-target)
#       if result > target:
#           highLimit = guess
#       if result < target:
#           lowLimit = guess
#   return guess

# def printAnnualized(year, n):
#     pattern = '{0:9.1f}'
#     if year-n >= 1913:
#         pct = pctIncrease(cpi[year-n][1], currentCPI)
#         totalPct = makeTotalPct(cpi[year-n][1], n)
#         annual = goalSeek(totalPct, -100, 100, pct, .0001)
#         print(pattern.format(annual), end='')

# shelf = shelve.open('cpi')
# cpi = shelf['cpi']
# shelf.close()
# print('       Percent increase in CPI')
# print('             (Jan-Jan)')
# print('      1 year  5 years 10 years')
# pattern = '{0:d}  {1:6.1f}'

# for year in range(1914, 2009):
#     currentCPI = cpi[year][1]
#     pct = pctIncrease(cpi[year-1][1], currentCPI)
#     print(pattern.format(year, pct), end='')
#     printAnnualized(year, 5)
#     printAnnualized(year, 10)
#     print()

# 1. Use the final version of goalSeek to find the square root of two.  Start by defining a
# function that squares numbers.  Then see what argument value causes this function to
# return two

# def goalSeek(function, lowLimit, highLimit, target, maxError=.01):
#     error = maxError + 1
#     while error > maxError:
#         guess = (lowLimit+highLimit)/2
#         result =  function(guess)
#         error = abs(result-target)
#         if result > target:
#             highLimit = guess
#         if result < target:
#             lowLimit = guess
#     return guess

# def square(number):
#     return number*number

# print(goalSeek(square, 0 , 3, 2))

# 2. Use the final version of goalSeek to find all the roots of two from the square root and
# the cube root up to the 10th root.  Instead of manually writing different functions to
# pass to goalSeek, use a function that creates them for you as they’re needed.

# def goalSeek(function, lowLimit, highLimit, target, maxError=.01):
#     error = maxError + 1
#     while error > maxError:
#         guess = (lowLimit+highLimit)/2
#         result =  function(guess)
#         error = abs(result-target)
#         if result > target:
#             highLimit = guess
#         if result < target:
#             lowLimit = guess
#     return guess

# def makePower(exp):
#     # this will return a whole funcion, number never has to be use as the function will be used in goalseek
#     def power(number):
#         return number**exp
#     return power

# for exp in range(2,11):
#     power = makePower(exp)
#     print(exp, goalSeek(power,0,5,2))

## super cool formater
# pat4d = '{0:4d}'
# pat2d = '{0:2d}'

# print('    ', end='')
# for col in range(1,11):
#     print(pat4d.format(col), end= '')
# print()
# print()

# for row in range(1, 11):
#     print(pat2d.format(row), end='  ')
#     for col in range(1, 11):
#       print(pat4d.format(row*col), end='')
#     print()

# 4. The following function returns 10 for some argument value between 0 and 5.  We’d
# like to be able to find this value by making the call goalSeek(mystery, 0, 5, 10, .001),
# but if we try, something goes wrong.  Find and fix the problem

# def mystery(x):
#     return x*x - 10*x + 25

# def goalSeek(function, limit1, limit2, target, maxError=.01):
#     result1 = function(limit1)
#     result2 = function(limit2)

#     if result1 < target < result2:
#         return goalSeeker(function, limit1, limit2, target, maxError=.01)
#     if result2 < target < result1:
#       return goalSeeker(function, limit2, limit1, target, maxError=.01)
#     return None


# def goalSeeker(function, lowLimit, highLimit, target, maxError=.01):
#     error = maxError + 1
#     while error > maxError:
#         guess = (lowLimit+highLimit)/2
#         #print('lo={0} hi={1}'.format(lowLimit,highLimit))
#         result =  function(guess)
#         #print('guess={0} result={1}'.format(guess,result))
#         error = abs(result-target)
#         #print('error={0}'.format(error))
#         if result > target:
#             highLimit = guess
#         if result < target:
#             lowLimit = guess
#         #print('lo={0} hi={1}'.format(lowLimit,highLimit))
#         #input('Enter to continue\n\n')

#     return guess

# print(goalSeek(mystery, 0, 5, 10, .001))

# entries = []
# with open('hunter/133/unit7/phonedata.txt') as data:
#     for line in data:
#         items = line.split(',') #line.split('\t')
#         print(items)
#         name = items[0] + ', ' + items[1]
#         area = items[2][:3]
#         number = items[2][4:-1]
#         entries.append([name, area, number])

# entries.sort()
# for entry in entries:
#     print('{0:24s}({1}){2}'.format(entry[0], entry[1], entry[2]))
