
array1 = [34, 236,62, 623, 1, 5, 0]

# Bubble sort.
for i in range(len(array1)):
    swaps = 0
    for j in range(len(array1)):
        if j == len(array1) - 1:
            break
        if array1[j] > array1[j+1]:
            temp = array1[j+1]
            array1[j+1] = array1[j]
            array1[j] = temp
            swaps += 1

    if swaps == 0:
        break
    
    # Follow @anant_luthra_ for more such content.
print(array1)