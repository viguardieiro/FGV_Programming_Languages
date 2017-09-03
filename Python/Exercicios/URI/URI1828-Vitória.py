#URI Exercício 1828 por Vitória A Guardieiro

N = int(input())

for i in range(N):
	I = input().split()
	if I[0]==I[1]:
		print('Caso #%d: De novo!' %(i+1))
	else:
		if I[0]=='pedra':
			if I[1]=='papel' or I[1]=='Spock':
				print('Caso #%d: Raj trapaceou!' %(i+1))
			else:
				print('Caso #%d: Bazinga!' %(i+1))
		elif I[0]=='tesoura':
			if I[1]=='pedra' or I[1]=='Spock':
				print('Caso #%d: Raj trapaceou!' %(i+1))
			else:
				print('Caso #%d: Bazinga!' %(i+1))
		elif I[0]=='papel':
			if I[1]=='tesoura' or I[1]=='lagarto':
				print('Caso #%d: Raj trapaceou!' %(i+1))
			else:
				print('Caso #%d: Bazinga!' %(i+1))
		elif I[0]=='lagarto':
			if I[1]=='pedra' or I[1]=='tesoura':
				print('Caso #%d: Raj trapaceou!' %(i+1))
			else:
				print('Caso #%d: Bazinga!' %(i+1))
		else:
			if I[1]=='papel' or I[1]=='lagarto':
				print('Caso #%d: Raj trapaceou!' %(i+1))
			else:
				print('Caso #%d: Bazinga!' %(i+1))
