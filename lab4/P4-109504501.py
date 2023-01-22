"""
Practice 4
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

def check(input_split, file):
    if input_split[1] == "+":
        ans = int(input_split[0]) + int(input_split[2])
        if int(input_split[4]) != ans:
            file.write("F")
        else:
            file.write("T")

    elif input_split[1] == "-":
        ans = int(input_split[0]) - int(input_split[2])
        if int(input_split[4]) != ans:
            file.write("F")
        else:
            file.write("T")

    elif input_split[1] == "*":
        ans = int(input_split[0]) * int(input_split[2])
        if int(input_split[4]) != ans:
            file.write("F")
        else:
            file.write("T")

def main():
    with open("ans-109504501.txt", "w") as file:

        with open("test.txt", "r") as f:
            for line in f:
                input_split = line.split()
                check(input_split, file)
                file.write("\n")


if __name__ == "__main__":
    main()

