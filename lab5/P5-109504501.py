"""
Practice 5
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

bin_num = input("NUM(BIN) : ")
while bin_num != '-1':
    b = {'0','1'}
    check = set(bin_num)

    if b == check or check == {'0'} or check == {'1'}:
        dec_num = int(bin_num, 2) * 16
        print(f"NUM(DEC) after X16 : {dec_num}")
        oct_num = oct(dec_num)
        print(f"NUM(OCT) : {oct_num[2:]}\n")
    else:
        print("Not Binary Number!\n")


    bin_num = input("NUM(BIN) : ")