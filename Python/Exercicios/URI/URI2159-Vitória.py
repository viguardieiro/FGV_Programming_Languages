#URI Exercício 2159 por Vitória A Guardieiro

import math

N = int(input())

a = N/math.log(N)
b = 1.25506*N/math.log(N)

print('%.1f %.1f' %(a, b))
