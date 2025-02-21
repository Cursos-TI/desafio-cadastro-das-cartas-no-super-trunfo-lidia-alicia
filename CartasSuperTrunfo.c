#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

  
    printf("Desafio Super Trunfo- Países \n");
     
    char codigodacidade [3];
    char nome [40];
    float população;
    float área;
    float pib;
    int numerodepontosturisticos;

    printf("Insira o código da cidade: \n");
    scanf("%s", &codigodacidade);

    printf("Insira o nome: \n");
    scanf("%s", &nome);

    printf("Insira a população: \n");
    scanf("%f", &população);

    printf("Insira a área: \n");
    scanf("%f", &área);

    printf("Insira o pib: \n");
    scanf("%f", &pib);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos);

    printf("Código da cidade: %s \n", codigodacidade);
    printf("Nome: %s \n", nome);
    printf("População: %f \n", população);
    printf("Área: %f \n", área);
    printf("Pib: %f \n", pib);
    printf("Número de pontos turísticos: %d \n", numerodepontosturisticos);
    

    printf("Insira o código da cidade: \n");
    scanf("%s", &codigodacidade);

    printf("Insira o nome: \n");
    scanf("%s", &nome);

    printf("Insira a população: \n");
    scanf("%f", &população);

    printf("Insira a área: \n");
    scanf("%f", &área);

    printf("Insira o pib: \n");
    scanf("%f", &pib);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos);

    printf("Código da cidade: %s \n", codigodacidade);
    printf("Nome: %s \n", nome);
    printf("População: %f \n", população);
    printf("Área: %f \n", área);
    printf("Pib: %f \n", pib);
    printf("Número de pontos turísticos: %d \n", numerodepontosturisticos);
  
  
  
    return 0;
}
