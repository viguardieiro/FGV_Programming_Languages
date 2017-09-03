#URI Exercício 1435 por Vitória A Guardieiro

N = int(input())

while N>0:
	for i in range(N):
		k = False
		for j in range(N):
			if k:
				print(' ', end='')
			n = min(i, N-i-1, j, N-j-1)+1
			print('%3i' %n, end='')
			k = True
		print()
	print()
	N = int(input())
