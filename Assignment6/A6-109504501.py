"""
Assignment 6
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

def add(n):
    if int(n) >= 10:
        return (1 + add(int(n)-22) + add(add(int(n)-30) - 30))
    elif 5 <= int(n) <= 9:
        return (2 + add(int(n) - 2))
    elif int(n) <= 4:
        return 3

c = 1
while c == 1:
    n = input("Please input the variable of f(N): ")
    if n.isnumeric() and 0 < int(n) <= 500:
        print(add(n))
    elif n == '0':
        c = 0
        break
    else:
        print("Error message")


