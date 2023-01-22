"""
Assignment 4
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""


with open("score_109504501.txt", "w") as file:
    with open("score.txt", "r") as f:
        first_line = f.readline()
        file.write(first_line)
        for i in range(0, 5):
            line = f.readline().split()
            score_sum = int(line[1]) + int(line[2]) + int(line[3]) + int(line[4])
            avg = score_sum / 4
            line_to_string = " ".join(line)
            file.write(line_to_string)
            file.write(" ")
            file.write(str(avg))
            file.write("\n")
