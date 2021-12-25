#GREATEST SUM
# The problem states that...

# Rohan's friend gave him a array of positive integers of size N and asked him to pick K integers from that array such that their sum is maximum.

# Note-0 : The integers in the output must follow the same order in input

# Input Format

# First line consists two space sepeated integers, N and K
# second line contains N space separated integers.

# Constraints

# 1<= N <= 10^9
# 1<= K <= N

# Output Format

# positive interger denoting maximum sum

ls=[]
n=int(input())
k=int(input())
for x in range(n):
 #print(x)
 o=input()    
 ls.append(o)
ls.sort()
ls.reverse()
#print(ls[:k])
# for i in range(n):
#  lsq[]=int  
ls=ls[:k]
lst = list(map(int,ls))
#print(lst)
sum=0

for i in range(k):
 sum=sum+lst[i]
print(sum) 
