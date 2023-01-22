"""
Exam 3
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

while(1):
    number = input()
    if number == "-1":
        break
    min = 0
    for element in number:
        if min < ord(element):
            min = ord(element)
    if min <= 57:
        min = min - 48
    elif min <= 90:
        min = min - 55
    elif min <= 122:
        min = min - 61

    min = min + 1
    base = 0
    for n in range(min, 63):
        power = number.__len__() - 1
        digit = 0
        for element in number:
            k = ord(element)
            if k >= 48 and k <= 57:
                k = k - 48
                digit = digit + n ** power * k
                power = power -1
            elif k >= 65 and k <= 90:
                k = k - 55
                digit = digit + (n ** power) * k
                power = power - 1
            elif k >= 97 and k <= 122:
                k = k - 61
                digit = digit + (n ** power) * k
                power = power - 1

        answer = digit % (n-1)
        if answer == 0:
            base = n
            print(base)
            break

    if base == 0:
        print("such number is impossible!")






