n = int(input("input: ")) 
for i in range(n):
    for j in range(n): #Or you can use: print("#" * n)
        print("#", end="")
    print()  # Move to next line after each row
