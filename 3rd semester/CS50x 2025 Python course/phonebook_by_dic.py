people = {
    "Limon": "123-456-7890",
    "Ratul": "987-654-3210",
    "Shajjad": "555-555-5555",
    "Hasan": "444-444-4444",

}

name = input("Enter a name: ")
if name in people:
    print(F"{name}'s phone number is {people[name]}.")
else:
    print(f"{name} is not in the phonebook.")