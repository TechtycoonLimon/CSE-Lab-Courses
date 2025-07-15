from cs50 import get_int

while True:
    n = get_int("height: ") #If the user want to direcatly import the cs50 libarary then they have to write this line like n = cs50.get_int("height: ")
    if n > 0:
        break

for i in range(n):
    print("#")