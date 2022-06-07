# Parameters / arguments

def return_add(a, b):  # These are parameters set in functions
    return a+b

# print(return_add(5 + 6)) # Passing arguments

# print(return_add(b = 5, a = 3)) # When using keyword arguments then position doesn't matters

def return_add_all(a, b, *args):
    
    print(type(args))
    return a+b

# return_add_all(5 , 6)

# Revising tuple and sets.
def tup_set():
    a = {5, 6, 3, 3}
    b = ("test1", "test111", "test111")

    print(type(a), a)
    print(type(b), b)

    # a[0] = 7 # Error as set and tuple are immutable.
    print(a)


def a(*a, **b):
    """Function that returns sum of all argument passed
    as much value are passed addition of them all will be returned.
    """

    if a and b == ():
        return 0
    elif a != ():
        sum = 0
        for i in a:
            sum += i
        return sum
    else:
        sum2 = 0
        for i in b:
            sum2 += b[i]
        return sum2
    
# print(a(5, 6, 7, 8))

# using * when passing arguments through an existing list.
data_a = [5,6,4,3,4]
print(a(*data_a))   # Passing a list which is handled by *a

# output = 22
data_b = {"a": 1, "b": 2, "c": 3}
print(a(**data_b))   # We can also pass through unpacking a dictionary.

print(a())   # Passing no argument gives us 0 value
