#include <stdio.h>

int main()
{
    float peso, altura, media_idade, soma_das_idades, soma_das_alturas, media_altura;
    int jogador, time, idade, cont_idade=0, cont_peso=0;

    for(time = 1; time <= 5; time++)
    {
        for(jogador = 1; jogador <= 11; jogador++);
        {
            printf("informe o peso do jogador %d do time 0%d\n", jogador, time);
            scanf("%f", &peso);

            printf("informe a altura do jogador %d do time 0%d\n", jogador, time);
            scanf("%f", &altura);

            printf("informe a idade do jogador %d do time %d\n", jogador, time);
            scanf("%d", &idade);

            if(idade<18)
            {
                cont_idade++;
            }
            
            soma_das_idades+=idade;
        }
        
        if (peso > 80)
        {
            cont_peso++;
        }
        
        soma_das_alturas+= altura;
    }
    
    media_altura= soma_das_alturas/jogador;
    media_idade= soma_das_idades/jogador;

return 0;
}



