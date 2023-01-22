"""
Assignment 4
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

with open("score_109504501.txt", "r") as file:

    first_line = file.readline().split()
    second_line = file.readline().split()
    third_line = file.readline().split()
    fourth_line = file.readline().split()
    fifth_line = file.readline().split()
    sixth_line = file.readline().split()

    check = input("查詢項目： ")
    name = input("姓名： ")

    if name == second_line[0] or name == second_line[0].lower():
        for i in range(1, 6):
            if check == first_line[i] or check == first_line[i].lower():
                score = second_line[i]
                print(name.capitalize() + " " + check.capitalize() + " " + score)
                break
            else:
                continue

    elif name == third_line[0] or name == third_line[0].lower():
        for i in range(1, 6):
            if check == first_line[i] or check == first_line[i].lower():
                score = third_line[i]
                print(name.capitalize() + " " + check.capitalize() + " " + score)
                break
            else:
                continue

    elif name == fourth_line[0] or name == fourth_line[0].lower():
        for i in range(1, 6):
            if check == first_line[i] or check == first_line[i].lower():
                score = fourth_line[i]
                print(name.capitalize() + " " + check.capitalize() + " " + score)
                break
            else:
                continue

    elif name == fifth_line[0] or name == fifth_line[0].lower():
        for i in range(1, 6):
            if check == first_line[i] or check == first_line[i].lower():
                score = fifth_line[i]
                print(name.capitalize() + " " + check.capitalize() + " " + score)
                break
            else:
                continue

    elif name == sixth_line[0] or name == sixth_line[0].lower():
        for i in range(1, 6):
            if check == first_line[i] or check == first_line[i].lower():
                score = sixth_line[i]
                print(name.capitalize() + " " + check.capitalize() + " " + score)
                break
            else:
                continue



