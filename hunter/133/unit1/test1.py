
# Jason Jordan
# CSCI 133



# 1. Have your program check the word 'coronavirus' itself and report what unique letters it contains.

# 2. Generate a series of questions of the form, "Can X treat Y?"
# …​where X is the following list of medications: remdesivir, hydroxychloroquine, kaletra, favipiravir
# …​and Y is the following list of diseases: coronavirus, hepatitis, malaria, influenza

# 3.In this step, your program will search for common letters in some words that were uncommon before the coronavirus outbreak.
# Take each letter in the word 'coronavirus' and report whether each letter also exists in each medication from the list of medications in step 2 above.

#Part 1
alphabet = 'abcdefghijklmnopqrstuvwxyz'
for letter in alphabet:
  if letter in 'coronavirus':
      print( 'coronavirus contains', letter )

#Part 2
medications = [ 'remdesivir', 'hydroxychloroquine', 'kaletra', 'favipiravir']
diseases = [ 'coronavirus','hepatitis', 'malaria', 'influenza']
for m in medications:
   for d in diseases:
      print('Can ' + m + ' treat ' + str(d) + '?')

#Part 3
alphabet = 'abcdefghijklmnopqrstuvwxyz'
for letter in alphabet:
  if letter in 'coronavirus':
      for m in medications:
         if letter in m:   
            print( letter, 'is in coronavirus and also in', m )