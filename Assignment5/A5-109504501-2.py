"""
Assignment 5
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

eq = input()

while eq != "-1":

    if '+' in eq:
        eq = eq.split("+")
        a = eq[0]
        b = eq[1]
        max_len = max(len(a), len(b))
        a = a.zfill(max_len)
        b = b.zfill(max_len)

        result = ''
        carry = 0

        for i in range(max_len - 1, -1, -1):
            r = carry
            r += 1 if a[i] == '1' else 0
            r += 1 if b[i] == '1' else 0
            result = ('1' if r % 2 == 1 else '0') + result

            carry = 0 if r < 2 else 1

        if carry != 0:
            result = '1' + result

        print(result.zfill(max_len))


    elif '-' in eq:
        eq = eq.split("-")
        a = eq[0]
        b = eq[1]
        max_len = max(len(a), len(b))
        a = a.zfill(max_len)
        b = b.zfill(max_len)

        result = ''
        carry = 0

        for i in range(max_len - 1, -1, -1):
            num = (int(a[i]) - int(b[i])) - carry
            if num % 2 == 1:
                result = '1' + result
            else:
                result = '0' + result

            if num < 0:
                carry = 1
            else:
                carry = 0

        if carry != 0:
            result = '01' +result

        if int(result) == 0:
            result = 0

        if str(result[0]) == '0':
            result = str(result[1:])
            result = int(result)

        print(result)

    eq = input()


