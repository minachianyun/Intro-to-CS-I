"""
Practice 6
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

with open("test.txt", "r") as r:
    lines = r.readlines()


    def f(n):
        if n > 0 and n % 2 == 0:
            return 2 + f(n / 2)
        elif n > 0 and n % 2 == 1:
            return 3 + f((n//10)+(n%10) - 5)
        elif n <= 0:
            return 0


    for n in lines:
        n = int(n)
        print(f(n))














