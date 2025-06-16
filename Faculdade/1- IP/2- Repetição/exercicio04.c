#include <stdio.h>
// Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
// Foram obtidos os seguintes dados:
// a) código da cidade;
// b) número de veículos de passeio;
// c) número de acidentes de trânsito com vítimas.
// Deseja-se saber:
// a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
// b) qual é a média de veículos nas cinco cidades juntas;
// c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio
#define cidades 5
int main()
{
    int veiculos, acidentes, codigoCidade, contagem = 0;
    float indiceAcidentes, somaAcidentes = 0, somaVeiculos = 0;

    for (int i = 0; i < cidades; i++)
    {
        printf("qual o codigo da %d cidades:", i + 1);
        scanf("%d", &codigoCidade);
        printf("qual o numeros de veiculos da %d cidade:", i + 1);
        scanf("%d", &veiculos);
        printf("qual numeros de acidentes da %d cidades:", i + 1);
        scanf("%d", &acidentes);

        if (i == 0)
        {
            indiceAcidentes = acidentes;
        }
        else if (indiceAcidentes > acidentes)
        {
            indiceAcidentes = acidentes;
        }

        somaVeiculos += veiculos;

        if (veiculos < 2000)
        {
            somaAcidentes += acidentes;
            contagem++;
        }
    }
    printf("O menor indice de acidentes de transito %.1f\n", indiceAcidentes);
    printf("A media de veiuclos nas cinco cidades:%.1f\n", somaVeiculos / cidades);
    printf("A media de acidentes de transito nas cidades com menos de 2000 veiculos de passeio:%.1f\n", somaAcidentes / contagem);

    return 0;
}