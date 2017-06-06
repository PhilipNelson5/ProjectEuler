#! /usr/bin/python3
num = 2**1000
string = str(num)
total = 0

for x in range(0,len(string)):
  a = int(string[x])
  total+=a

print(total)

