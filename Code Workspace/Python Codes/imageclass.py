from PIL import Image
import matplotlib.pyplot as plt
import numpy as np

i = Image.open('img.jpg')
i.show()

print(i.size)
print(i.format)
print(i.mode)

left = 600
right = 600
top = 500
bottom = 400

cropimg = i.crop((left,top,right,bottom))
plt.imshow(cropimg)