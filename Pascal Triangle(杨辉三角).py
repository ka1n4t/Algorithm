#算法思想：
#每一行除首末两个1除外，所有的元素都是其左上方和正上方的两个数的和
#例子：
#1
#1 1
#1 2 1
#1 3 3 1
#1 4 6 4 1
#1 5 10 10 5 1
#...

# generator
def triangle():
  L = []
  while True:
    yield L
    L = [1] + [L[i]+L[i+1] for i in range(len(L)-1)] + [1]

# print
n = 0
for i in triangle():
  print(i)
  n += 1
  if n == 6:
    break

#result:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1

#From:https://www.liaoxuefeng.com/wiki/0014316089557264a6b348958f449949df42a6d3a2e542c000/0014317799226173f45ce40636141b6abc8424e12b5fb27000#0
