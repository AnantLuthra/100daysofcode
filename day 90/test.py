animals = {1: "Python"}

try:
    for key in animals:
        del animals[key]
        animals[key + 1] = None
        print(key)
except:
    print(animals)