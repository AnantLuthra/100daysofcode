from thefuzz import fuzz, process

a = "nacho she saath"
b = "look here"

song = "Gulabi Aankhen Jo Teri Dekhi (Original Version) Mohammed Rafi # The Train 1970 Songs # Rajesh Khanna.mp3"

search = "gulabi ankhe"

# It compares with the letters kind of.. "similar letters if are their."
print(fuzz.ratio(song, search))

# print(fuzz.partial_token_sort_ratio())

matches = process.extract(search, song,
                            scorer=fuzz.partial_ratio)

# It compares
print(fuzz.partial_ratio(song, search))

print(fuzz.token_set_ratio(song, search))
