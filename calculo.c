#include <stdio.h>

int main(){
    float nota_prova, nota_atividades, media_prova, media_atividades, media_final, entrada_valida;
    
    printf("Digite as notas de prova e da media geral das atividades avaliativas para calcular sua media da UNIVESP.\n");

    // Captura das notas 
    entrada_valida = 0;
    do
    {
        printf("Digite o nota da prova:\n");
        if (scanf("%f", &nota_prova) != 1){
            while (getchar() != '\n');
            printf("Entrada inválida. Digite um numero de 1 a 10.\n");
        }else if (nota_prova < 0 || nota_prova > 10){
            printf("Entrada inválida. Digite um numero de 1 a 10.\n");
        }else{
            entrada_valida = 1;
        }
    } while (!entrada_valida);

    entrada_valida = 0;
    do
    {
        printf("Digite o nota das atividades:\n");
        if (scanf("%f", &nota_atividades) != 1){
            while (getchar() != '\n');
            printf("Entrada inválida. Digite um numero de 1 a 10.\n");
        }else if (nota_atividades < 0 || nota_atividades > 10){
            printf("Entrada inválida. Digite um numero de 1 a 10.\n");
        }else{
            entrada_valida = 1;
        }
    } while (!entrada_valida);

    // Cálculo das médias
    media_prova = nota_prova * 0.6;
    media_atividades = nota_atividades * 0.4;
    media_final = media_prova + media_atividades;

    // Resultado final
    if (media_final >= 6.0 && media_final <= 10.0)
    {
        printf("Você passou nessa materia, sua media é %.1f", media_final);
    }else{
        printf("Você está de exame sua nota foi %.1f", media_final);
    }
    
    return 0;
}