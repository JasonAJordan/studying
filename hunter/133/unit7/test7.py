# Jason Jordan
# CSCI 133
# Unit 7 Test

# 1.Use goalSeek function to find the roots of the polynomials P1, P2, and P3 listed in the introduction. 
# The expected answers are: 3, 1.5, and -4.2. Choose the limits to contain the roots you are looking for 
# (-5 and 5 would suffice for these three polynomials). Confirm that your program is finding correct roots.

#2.Read the file poly.txt. Discard any line that starts with a # symbol (thus skipping the header).

#3. Write a function makePoly that can generate a Python function representation of a cubic polynomial from its coefficients A, B, C, D. 

#4. For each polynomial you read from the file, use makePoly to generate its Python function representation. Run goalSeek on this function with given Lo and Hi limits to find the root.

def goalSeek(function, limit1, limit2, target, maxError=.01):
    result1 = function(limit1)
    result2 = function(limit2)

    #print(result1, result2)

    if result1 < target < result2:
        return goalSeeker(function, limit1, limit2, target, maxError=.01)
    if result2 < target < result1:
      return goalSeeker(function, limit2, limit1, target, maxError=.01)
    return None


def goalSeeker(function, lowLimit, highLimit, target, maxError=.01):
    error = maxError + 1
    while error > maxError:
        guess = (lowLimit+highLimit)/2
        #print('lo={0} hi={1}'.format(lowLimit,highLimit))
        result =  function(guess)
        #print('guess={0} result={1}'.format(guess,result))
        error = abs(result-target)
        #print('error={0}'.format(error))
        if result > target:
            highLimit = guess
        if result < target:
            lowLimit = guess
        #print('lo={0} hi={1}'.format(lowLimit,highLimit))
        #input('Enter to continue\n\n')
    return guess

entries = []
with open('hunter/133/ploy.txt') as data:
    #data.readline() #skips first line
    for line in data:
        if line[0] != '#':
          # I figured this out by googling https://stackoverflow.com/questions/1574678/efficient-way-to-convert-strings-from-split-function-to-ints-in-python
          cols = [float(x) for x in line.split()[:6]]
          entries.append(cols)

def makePoly(a, b, c, d):
    def P1(x):
        return a*x*x*x + b*x*x + c*x + d
    return P1
  
#print(entries)
pat4d = '{0:.4f}'

for entry in entries:
  #print(entry)
  mP = makePoly(entry[0], entry[1], entry[2], entry[3])
  final = goalSeek(mP,entry[4], entry[5], 0 )
  
  print('{0:0.2f}\t{1}\t{2}\t{3}\t'.format(entry[0], entry[1], entry[2], entry[3]), end='->\t')
  print('{0:0.2f}'.format(final))