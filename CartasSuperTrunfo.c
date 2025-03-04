#include <stdio.h>
#include <string.h>

int main() {
// Variaveis de todas as cartas
     char estado[10];
     char estado2[10];
     char codigo[10];
     char codigo2[10];
     char nome [50];
     char nome2[50];
     int populacao; 
     int populacao2;
     float area;
     float area2;
     float pib;
     float pib2;
     int pontos_turisticos;
     int pontos_turisticos2;
// Carta 01
     printf ("Carta 01 \n");

     printf ("Digite a letra do Estado:\n");
     scanf ("%s", estado);
     while (getchar() != '\n');// limpar buffer do scanf na quebra de linha

     printf ("Digite o código da carta:\n");
     scanf ("%s", codigo);
     while (getchar() != '\n');
     

     printf ("Digite o nome da cidade: \n");
     fgets(nome, sizeof(nome), stdin);
     nome[strcspn(nome, "\n")] = '\0'; ;

     printf ("Digite a população:\n");
     scanf ("%d", &populacao);
     while (getchar() != '\n');

     printf ("digite a área: \n");
     scanf ("%f",&area);
     while (getchar() != '\n');

     printf ("digite o PIB: \n");
     scanf ("%f",&pib);
     while (getchar() != '\n');

     printf ("Quantos pontos turisticos: \n");
     scanf ("%d", &pontos_turisticos);
     while (getchar() != '\n');
// Apresentação Carta 01   
     printf ("Carta 1 \n");
     printf ("Estado: %s \n", estado);
     printf ("Código da Carta: %s%s \n",estado,codigo);
     printf ("Cidade: %s \n", nome );
     printf ("População: %d \n", populacao);
     printf ("Área: %f km2\n", area);
     printf ("PIB: %f Bilhões de Reais \n", pib);
     printf ("Pontos Turísticos: %d \n", pontos_turisticos);
// Carta 02
     printf ("Carta 02 \n");

     printf ("Digite a letra do Estado:\n");
     scanf ("%s", estado2);
     while (getchar() != '\n');// limpar buffer do scanf na quebra de linha

     printf ("Digite o código da carta:\n");
     scanf ("%s", codigo2);
     while (getchar() != '\n');


     printf ("Digite o nome da cidade: \n");
     fgets(nome2, sizeof(nome2), stdin);
     nome[strcspn(nome, "\n")] = '\0'; ;

     printf ("Digite a população:\n");
     scanf ("%d", &populacao2);
     while (getchar() != '\n');

     printf ("digite a área: \n");
     scanf ("%f",&area2);
     while (getchar() != '\n');

     printf ("digite o PIB: \n");
     scanf ("%f",&pib2);
     while (getchar() != '\n');

     printf ("Quantos pontos turisticos: \n");
     scanf ("%d", &pontos_turisticos2);
     while (getchar() != '\n');
// Apresentação Carta 02
     printf ("Carta 2\n");
     printf ("Estado: %s \n", estado2 );
     printf ("Código da Carta: %s%s \n", estado2, codigo2 );
     printf ("Cidade: %s \n", nome2);
     printf ("População: %d \n", populacao2);
     printf ("Área: %d km2\n", area2);
     printf ("PIB: %f Bilhões de Reais \n", pib2);
     printf ("Pontos Turísticos: %d \n", pontos_turisticos2);

     return 0;
}
