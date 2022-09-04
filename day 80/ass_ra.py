
# Usage of assert keyword

def test(a :int) -> bool:
    return True if a > 0 else False

def check(name:str) -> str:
    return "yes" if len(name) > 5 else "no"

assert test(int(input("Enter the number: "))) , "value choti hai"

# Usage of raise keyword.
if (check(input("Enter your name: ")) == "no"):
    raise ValueError("Your name is small.")
