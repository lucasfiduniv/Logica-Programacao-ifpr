#include <stdio.h>

int main(void){
    int opcaoSelecionada, opcaoSelecionada1;

    printf("bem vindo ao jogo, para iniciar selecione uma das seguintes opções:\n");
    printf("1 - Novo Jogo\n");
    printf("2 - Carregar Jogo\n");
    printf("3 - Configuracoes\n");
    printf("4 - Sair\n");
    scanf("%d", &opcaoSelecionada);
    float num1, num2;
    char operador;

    switch (opcaoSelecionada)
    {
    case 1:
        printf("Novo Jogo\n");
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        printf("Digite o operador: opcoes validas: +, -, *, /\n");
        scanf(" %c", &operador);
        switch (operador)
            {
            case '+':
                printf("%f + %f = %f\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%f - %f = %f\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%f * %f = %f\n", num1, num2, num1 * num2);
                break;
            case '/':
                printf("%f / %f = %f\n", num1, num2, num1 / num2);
                break;
            default:
                break;
            }
        printf("agora informe um valor de 1 a 7 para correspondente ao dia da semana\n");
        scanf("%d", &opcaoSelecionada1);
        switch (opcaoSelecionada1)
        {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
        break;
    case 2:
        printf("Carregar Jogo\n");
        break;
    case 3:
        printf("Configuracoes\n");
        break;
    case 4:
        printf("Sair\n");
        break;
    default:
        break;
    }

    return 0;
}