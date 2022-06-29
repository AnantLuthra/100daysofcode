import collections
from rich import print

dict1 = {"banana": 1, "mango": 5, "gvava": 2}

names = {"anant": 1, "haroim": 2, "shivam": 4}

total = collections.ChainMap(dict1, names)  # Amazing way for looking all dictionaries in one.
print(total)

class tapori:
    
    def __str__(self):
        return "nacho mere saath"

    def __repr__(self):
        return "Hello their"

nacho = tapori()

print(nacho)
