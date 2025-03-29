#include <stdio.h>


int main(){

//****************VARIAVEIS CARTA 1 *******************// 
    char letraestado = 'S';
    char codigocarta[4] =("S01");
    char nomecidade[40]="São Paulo";
    unsigned int populacao =100;
    float area= 100;
    float PIB= 1000;
    int Pontos_turísticos=8;
    float densidade1 = populacao / area;
   
 

//****************VARIAVEIS CARTA 2 *******************//   
    char letraestado2 = 'F';
    char codigocarta2[4]=("F01");
    char nomecidade2[40]="Fortaleza";
    unsigned int populacao2= 100;
    float area2= 100;
    float PIB2= 1000;
    int Pontos_turísticos2= 8;
    float densidade2=populacao2 / area2;
    
       
//***************PRIMEIRO MENU************************//

    int opcao1;
    int opcaoComparar;

// menu exibir ou comparar.
    printf("Escolha uma opção: \n");
    printf("1- Ver cartas cadastradas.\n");
    printf("2- Comparar dois atributos das cartas.\n");
    scanf("%d", &opcao1);

    switch (opcao1){
        
        case 1: // exibindo dados cadastrados
            //Exibição CARTA1
            printf("Exibindo... \n\nCarta 1 e 2 cadastrada:\n\n");
            printf("Carta 1: \n"); 
            printf("Estado: %c\n", letraestado);
            printf("Código: %s\n", codigocarta);
            printf("Cidade: %s\n", nomecidade);
            printf("População: %d\n", populacao);
            printf("Área: %.2f km² \n", area);
            printf("PIB: %.2f bilhões de reais\n", PIB);
            printf("Número de Pontos Turísticos: %d\n", Pontos_turísticos);
            printf("Densidade Populacional: %.2f hab/km² \n\n", densidade1);
           
            

            ///Exibição CARTA2
            printf("Carta 2: \n"); 
            printf("Estado: %c\n", letraestado2);
            printf("Código: %s\n", codigocarta2);
            printf("Cidade: %s\n", nomecidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f km² \n", area2);
            printf("PIB: %.2f bilhões de reais\n", PIB2);
            printf("Número de Pontos Turísticos: %d\n", Pontos_turísticos2);
            printf("Densidade Populacional: %.2f hab/km² \n\n", densidade2);


//----------------------------------------------------------------------------------  ESCOLHA ATRIBUTOS.

            break;
            int atributo;
        case 2: 

            printf("Escolha o primeiro atributo\n");
            printf("1- População\n");
            printf("2- Área\n");
            printf("3- PIB\n");
            printf("4- Número de Pontos Turísticos\n");
            printf("5- Densidade demográfica\n");
            scanf("%d", &atributo);
            switch (atributo){ //ABRINDO MENU DINÂMICO<<<<<<<<<<


 //----------------------------------------------------------------------------------               
            
            case 1:                      

            int atributo1Populacao;         //Se o atributo for o 1, então aparece 2, 3, 4, e 5 de segunda opções.
                
                printf("Escolha o segundo atributo\n");
                printf("2- Área\n");
                printf("3- PIB\n");
                printf("4- Número de Pontos Turísticos\n");
                printf("5- Densidade demográfica\n");
                scanf("%d", &atributo1Populacao);
                switch (atributo1Populacao){  // menu segundo atributo.-------AREA
                    case 2:
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: População e Área.\n");
                        printf("A cidade %s, possui %d habitantes e uma área de %2.f.\n",nomecidade, populacao, area);
                        printf("A cidade %s, possui %d habitantes e uma área de %2.f.\n",nomecidade2, populacao2, area2);
                        float soma = (populacao+area);
                        float soma2 = (populacao2+area2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }
    
                    break;
                    case 3:// menu segundo atributo.----------PIB
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: População e PIB.\n");
                        printf("A cidade %s, possui %d habitantes e um PIB de %2.f.\n",nomecidade, populacao, PIB);
                        printf("A cidade %s, possui %d habitantes e um PIB de %2.f.\n",nomecidade2, populacao2, PIB2);
                        soma = (populacao+PIB);
                        soma2 = (populacao2+PIB2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                    break;
                    case 4:// menu segundo atributo. ------- PONTOS TURÍSTICOS
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: População e Número de Pontos turísticos.\n");
                        printf("A cidade %s, possui %d habitantes e um Número de Pontos turísticos de %d.\n",nomecidade, populacao, Pontos_turísticos);
                        printf("A cidade %s, possui %d habitantes e um Número de Pontos turísticos de %d.\n",nomecidade2, populacao2, Pontos_turísticos2);
                        soma = (populacao+Pontos_turísticos);
                        soma2 = (populacao2+Pontos_turísticos2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                    break;
                    case 5:// menu segundo atributo. --------DENSIDADE
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: População e Densidade Demográfica.\n");
                        printf("A cidade %s, possui %d habitantes e a Densidade Demográfica é de %.2f.\n",nomecidade, populacao, densidade1);
                        printf("A cidade %s, possui %d habitantes e a Densidade Demográfica é de %.2f.\n",nomecidade2, populacao2, densidade2);
                        soma = (populacao+densidade1);
                        soma2 = (populacao2+densidade2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma<soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma>soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                    break;
                    default:
                    printf("Opção inválida!\n");}
                
            

//----------------------------------------------------------------------------------
            break;        
            case 2: 
                
                int atributo1Area;     //Se o atributo for o 2, então aparece 1, 3, 4, e 5 de segunda opções.
                printf("Escolha o segundo atributo\n");
                printf("1 - População\n");
                printf("3- PIB\n");
                printf("4- Número de Pontos Turísticos\n");
                printf("5- Densidade demográfica\n");
                scanf("%d", &atributo1Area);
                switch (atributo1Area){  // menu segundo atributo. ------ POPULAÇÃO
                    case 1:
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: Área e População.\n");
                        printf("A cidade %s, possui uma área de %2.f e uma população de %d.\n",nomecidade, area, populacao);
                        printf("A cidade %s, possui uma área de %2.f e uma população de %d.\n",nomecidade2, area2, populacao2);
                        float soma = (area+populacao);
                        float soma2 = (area2+populacao2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                    break;
                    case 3:// menu segundo atributo.----------PIB
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: Área e PIB.\n");
                        printf("A cidade %s, possui uma área de %2.f e o PIB é  %.2f.\n",nomecidade, area, PIB);
                        printf("A cidade %s, possui uma área de %2.f e o PIB é %.2f.\n",nomecidade2, area2, PIB2);
                        soma = (area+PIB);
                        soma2 = (area2+PIB2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                    break;
                    case 4:// menu segundo atributo. ------- PONTOS TURÍSTICOS
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: Área e Número de Ponto Turístico.\n");
                        printf("A cidade %s, possui uma área de %2.f e o Número de Ponto Turístico é %d.\n",nomecidade, area, Pontos_turísticos);
                        printf("A cidade %s, possui uma área de %2.f e o Número de Ponto Turístico é %d.\n",nomecidade2, area2, Pontos_turísticos2);
                        soma = (area+Pontos_turísticos);
                        soma2 = (area2+Pontos_turísticos2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }


                    break;
                    case 5:// menu segundo atributo. --------DENSIDADE
                    printf("%s e %s\n\n", nomecidade, nomecidade2);
                    printf("Os atributos utlizados são: Área e Densidade Demográfica.\n");
                    printf("A de cidade %s, possui uma área de %.2f e a Densidade Demográfica é de %.2f.\n",nomecidade, populacao, densidade1);
                    printf("A de cidade %s, uma área de %.2f e a Densidade Demográfica é de %.2f.\n",nomecidade2, populacao2, densidade2);
                    soma = (area+densidade1);
                    soma2 = (area2+densidade2);
                    printf("A soma para %s é: %.2f\n", nomecidade, soma);
                    printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                    if (soma<soma2){
                        printf("Carta 1 ganhou!\n");
                    }else if (soma>soma2){
                        printf("Carta 2 ganhou!\n");
                    }else {
                        printf("Deu empate!\n");
                    }


                break;
                default:
                printf("Opção inválida!\n");}
                    
                 

//----------------------------------------------------------------------------------
            break;
            case 3:
                
                int atributo1PIB;      //Se o atributo for o 3, então aparece 1, 2, 4, e 5 de segunda opções.
                printf("Escolha o segundo atributo\n");
                printf("1 - População\n");
                printf("2 - Área\n");
                printf("4- Número de Pontos Turísticos\n");
                printf("5- Densidade demográfica\n");
                scanf("%d", &atributo1PIB);
                switch (atributo1PIB){  
                    case 1:// menu segundo atributo. ------ POPULAÇÃO
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: PIB e População.\n");
                        printf("A cidade %s, possui um PIB de %2.f e uma população de %d.\n",nomecidade, PIB, populacao);
                        printf("A cidade %s, possui um PIB de %2.f e uma população de %d.\n",nomecidade2, PIB2, populacao2);
                        float soma = (PIB+populacao);
                        float soma2 = (PIB2+populacao2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                    break;
                    case 2:// menu segundo atributo.-------AREA
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: PIB e Área.\n");
                        printf("A cidade %s, possui um PIB de %2.f e uma Área de %d.\n",nomecidade, PIB, area);
                        printf("A cidade %s, possui um PIB de %2.f e uma Área de %d.\n",nomecidade2, PIB2, area2);
                        soma = (PIB+area);
                        soma2 = (PIB2+area2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                    break;
                    case 4:// menu segundo atributo. ------- PONTOS TURÍSTICOS
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: PIB e Número de Pontos Turísticos.\n");
                        printf("A cidade %s, possui um PIB de %2.f e um Número de Pontos Turísticos de %d.\n",nomecidade, PIB, Pontos_turísticos);
                        printf("A cidade %s, possui um PIB de %2.f e um Número de Pontos Turísticos de %d.\n",nomecidade2, PIB2, Pontos_turísticos);
                        soma = (PIB+Pontos_turísticos);
                        soma2 = (PIB2+Pontos_turísticos2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                    break;
                    case 5:// menu segundo atributo. --------DENSIDADE
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: PIB e Densidade.\n");
                        printf("A cidade %s, possui um PIB de %2.f e uma Densidade de %.2f.\n",nomecidade, PIB, densidade1);
                        printf("A cidade %s, possui um PIB de %2.f e uma Densidade de %.2f.\n",nomecidade2, PIB2, densidade2);
                        soma = (PIB+densidade1);
                        soma2 = (PIB2+densidade2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                    break;
                    default:
                    printf("Opção inválida!\n");}
                    
                  



//----------------------------------------------------------------------------------
                break;
            case 4:
                
                int atributo1NumeroPt;   //Se o atributo for o 4, então aparece 1, 2, 3, e 5 de segunda opções.
                printf("Escolha o segundo atributo\n");
                printf("1 - População\n");
                printf("2 - Área\n");
                printf("3- PIB\n");
                printf("5- Densidade demográfica\n");
                scanf("%d", &atributo1NumeroPt);
                switch (atributo1NumeroPt){  
                    case 1:// menu segundo atributo. ------ POPULAÇÃO
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: Número de Pontos Turísticos e População.\n");
                        printf("A cidade %s, possui Número de Pontos Turísticos de %d e uma população de %d.\n",nomecidade, Pontos_turísticos, populacao);
                        printf("A cidade %s, possui Número de Pontos Turísticos de %d e uma população de %d.\n",nomecidade2, Pontos_turísticos2, populacao2);
                        float soma = (Pontos_turísticos+populacao);
                        float soma2 = (Pontos_turísticos2+populacao2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }
                    break;

                    case 2:// menu segundo atributo.-------AREA
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: Número de Pontos Turísticos e Área.\n");
                        printf("A cidade %s, possui Número de Pontos Turísticos de %d e a Área de %.2f.\n",nomecidade, Pontos_turísticos, area);
                        printf("A cidade %s, possui Número de Pontos Turísticos de %d e a Área de %.2f.\n",nomecidade2, Pontos_turísticos2, area2);
                        soma = (Pontos_turísticos+area);
                        soma2 = (Pontos_turísticos2+area2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                    break;
                    case 3:// menu segundo atributo.----------PIB
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: Número de Pontos Turísticos e PIB.\n");
                        printf("A cidade %s, possui Número de Pontos Turísticos de %d e a PIB de %.2f.\n",nomecidade, Pontos_turísticos, PIB);
                        printf("A cidade %s, possui Número de Pontos Turísticos de %d e a PIB de %.2f.\n",nomecidade2, Pontos_turísticos2, PIB2);
                        soma = (Pontos_turísticos+PIB);
                        soma2 = (Pontos_turísticos2+PIB2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                    break;
                    case 5:// menu segundo atributo. --------DENSIDADE
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: Número de Pontos Turísticos e Densidade.\n");
                        printf("A cidade %s, possui Número de Pontos Turísticos de %d e a Densidade de %.2f.\n",nomecidade, Pontos_turísticos, densidade1);
                        printf("A cidade %s, possui Número de Pontos Turísticos de %d e a Densidade de %.2f.\n",nomecidade2, Pontos_turísticos2, densidade2);
                        soma = (Pontos_turísticos+densidade1);
                        soma2 = (Pontos_turísticos2+densidade2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                break;                
                default:
                printf("Opção inválida!\n");}
                    
                


//----------------------------------------------------------------------------------
                break;
            case 5:
               
                int atributo1Densidade; //Se o atributo for o 5, então aparece 1, 2, 3, e 4 de segunda opções.
                printf("Escolha o segundo atributo\n");
                printf("1 - População\n");
                printf("2 - Área\n");
                printf("3- PIB\n");
                printf("4- Número de Pontos Turísticos\n");
                scanf("%d", &atributo1Densidade);
                switch (atributo1Densidade){  
                    case 1:// menu segundo atributo. ------ POPULAÇÃO
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: Densidade e População.\n");
                        printf("A cidade %s, possui uma Densidade de %2.f e uma população de %d.\n",nomecidade, densidade1, populacao);
                        printf("A cidade %s, possui uma Densidade de %2.f e uma população de %d.\n",nomecidade2, densidade2, populacao2);
                        float soma = (densidade1+populacao);
                        float soma2 = (densidade2+populacao2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                    break;
                    case 2:// menu segundo atributo.-------AREA
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: Densidade e Área.\n");
                        printf("A cidade %s, possui uma Densidade de %2.f e uma Área de %.2f.\n",nomecidade, densidade1, area);
                        printf("A cidade %s, possui uma Densidade de %2.f e uma Área de %.2f.\n",nomecidade2, densidade2, area2);
                        soma = (densidade1+area);
                        soma2 = (densidade2+area2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }

                    break;
                    case 3:// menu segundo atributo.----------PIB
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: Densidade e PIB.\n");
                        printf("A cidade %s, possui uma Densidade de %2.f e um PIB de %.2f.\n",nomecidade, densidade1, PIB);
                        printf("A cidade %s, possui uma Densidade de %2.f e um PIB de %.2f.\n",nomecidade2, densidade2, PIB2);
                        soma = (densidade1+PIB);
                        soma2 = (densidade2+PIB2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }
                    break;

                    case 4:// menu segundo atributo. ------- PONTOS TURÍSTICOS
                        printf("%s e %s\n\n", nomecidade, nomecidade2);
                        printf("Os atributos utlizados são: Densidade e Número de Pontos Turísticos .\n");
                        printf("A cidade %s, possui uma Densidade de %2.f e Número de Pontos Turísticos  de %d.\n",nomecidade, densidade1, Pontos_turísticos);
                        printf("A cidade %s, possui uma Densidade de %2.f e Número de Pontos Turísticos  de %d.\n",nomecidade2, densidade2, Pontos_turísticos2);
                        soma = (densidade1+Pontos_turísticos);
                        soma2 = (densidade2+Pontos_turísticos2);
                        printf("A soma para %s é: %.2f\n", nomecidade, soma);
                        printf("A soma para %s é: %.2f\n", nomecidade2, soma2);
                        if (soma>soma2){
                            printf("Carta 1 ganhou!\n");
                        }else if (soma<soma2){
                            printf("Carta 2 ganhou!\n");
                        }else {
                            printf("Deu empate!\n");
                        }
                break;                
                default:
                printf("Opção inválida!\n");}
                    
                  

    break;
    default:
        printf("Opção inválida\n");}


break;
default:
printf("Opção inválida\n");}
            
       

return 0;
 }                    
        