# import array as arr

# ar = arr.array('i',[1,2,3,4,5])
# arrelemSum = 0
# for i in range(len(ar)):
#     arrelemSum = sum(ar)


import numpy as np

arr1 = np.array([1,3,5])
arr2 = np.array([7,9,11])
arr3 = np.concatenate((arr1,arr2))
print(arr3)
