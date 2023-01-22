"""
Assignment 7
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

class Solution(object):
    def max_distance(self, seats):
        index = -200000
        seats_len = len(seats)
        ans = [0] * seats_len
        for i in range(seats_len):
            if seats[i] == 1:
                index = i
            else:
                # abs() 返回絕對值
                ans[i] = abs(i - index)
        index = -200000
        for i in range(seats_len - 1, -1, -1):
            if seats[i] == 1:
                index = i
            else:
                ans[i] = min(abs(i - index), ans[i])
        return max(ans)
    def ans_distance(self, seats):
        index = -200000
        seats_len = len(seats)
        ans = [0] * seats_len
        for i in range(seats_len):
            if seats[i] == 1:
                index = i
            else:
                # abs() 返回絕對值
                ans[i] = abs(i - index)
        index = -200000
        for i in range(seats_len - 1, -1, -1):
            if seats[i] == 1:
                index = i
            else:
                ans[i] = min(abs(i - index), ans[i])
        return ans


with open("seat.txt", "r") as file:
    seat = file.read()
    seat_list = []
    for i in seat:
        seat_list.append(int(i))
    calculate = Solution()
    ans = calculate.ans_distance(seat_list)
    location = []
    for r in range(len(ans)):
        if ans[r] == max(ans):
            location.append(r)

    location = ", ".join(str(e) for e in location)
    print(f"L = {calculate.max_distance(seat_list)}, i = {location}")