#include <stdio.h>
/*2.     
Faça um programa em C que:


a.       Peça
ao usuário para informar a quantidade de elementos que o vetor de inteiros deve
possuir;


b.      Possua
uma função que receba o endereço do vetor e a quantidade de elementos, peça
para o usuário digitar e armazene todos os valores digitados no vetor;


c.       Possua
uma função que receba o endereço do vetor, calcule e exiba a média aritmética
de todos os elementos do vetor;


d.      Possua
uma função que receba o endereço do vetor e mostre, na tela, todos os elementos
do vetor na ordem em que foram digitados;


e.       Possua
uma função que receba o endereço do vetor e mostre o menor elemento contido no
vetor;


f.       
Possua uma função que ordene o vetor na ordem crescente.
Dica: Caso deseje otimizar a função,
você pode utilizar a função criada no item
e (que sempre encontra o menor
valor) e usar recursividade da função que ordene.


g.      Após
inicializar o vetor com os valores informados pelo usuário utilizando a função
do item b, o programa deve exibir um
menu com as opções:


                                                             
i.     
Calcular média dos elementos


                                                           
ii.     
Exibir todos os elementos


                                                         
iii.     
Exibir menor elemento


                                                         
iv.     
Ordenar vetor em ordem decrescente.


                                                           
v.     
Finalizar programa

O usuário poderá escolher o que acontecerá.*/
void endereco_vetor(int elementos, int vetor[]) 
{
    for (int i = 0; i < elementos; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
}
void media_aritimedica(int vetor[], int elementos)
{
    int soma=0;

    for (int i = 0; i < elementos; i++)
    {
        soma+=vetor[i];      
    }
    
    float media = (float)soma/elementos;

    printf("%.1f", media);
}
int main()
{
    int elementos;

    printf("informe a quantidade de elementos que o seguinte vetor deve possuir:\n");
    scanf("%d", &elementos);

    int vetor[elementos];

    printf("Vetor com %d elementos\n", elementos);
    endereco_vetor(elementos, vetor);

    for (int i = 0; i < elementos; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    printf("\n");

    printf("Media aritimedica: ");
    media_aritimedica(vetor, elementos);

    return 0;
}
