class Spam():
    def __del__(self):
        print("Deleted")

a = Spam()
b = a

del a #Nothing prints
del b #Nothing prints

"""
but you might be expecting that deleting
y will print deleted but It will not print 
because __del__ runs when the program ends.
So run your python file in a powershell
window then you'll see 'deleted' printing
as the program ends.
"""
