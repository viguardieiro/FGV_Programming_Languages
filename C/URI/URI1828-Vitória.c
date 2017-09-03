//URI Exercício 1828 em C por Vitória A Guardieiro

#include <stdio.h>
#include <string.h>

int jogar(char um[20], char dois[20]){
	if(strcmp(um, "tesoura")==0 && strcmp(dois, "papel")==0)	return 1;
	else if(strcmp(um, "papel")==0 && strcmp(dois, "pedra")==0)	return 1;
	else if(strcmp(um, "pedra")==0 && strcmp(dois, "lagarto")==0)	return 1;
	else if(strcmp(um, "lagarto")==0 && strcmp(dois, "Spock")==0)	return 1;
	else if(strcmp(um, "Spock")==0 && strcmp(dois, "tesoura")==0)	return 1;
	else if(strcmp(um, "tesoura")==0 && strcmp(dois, "lagarto")==0)	return 1;
	else if(strcmp(um, "lagarto")==0 && strcmp(dois, "papel")==0)	return 1;
	else if(strcmp(um, "papel")==0 && strcmp(dois, "Spock")==0)	return 1;
	else if(strcmp(um, "Spock")==0 && strcmp(dois, "pedra")==0)	return 1;
	else if(strcmp(um, "pedra")==0 && strcmp(dois, "tesoura")==0)	return 1;
	return 0;
}

main(){
	int N, a;
	char sheldon[20], raj[20];
	scanf("%d\n", &N);
	for(a=0; a<N; a++){
		scanf("%s%s", sheldon, raj);
		printf("Caso #%d: ", a+1);
		if(strcmp(sheldon, raj)==0)		puts("De novo!");
		else if(jogar(sheldon, raj)==1)	puts("Bazinga!");
		else				puts("Raj trapaceou!");
	}
}
