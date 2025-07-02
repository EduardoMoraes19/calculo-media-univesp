#include <stdio.h>

int main(){
    float n_prova, n_atividade, m_prova, m_atividades, m_final;
    
    printf("Digite as notas de prova e da media das atividades avaliativas para calcular sua media.\n");

    printf("Digite o nota da prova\n");
    scanf("%f", &n_prova);

    printf("Digite o media das atividades avaliativas\n");
    scanf("%f", &n_atividade);

    m_prova = n_prova * 0.6;
    m_atividades = n_atividade * 0.4;
    
    m_final = m_prova + m_atividades;

    if (m_final >= 6.0 && m_final <= 10.0)
    {
        printf("Você passou nessa materia sua media é %.2f", m_final);
    }else{
        printf("Você esta de exame sua nota foi %.2f", m_final);
    }
    
}