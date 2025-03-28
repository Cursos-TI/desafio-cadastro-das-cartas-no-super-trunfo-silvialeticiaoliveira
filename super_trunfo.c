#include <stdio.h>

int main() {
    // DECLARAÇÃO DE VARIÁVEIS:
    char estadoCARTA1[20], estadoCARTA2[20];
    char codigoDaCarta1[20], codigoDaCarta2[20];
    char nomeDaCidade1[20], nomeDaCidade2[20];
    int populacaoDaCidade1, populacaoDaCidade2, pontosTuristicosCidade1, pontosTuristicosCidade2;
    float areaDaCidade1, areaDaCidade2, PIBdaCidade1, PIBdaCidade2, densidadePopulacional1, densidadePopulacional2;
    float PIB_percapita1, PIB_percapita2;

    // APRESENTAÇÃO:
    printf("Bem-vindo(a) ao jogo Super Trunfo - Países! Aqui jogadores competem usando cartas com diferentes atributos MAS para isso, vamos começar criando elas primeiro.\n");
    printf("Vamos começar criando DUAS CARTAS iniciais:\n\n");

    
    // Armazenando os dados da Carta 1 utilizando printf para exibir para o usuário:

    // PROCESSO:

    /*utilizei 'sizeof' no código para para garantir que
    o texto digitado pelo usuário não ultrapasse o tamanho máximo permitido da variável, 
    evitando estouro de memória: */
    printf("Carta 1:\n");
    printf("Estado (digite um nome de estado): \n");
    fgets(estadoCARTA1, sizeof(estadoCARTA1), stdin);

    printf("Código (crie um código, exemplo: A01...A04): \n");
    fgets(codigoDaCarta1, sizeof(codigoDaCarta1), stdin);

    printf("Nome da Cidade (Digite um nome de cidade): \n");
    fgets(nomeDaCidade1, sizeof(nomeDaCidade1), stdin);

    printf("População (digite o número da população): \n");
    scanf("%d", &populacaoDaCidade1);

    printf("Área (em km²): \n");
    scanf("%f", &areaDaCidade1);

    printf("PIB (Produto Interno Bruto da cidade): \n");
    scanf("%f", &PIBdaCidade1);

    printf("Pontos turisticos: \n");
    scanf("%d", &pontosTuristicosCidade1);


    // ATUALIZAÇÃO DA VARIAVEL PARA REALIZAR O CALCULO:
    // CONVERSÃO DE TIPOS DE DADOS PARA REALIZAR A DIVISÃO:
    // A DENSIDADE POPULACIONAL ESTA DANDO RESULTADOS APROXIMADOS:
    // E SE O PIB PER CAPITA DER O VALOR 0.00, É POR QUE SÓ EXIBE DUAS CASAS DECIMAIS APÓS A VÍRGULA.
    densidadePopulacional1 = (float) populacaoDaCidade1 / areaDaCidade1;
    PIB_percapita1 = PIBdaCidade1 / populacaoDaCidade1;
    populacaoDaCidade1 = (int) populacaoDaCidade1;


    getchar(); // Utilizei ele pra limpar o buffer, para não acontecer o estouro de memória, já que eu estou usando fgets.

    // Armazenando os dados da Carta 2 utilizando printf para exibir para o usuário, como na primeira carta:
    printf("\n\nCarta 1 foi criada com sucesso! Agora vamos criar a segunda carta: \n\n");

    printf("Carta 2: \n");
    printf("Estado (digite um nome de estado): \n");
    fgets(estadoCARTA2, sizeof(estadoCARTA2), stdin);

    printf("Código (crie um código, exemplo: A01...A04): \n");
    fgets(codigoDaCarta2, sizeof(codigoDaCarta2), stdin);

    printf("Nome da Cidade (Digite um nome de cidade): \n");
    fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);

    printf("População (digite o número da população): \n");
    scanf("%d", &populacaoDaCidade2);

    printf("Área (em km²): \n");
    scanf("%f", &areaDaCidade2);

    printf("PIB (Produto Interno Bruto da cidade): \n");
    scanf("%f", &PIBdaCidade2);

    printf("Pontos turisticos: \n");
    scanf("%d", &pontosTuristicosCidade2);

    // CONVERSÃO DE TIPOS DE DADOS PARA REALIZAR A DIVISÃO:
    densidadePopulacional2 = (float) populacaoDaCidade2 / areaDaCidade2;
    PIB_percapita2 = PIBdaCidade2 / populacaoDaCidade2;
    populacaoDaCidade2 = (int) populacaoDaCidade2;


    printf("\n\nCarta 2 foi criada com sucesso! Aqui está os dados das cartas que foram criadas: \n\n");
    // MOSTRAR AO USUARIO QUE FOI GERADO O CALCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA:
    printf("Foi adicionado novos dados nas suas cartas: densidade populacional e PIB per capita!\n\n");
    printf("Carta 1: \n");

    // ENCERRAMENTO:
    // Exibição dos dados armazenados, juntamente com a densidade populacional e pib per capita:
    // Exibir os dados em somente dois printf para tornar o código bem estruturado:
    printf("Estado: %sCódigo: %sNome da Cidade: %sPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n" ,estadoCARTA1, codigoDaCarta1, nomeDaCidade1, populacaoDaCidade1, areaDaCidade1, PIBdaCidade1, pontosTuristicosCidade1, densidadePopulacional1, PIB_percapita1);
    printf("\n\nCarta 2: \n");
    printf("Estado: %sCódigo: %sNome da Cidade: %sPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n" ,estadoCARTA2, codigoDaCarta2, nomeDaCidade2, populacaoDaCidade2, areaDaCidade2, PIBdaCidade2, pontosTuristicosCidade2, densidadePopulacional2, PIB_percapita2);
    
    return 0;

}
