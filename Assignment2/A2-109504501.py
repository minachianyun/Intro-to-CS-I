"""
Assignment 2
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

input = input("Input String: ")
a = 0
e = 0
i = 0
o = 0
u = 0

for r in range(0,len(input)):
    if input[r] == "a":
        a = a + 1
    elif input[r] == "e":
        e = e + 1
    elif input[r] == "i":
        i = i + 1
    elif input[r] == "o":
        o = o + 1
    elif input[r] == "u":
        u = u + 1
    else:
        continue

    r = r + 1

print("a:" + str(a) +" ,e:" + str(e) + " ,i:" + str(i) + " ,o:" + str(o) + " ,u:" + str(u))
