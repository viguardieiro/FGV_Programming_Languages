#URI Exercício 1848 por Vitória A Guardieiro

n = 0

while n<3:
	n = n+1
	soma = 0
	I = input()
	while I!='caw caw':
		if I[2]=='*':
			soma = soma+1
		if I[1]=='*':
			soma = soma+2
		if I[0]=='*':
			soma = soma+4
		I = input()
	print(soma)
