

# passwords = {'smith':'apple', 'jones':'a34xx', 'brown':'zzzz'}
# username = input('username: ')
# password = input('Password: ')
# if password == passwords[username]:
#     print('You are logged in.')
# else:
#     print('Bad password.')

concordance = {}
with open('/Users/jason/Dev/studying/hunter/133/unit3/pap.txt') as book:
    linenum = 1
    for line in book:
        for word in line.split():
            if word in concordance:
                concordance[word].append(linenum)
            else:
                concordance[word] = [linenum]
        linenum += 1
print('Test:', concordance['property'])