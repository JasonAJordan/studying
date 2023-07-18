import matplotlib.pyplot as plt
import numpy as np


# x = np.linspace(0, 2 * np.pi, 200)
# y = np.sin(x)

# fig, ax = plt.subplots()
# ax.plot(x, y)
# plt.show()

# num = 10
# img = np.zeros((10,10,3))
# img[0:2,:,2:3] = 1
# plt.imshow(img)
# plt.show()
# plt.imsave(’myImage.png’, img)

logoImg = np.ones((10,10,3)) #10x10 array with 3 sheets of 1’s
#To make purple, we’ll keep red and blue at 100% and turn green to 0%
logoImg[2,2,:] = 0 #Turn the green to 0 for first 3 columns
# logoImg[:,-3:,1] = 0 #Turn the green to 0 for last 3 columns
# logoImg[4:6,:,1:3] = 0 #Turn the green to 0 for middle rows


plt.imshow(logoImg)
plt.show()
#plt.imsave("logo.png", logoImg) #Save the image to logo.png


#COLOR MAP
# M = numpy.array([[1,2,3,4,5,6,7,8,9,10], [11,12,13,14,15,16,17,18,19,20]])
# plt.pcolor( M , cmap = 'hsv' )
# plt.show()


#COLOR MAP
# M = numpy.array([[1,2,3,4], [11,12,13,14]])
# M[0,0,0] = 1
# plt.pcolor( M , cmap = 'hsv' )
# plt.show()