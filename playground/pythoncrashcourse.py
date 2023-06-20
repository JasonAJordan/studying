# x = range(3, 20, 2)
# #for n in x:
#   #print(n)
# #print(x)
# print(10//6)


# # Import libraries.
# import matplotlib.pyplot as plt
# import numpy as np

# #2 Ask user for an image name.
# inF = input('Enter file name: ')

# #3 Read in image.
# img = plt.imread(inF) #Read in image from inF

# #4 Figure out size of image.
# height = img.shape[0] #Get height
# width = img.shape[1] #Get width

# #5 Make a new image that’s half the height and half the width.
# img2 = img[height//2:, :width//2] #Crop to lower left corner

# #6 Display the new image.
# plt.imshow(img2) #Load our new image into pyplot
# plt.show() #Show the image (waits until closed to continue)

motto = "Mihi Cura Futuri"
l = len(motto)
# for i in range(l):
#   print(motto[i])
for j in range(10,1,-1):
  print(motto[j])
