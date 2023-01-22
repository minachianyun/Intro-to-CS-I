"""
Practice 3
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

def create_file():
    create = input("Create a file: ")
    write = input("Write something: ")
    outfile = open(create, "w")
    outfile.write(write)
    outfile.close()
    print("File name: " + create)
    print("Context: " + write)

create_file()
