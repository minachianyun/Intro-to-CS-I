"""
Assignment 3
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

from math import sqrt, floor

def find_factor(num):
    ans = []
    for i in range(1, num + 1):
        if num % i == 0:
            ans.append(i)
    return ans

def find_prime(arr: list[int], file):
    for k in arr:
        if k == 1:
            file.write("1 N\n")
            continue
        k_is_prime = True
        for n in range(2, floor(sqrt(k)) + 1):
            if k % n == 0:
                k_is_prime = False
                file.write(f"{k} N\n")
                break
        if k_is_prime:
            file.write(f"{k} Y\n")

def main():
    nums = list(map(int, input().split()))

    with open ("test.txt", "w") as file:
        for num in nums:
            file.write(f"{num}:\n")
            find_prime(find_factor(num), file)
            file.write("\n")

if __name__ == "__main__":
    main()


