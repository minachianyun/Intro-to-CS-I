"""
Assignment 5
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

bin_num = input("Binary: ")

num_dic = {"0000":0,"0001":1,"0010":2,"0011":3,"0100":4,"0101":5,"0110":6,"0111":7,"1000":8,"1001":9,"1010":"A"
,"1011":"B","1100":"C","1101":"D","1110":"E","1111":"F"}

while bin_num != '-1':

    b = {'0', '1'}
    check = set(bin_num)

    if b == check or check == {'0'} or check == {'1'}:
        bin = []
        ans = []

        if len(bin_num) % 4 == 0:

            for i in range(0, len(bin_num), 4):
                bin.append(bin_num[i:i + 4])
            for r in range(0, len(bin)):
                if bin[r] in num_dic.keys():
                    ans.append(num_dic[bin[r]])

        elif len(bin_num) % 4 == 1:
            bin_num = "000" + bin_num
            for i in range(0, len(bin_num), 4):
                bin.append(bin_num[i:i + 4])
            for r in range(0, len(bin)):
                if bin[r] in num_dic.keys():
                    ans.append(num_dic[bin[r]])

        elif len(bin_num) % 4 == 2:
            bin_num = "00" + bin_num
            for i in range(0, len(bin_num), 4):
                bin.append(bin_num[i:i + 4])
            for r in range(0, len(bin)):
                if bin[r] in num_dic.keys():
                    ans.append(num_dic[bin[r]])

        elif len(bin_num) % 4 == 3:
            bin_num = "0" + bin_num
            for i in range(0, len(bin_num), 4):
                bin.append(bin_num[i:i + 4])
            for r in range(0, len(bin)):
                if bin[r] in num_dic.keys():
                    ans.append(num_dic[bin[r]])
        print(f"Hexadecimal: {''.join(map(str, ans))}")



    else:
        print("Not Binary Number!")



    bin_num = input("Binary: ")
