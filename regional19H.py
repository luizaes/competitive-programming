import math

numbers = input()
v, n = numbers.split(' ')

total = int(v)*int(n)

for x in range(1,10):
	res = total * (x/10.0)
	if x == 9:
		print(math.ceil(res))
	else:
		print(math.ceil(res), end=' ')