def solve():

    with open("paths.txt") as f:
        print(type(f))
        if f.read() != "":
            return f.read()
        else:
            return "nothing inside"

# What will be the output ??
print(solve()) 

# Well it will print an empty string.
# As f is TextIOWrapper's object which can be readed by .read() function only once.