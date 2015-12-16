#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.c>
#include <conio.h>
#include <windows.h>

#define KEY_ESC 27

struct No {
    char nome[30];
    char ultimoNome[30];
    char telefone[20];
    char celular[20];
    struct No* prox;
};

typedef struct No* Lista;


Lista criarCabeca () {
    Lista aux = (Lista)malloc(sizeof(struct No));
    aux->prox = NULL;
    return aux;
}

void insereInicio(Lista cabeca) {
    Lista contato = (Lista)malloc(sizeof(struct No));
    printf("\nNome: ");
	gets(contato->nome);
	printf("\nUltimo nome: ");
	gets(contato->ultimoNome);
	printf("\nTelefone: ");
	gets(contato->telefone);
    printf("\nCelular: ");
	gets(contato->celular);

    /** Inserindo no inicio */
    contato->prox = cabeca->prox;
    cabeca->prox = contato;
}

removerDaLista(Lista cabeca) {
    Lista aux = cabeca;

    /*aux = L->prox;
    L->prox = aux->prox;
    free(aux);*/

    char nome[30];
    printf("\nDigite o nome do contato que deseja remover:");
    gets(nome);
    while(aux != NULL) {
        if(!strcmp(nome, aux->prox->nome)){
                Lista aux2
                 = aux->prox;
                free(aux);
        }
        aux = aux->prox;
    }
}

int main () {
    int opcao = 0;
    int a = 0;
    Lista cabeca = criarCabeca();

    textcolor(11);

    gotoxy((80-24)/2,4);
    printf(".:: AGENDA TELEFONICA  ::.");
    gotoxy(5,6);
    printf("Escolha uma das opcoes atraves dos numeros para realizar as operacoes!");
    gotoxy((80-54)/2,7);
    printf("Digite qualquer tecla para continuar ou ESC para sair");
    getchar();
    //scanf("%d", &a);

    //if(a == 27)  {
    //    printf("adasfas");
    //    system("exit");
    //} else {
        while(opcao != 4 || opcao != KEY_ESC){
            system("cls");
            textcolor(15);
            printf("1.INSERIR CONTATO\n2.REMOVER CONTATO\n3.PESQUISAR CONTATO\n4.SAIR ou aperte ESC\n\n");
            scanf("%d", &opcao);
            switch(opcao){
			case 1:
			    insereInicio(cabeca);
				break;
			case 2:
			    removerDaLista(cabeca);
				break;
			case 3:
			    printf("PESQUISAR");
				//pesquisarContato(Lista);
				break;
			case 4:
			    printf("SAIR");
				//listaContato(Lista);
				break;
	//	}

        }
    }

}
