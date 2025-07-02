#include <stdio.h>

int main(){
    float nota_prova, nota_atividade, media_prova, media_atividades, media_final;
    
    printf("Digite as notas de prova e da media das atividades avaliativas para calcular sua media.\n");

    printf("Digite o nota da prova:\n");
    scanf("%f", &nota_prova);

    printf("Digite o media das atividades avaliativas:\n");
    scanf("%f", &nota_atividade);

    media_prova = nota_prova * 0.6;
    media_atividades = nota_atividade * 0.4;
    
    media_final = media_prova + media_atividades;

    if (media_final >= 6.0 && media_final <= 10.0)
    {
        printf("Você passou nessa materia sua media é %.2f", media_final);
    }else{
        printf("Você esta de exame sua nota foi %.2f", media_final);
    }
    
}