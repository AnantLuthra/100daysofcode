# selection sort.

array = [1, 6, 2, 9, 8, 5]

for i in range(len(array)):
    short = max(array)
    index = 0
    for j in range(i, len(array)):
        if array[j] < short:
            short = array[j]
            index = j

    if i != len(array) - 1:
        array[index] = array[i]
        array[i] = short

print(array)
