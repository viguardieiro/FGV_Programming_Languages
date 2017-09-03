//URI Exercício 1142 em C por Vitória A Guardieiro

#include<stdio.h>

int main(){
	int N, i, a=1, b=2, c=3;
	scanf("%d", &N);
	for(i=0; i<N; i++){
		printf("%d %d %d PUM\n", a, b, c);
		a=a+4;
		b=b+4;
		c=c+4;
	}
	return 0;
}
