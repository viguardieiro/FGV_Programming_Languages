//URI Exercício 1435 em C por Vitória A Guardieiro

#include <stdio.h>

int main(){
	int n, m, i, j, b;
	while(scanf("%d", &n), n!=0){
        	for(i=0; i<n; i++){
			b = 0;
			for(j=0; j<n; j++){		
				if(b)	printf(" ");
				if(i<=n-i-1 && i<=j && i<=n-j-1)		m = i+1;
				else if(n-i-1<=i && n-i-1<=j && n-i-1<=n-j-1)	m = n-i;
				else if(j<=i && j<=n-i-1 && j<=n-j-1)		m = j+1;
				else						m = n-j;
				printf("%3d", m);
				b = 1;
			}
			printf("\n");
		}
		printf("\n");
	}
}
