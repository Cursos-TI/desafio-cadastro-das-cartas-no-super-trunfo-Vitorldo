#include <stdio.h>

int main() {
    // Variaveis de todas as cartas
         char estado[2];
         char estado2[2];
         char codigo[3];
         char codigo2[3];
         char nome[50];
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
    
         printf ("Digite o código da carta:\n");
         scanf ("%s", codigo);
    
         printf ("Digite o nome da cidade:\n");
         scanf ("%s", nome);
    
         printf ("Digite a população:\n");
         scanf ("%d", &populacao);
    
         printf ("digite a área: \n");
         scanf ("%f",&area);
    
         printf ("digite o PIB: \n");
         scanf ("%f",&pib);
         
         printf ("Quantos pontos turisticos: \n");
         scanf ("%d", &pontos_turisticos);
    // Apresentação Carta 01   
         printf ("Carta 1 \n");
         printf ("Estado: %s \n", estado );
         printf ("Código da Carta: %s \n",codigo );
         printf ("Cidade: %s \n", nome );
         printf ("População: %d \n", populacao);
         printf ("Área: %f km2\n", area);
         printf ("PIB: %f Bilhões de Reais \n", pib);
         printf ("Pontos Turísticos: %d \n", pontos_turisticos);
    // Carta 02
         printf ("Carta 02 \n");
         printf ("Digite a letra do Estado:\n");
         scanf ("%s", estado2);
    
         printf ("Digite o código da carta:\n");
         scanf ("%s", codigo2);
    
         printf ("Digite o nome da cidade:\n");
         scanf ("%s", nome2);
    
         printf ("Digite a população:\n");
         scanf ("%d", &populacao2);
    
         printf ("digite a área: \n");
         scanf ("%d",&area2);
    
         printf ("digite o PIB: \n");
         scanf ("%f",&pib2);
    
         printf ("Quantos pontos turisticos: \n");
         scanf ("%d", &pontos_turisticos2);
    // Apresentação Carta 02
         printf ("Carta 2\n");
         printf ("Estado: %s \n", estado2 );
         printf ("Código da Carta: %s \n", codigo2 );
         printf ("Cidade: %s \n", nome2 );
         printf ("População: %d \n", populacao2);
         printf ("Área: %d km2\n", area2);
         printf ("PIB: %f Bilhões de Reais \n", pib2);
         printf ("Pontos Turísticos: %d \n", pontos_turisticos2);
    
         return 0;
    }