#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    /* Abaixo declaramos as variaveis referentes as cartas 1 e 2 do supertrunfo sendo cada variavel referente ao proprio nome que ela recebe*/
    /*Quando declarei as variaveis coloquei um valor inicial para elas para nao conterem 'lixo', esse valor sera alterado e insignificante durante o codigo*/


char estado1 = 'a';
char estado2 = 'b';
char codigo1[5] = "al";
char codigo2[5] = "al";
char cidade1[20] = "al";
char cidade2[20] = "al";
int populacao1 = 0, populacao2= 0;
float area1 = 0, area2 = 0;
float pib1 = 0, pib2 = 0;
int pontostur1 = 0, pontostur2 = 0;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
//Aqui começamos a digitar as informações da primeira carta
    
printf("Cadastre os dados da primeira carta do jogo SuperTrunfo, lembre-se, sempre use ponto ao invés de vírgula nas informações que digitar.");

printf("\n\nDigite a letra que represente o Estado da primeira carta, use letras maiúsculas de 'A' à 'H' para representá-lo : "); 
scanf(" %c", &estado1);

printf("\nDigite o código da primeira carta, ele será a letra escolhida '%c', seguido de um número de 01 até 04, por exemplo %c01: ", estado1, estado1); 
scanf("%s", codigo1);

printf("\nDigite o nome da cidade da primeira carta: ");
scanf ("%s", cidade1);

printf("\nDigite quantos habitantes existem na cidade da primeira carta, digite apenas o número, não escreva nada além disso: ");
scanf("%d", &populacao1);

printf("\nDigite qual a área em km² da cidade da primeira carta: ");
scanf("%f", &area1);

printf("\nDigite qual o PIB 'Produto Interno Bruto' referente à cidade da primeira carta: ");
scanf("%f", &pib1);

printf("\nPara finalizar digite quantos pontos turísticos a cidade da primeira carta possui: ");
scanf("%d", &pontostur1);

//Aqui começamos a digitar as informações da segunda carta

printf("\nAgora vamos para a segunda carta, repita exatamente o mesmo processo. ");

printf("\n\nDigite a letra que represente o Estado da segunda carta, use letras maiúsculas de 'A' à 'H' para representá-lo : "); 
scanf(" %c", &estado2);

printf("\nDigite o código da segunda carta, ele será a letra escolhida '%c', seguido de um número de 01 até 04, por exemplo %c01: ", estado2, estado2); 
scanf("%s", codigo2);

printf("\nDigite o nome da cidade da segunda carta: ");
scanf ("%s", cidade2);

printf("\nDigite quantos habitantes existem na cidade da segunda carta, digite apenas o número, não escreva nada além disso: ");
scanf("%d", &populacao2);

printf("\nDigite qual a área em km² da cidade da segunda carta: ");
scanf("%f", &area2);

printf("\nDigite qual o PIB 'Produto Interno Bruto' referente à cidade da segunda carta: ");
scanf("%f", &pib2);

printf("\nPara finalizar digite quantos pontos turísticos a cidade da segunda carta possui: ");
scanf("%d", &pontostur2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Exibindo as informações da primeira carta

printf("\nConfira abaixo os dados da primeira carta cadastrada: ");

printf("\n\n Estado : %c \n Código da carta: %s \n Nome da cidade: %s \n População: %d \n Área(km²): %.3f \n PIB: %.3f \n Número de pontos turisticos: %d", estado1, codigo1, cidade1, populacao1, area1, pib1, pontostur1 );

    // Exibindo as informações da segunda carta

printf("\n\nConfira abaixo os dados da segunda carta cadastrada:");

printf("\n\n Estado : %c \n Código da carta: %s \n Nome da cidade: %s \n População: %d \n Área(km²): %.3f \n PIB: %.3f \n Número de pontos turisticos: %d", estado2, codigo2, cidade2, populacao2, area2, pib2, pontostur2 );

printf("\n\n");
    return 0;
}
