//URI Exercício 1848 em C por Vitória A Guardieiro

#include <stdio.h>
#include <string.h>

main(){
	int num, pisca;
	pisca = 0;
	char acao[10], cmp[] = "caw caw";	
	while(pisca<3){
		gets(acao);
		if(strcmp(acao,cmp)!=0){
			if(acao[0]==42){
				num = num + 4;   
			}
			if(acao[1]==42){
				num = num + 2;   
			}
			if(acao[2]==42){
				num = num + 1;   
			}
		}
		else{
			printf("%d\n",num);   
			num = 0;
			pisca++;                  
		}
	}
}
