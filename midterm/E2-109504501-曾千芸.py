"""
Exam 2
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

f = open('invoice.txt','r')
#f1為發票
f1 = f.read()
f.close()
p = open('num.txt','r')
#p1為中獎號碼
p1 = p.read()
p.close()
#特別獎0特獎1頭獎2二獎3...沒中獎8
final = [0,0,0,0,0,0,0,0,0]
f1 = f1.split()
#特別獎0特獎1頭獎2,3,4增開5,6,7
p1 = p1.split()
for i in f1 :
    if i==p1[0]:
        final[0] += 1
    if i==p1[1]:
        final[1] += 1
    for j in range(6):
        t = 1
        for k in range(8-j):
            if i[-k-1] != p1[2][-k-1]:
                t = 0
                break
        if t == 1:
            final[j+2] += 1
            break
    for j in range(6):
        t = 1
        for k in range(8-j):
            if i[-k-1] != p1[3][-k-1]:
                t = 0
                break
        if t == 1:
            final[j+2] += 1
            break
    for j in range(6):
        t = 1
        for k in range(8-j):
            if i[-k-1] != p1[4][-k-1]:
                t = 0
                break
        if t == 1:
            final[j+2] += 1
            break
    ii = []
    for k in range(2,-1,-1):
        ii.append(i[-k-1])
    p2 = []
    p3 = []
    p4 = []
    for k in range(3):
        p2.append(p1[5][k])
        p3.append(p1[6][k])
        p4.append(p1[7][k])
    if ii==p2 or ii==p3 or ii==p4:
        final[7] += 1
final[8] = len(f1)-final[0]-final[1]-final[2]-final[3]-final[4]-final[5]-final[6]-final[7]
print(f'特別獎 : {final[0]}\n特獎 : {final[1]}\n頭獎 : {final[2]}\n二獎 : {final[3]}\n三獎 : {final[4]}\n四獎 : {final[5]}\n五獎 : {final[6]}\n六獎 : {final[7]}\n沒中獎 : {final[8]}')
print(final[0]*10000000+final[1]*2000000+final[2]*200000+final[3]*40000+final[4]*10000+final[5]*4000+final[6]*1000+final[7]*200)
