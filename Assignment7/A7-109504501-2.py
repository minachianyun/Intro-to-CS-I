"""
Assignment 7
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

# 讀取num.txt，裡面只有一個0到8的數字n，n代表有幾組括號，print出所有合法括號的組合
# 不合法的括號：())(

def brackets(output, left, right, pairs):
    # 如果左括號數等於ｎ組括號數，就把此output存進ans list裡面
    if left == pairs and right == pairs:
        ans.append(output)
    else:
        # 如果左括號數小於n組括號數，output加入一個左括號，計算左括號數目left加一
        if left < pairs:
            brackets(output + "(", left + 1, right, pairs)
        # 如果右括號數小於n組括號數，output加入一個右括號，計算右括號數目right加一
        if right < left:
            brackets(output + ")", left, right + 1, pairs)


with open("109504501.txt", "w") as f:
    # 準備打開num.txt，並請求讀取檔案
    with open("num.txt", "r") as file:
        # 讀取檔案，並將讀取內容轉換成integer
        num = int(file.read())
        ans = []
        brackets("", 0, 0, num)
        # 將list轉換成string，再print out
        print(" ".join(ans))
        f.write(" ".join(ans) + "\n")
        f.write("109504501曾千芸")

