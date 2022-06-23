#include <stdio.h>

typedef struct{
    char nome[100];
    char categoria[100];
} parametros;

int main()
{
	printf("===================Bem-Vindos a LocaFup===================\n");
	printf("\n");
    printf("O que voce deseja fazer?\n");
    printf("1 - Ver catalogo\n");
    printf("2 - Editar catalogo\n\n");
	
    int opcao;
    scanf("%d", &opcao);
    if (opcao==1)
    {
        printf("\nMenu de Opcoes:\n");
        printf("1 - Filme\n");
        printf("2 - Jogo\n");
        printf("3 - Serie");    
    } else {
        
    }
    
}


/*
Editar catalogo
Ver catalogo

Editar o carrinho (adiciona pelo catalogo)
Ver o carrinho*/