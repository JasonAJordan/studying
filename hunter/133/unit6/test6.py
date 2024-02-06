# Jason Jordan
# CSCI 133
# Unit 6 Test


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


shelf = shelve.open('cpi')
cpi = shelf['cpi']
shelf.close()


while True:
    inputString = input('Enter query: ').split()
    year = int(inputString[0])
    monthsCount = 0
    totalCPI = 0
    if len(inputString) == 1:
        cpiFullYear = cpi[year][1:]
        for monthFullYear in cpiFullYear:
            totalCPI += float(monthFullYear)
        print(cpiFullYear, totalCPI / 12)
    else:
        monthsString = inputString[1:]
        # list comprehension part
        cpiPartYear = [cpi[year][int(month)] for month in monthsString]
        for mothPartYear in cpiPartYear:
            totalCPI += float(mothPartYear)
            monthsCount += 1
        # Non-list comprehension
        #for month in monthsString:
            #cpiThisMonth = cpi[year][int(month)]
            #cpiPartYear.append(cpiThisMonth)
            #totalCPI += float(cpiThisMonth)
            #monthsCount += 1
        print(cpiPartYear, totalCPI /monthsCount )

