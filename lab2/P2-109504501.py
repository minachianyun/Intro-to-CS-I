"""
Practice 2
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

import random

flag = random.randint(1,100)
count = 0
input1 = 0

while(input1 != flag):
    input1 = int(input("輸入一數字 ： "))
    if input1 > flag:
        print("比 " + str(input1) + " 還小")
        count += 1
    elif input1 < flag:
        print("比 " + str(input1) + " 還大")
        count += 1
print("猜對了！總共猜了 " + str(count) + " 次")




