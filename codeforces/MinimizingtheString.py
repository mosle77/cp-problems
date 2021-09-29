# href:https://codeforces.com/group/YSHJEwaJhs/contest/345774/problem/A
n = int(input())
s = str(input())
m = s[0]
j = 0
for i in range(1, n):
    if s[i] < s[i-1]:
        j = i-1
        break
    elif m < s[i]:
        m = s[i]
        j = i

if j != n:
    s = s[:j]+s[j+1:]
else:
    s = s[:n-1]
print(s)
