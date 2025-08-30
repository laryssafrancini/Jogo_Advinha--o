#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_MAXIMO 100

int main()
{
    system("clear"); // limpar a tela (Windows). Use "clear" no Linux.
    // NUMEROS ALEATORIOS (configurar a semente para gerar números diferentes a cada execução)
    srand(time(NULL));

    // Definição do vetor para armazenar o histórico das tentativas
    int historico[TAMANHO_MAXIMO];

    // Gerando o número aleatório entre 1 e 100
    int numeroSecreto = rand() % 100 + 1;

    // Início das variáveis
    int tentativa, tentativasRealizadas = 0;
    int continuarJogando = 1;  // flag para continuar o jogo (vai entrar no laço) 

    system("cls"); // Use "clear" no Linux.

    // Mensagem inicial
    printf("**********************************\n");
    printf(" Bem vindo ao jogo de adivinhação!\n");
    printf("**********************************\n\n");

    while (continuarJogando)
    {
        // Solicitando uma tentativa ao jogador
        printf("Tentativa #%d: Digite um número entre 1 e 100: ", tentativasRealizadas + 1); 
        scanf("%d", &tentativa);

        // Armazenando a tentativa no histórico
        historico[tentativasRealizadas] = tentativa;

        // Verificando se a tentativa está correta
        if (tentativa == numeroSecreto) {
            printf("🎉 Parabéns Jogador! Você acertou o número secreto %d em %d tentativas.\n", numeroSecreto, tentativasRealizadas + 1);
            continuarJogando = 0; // Sai do laço
        } else {
            if (tentativa < numeroSecreto) {
                printf("O número secreto é MAIOR que %d. Tente novamente!\n", tentativa);
            } else {
                printf("O número secreto é MENOR que %d. Tente novamente!\n", tentativa);
            }


            tentativasRealizadas++;

            // Verificando se o jogador atingiu o número máximo de tentativas
            if (tentativasRealizadas >= TAMANHO_MAXIMO) {
                printf("\n❌ Você atingiu o número máximo de tentativas.\n");
                printf("O número secreto era %d.\n", numeroSecreto);
                continuarJogando = 0; // Sai do laço
            }
        }
    }

    return 0;
}