#include <stdio.h>
#include <string.h>

int main(void){
	float nota1, nota2, nota3, media = 0;
	FILE *arquivo_entrada, *arquivo_saida;
	char nome[100], linha[100];


/* ... Após declarar às variaveis do código vamos 
abrir o arquivo de entrada apenas para leitura(r) */
	arquivo_entrada = fopen("entrada_q3.txt", "r");
	if (arquivo_entrada == NULL){
		printf("Erro ao abrir arquivo");
		exit(1);
	}

/* ... Depois vamos abrir o arquivo de saída para escrever */		
	arquivo_saida = fopen("saida_q3.txt","w");
	if (arquivo_saida == NULL){
		printf("Erro ao abrir arquivo");
		exit(1);
	}
	
/* 1. Para ler os dados do arquivo de entrada vamos usar a função fgets() para receber três argumentos: a string
a seer lida, o limite máximo de caracteres a serem lidos e o ponteiro para FILE associado a String a ser lida.	

2. Dentro do While, vamos usar outra função que vai receber a string a ser analisada, o formato para ser
interpretado na documentação e passar as variaveis por referencia, sendo possivel alterar o conteudo da variavel
*/ 

	 
	while(fgets(linha, 100, arquivo_entrada) != NULL){
		sscanf(linha,"%20[^\t]\t%f\t%f", nome, &nota1, &nota2, &nota3);
		media = (nota1 + nota2 + nota3)/ 3;
		
	//Escreve no arquivo de saida os dados de nome, media e aprovado/reprovado
	fprintf(arquivo_saida,"%s/t%.1f\t s%\n", nome, media,(media >= 7.0)?"aprovado":"reprovado");	   	

	}
	
	
	fclose(arquivo_entrada);
	fclose(arquivo_saida);
		
	return 0;	
}
