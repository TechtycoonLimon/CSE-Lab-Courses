# s = input ("What's s?\n")
#
# if s == "Y" or s == "y":
#     print("Agree")
# elif s == "N" or s == "n":
#     print("Disagree")

#Now that's a short way to do it.

s = input("What's s?\n").lower()

if s in ["y", "yes"]:
    print("Agree")
elif s in ["n", "no"]:
    print("Disagree")