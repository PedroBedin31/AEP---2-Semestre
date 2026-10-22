#include <stdio.h>
#include <stdlib.h>

int rotina_obesidade() { // FUNÇÃO PARA MOSTRAR A ROTINA PARA O USUARIO COM OBESIDADE

    printf("--------------------------------CAFÉ DA MANHÃ----------------------------------\n"); // café da manhã 
    printf("\n OPÇÕES DE BEBIDAS: \n 1 - Café preto sem açucar \n 2 - Chá de ervas \n 3 - Leite integral ou semidesnatado");
    printf("\n OPÇÕES DE ALIMENTOS: \n 1 - Pão integral com queijo branco \n 2 - Frutas (banana, maçã, mamão) \n 3 - Iogurte natural");

    printf("\n-------------------------------------ALMOÇO--------------------------------------\n"); // almoço
    printf("\n OPÇÕES DE BEBIDAS: \n 1 - Água \n 2 - Chá gelado sem açúcar");
    printf("\n OPÇÕES DE ALIMENTOS: \n 1 - Arroz integral \n 2 - Feijão \n 3 - Frango grelhado ou peixe assado \n 4 - Salada de folhas verdes e legumes");

    printf("\n-------------------------------------LANCHE DA TARDE--------------------------------------\n"); // jantar
    printf("\n OPÇÕES DE BEBIDAS: \n 1 - Suco natural sem açúcar \n 2 - Água de coco");
    printf("\n OPÇÕES DE ALIMENTOS: \n 1 - Frutas (laranja, abacaxi, morango) \n 2 - Mix de castanhas e sementes \n 3 - Iogurte natural com granola");

    printf("\n-------------------------------------JANTAR--------------------------------------\n"); // jantar
    printf("\n OPÇÕES DE BEBIDAS: \n 1 - Água \n 2 - Refrigerante zero açúcar(Controladamente)");
    printf("\n OPÇÕES DE ALIMENTOS: \n 1 - Sopa de legumes \n 2 - Omelete com vegetais \n 3 - Salada de folhas verdes com frango grelhado");

    printf("\n OBSERVACÃO: FOCO EM REDUÇÃO DE PESO\n");

    return 0;

}

int rotina_baixopeso() { // FUNÇÃO PARA MOSTRAR A ROTINA PARA O USUARIO COM BAIXO PESO

    printf("--------------------------------CAFÉ DA MANHÃ----------------------------------\n"); // café da manhã 
    printf("\n OPÇÕES DE BEBIDAS: \n 1 - Leite integral com Achocolatado \n 2 - Suco de frutas natural");
    printf("\n OPÇÕES DE ALIMENTOS: \n 1 - Pão integral com manteiga ou geleia \n 2 - Frutas (banana, mamão, abacate) \n 3 - Iogurte natural com granola");

    printf("\n-------------------------------------ALMOÇO--------------------------------------\n"); // almoço
    printf("\n OPÇÕES DE BEBIDAS: \n 1 - Água \n 2 - Suco natural de frutas \n 3 - Refrigerante (ocasionalmente)");
    printf("\n OPÇÕES DE ALIMENTOS: \n 1 - Arroz branco \n 2 - Feijão ou lentilha \n 3 - Carne magra (frango, peixe, carne bovina) \n 4 - Salada de folhas verdes e legumes");

    printf("\n-------------------------------------LANCHE DA TARDE--------------------------------------\n"); // lanche da tarde
    printf("\n OPÇÕES DE BEBIDAS: \n 1 - Leite integral \n 2 - Suco de frutas natural");
    printf("\n OPÇÕES DE ALIMENTOS: \n 1 - Sanduíche natural com pão integral e recheio de frango desfiado \n 2 - Frutas (maçã, pera, uva) \n 4 - Açai com granola e mel");

    printf("\n-------------------------------------JANTAR--------------------------------------\n"); // jantar
    printf("\n OPÇÕES DE BEBIDAS: \n 1 - Água \n 2 - Chá de ervas \n 3 - Refrigerante (ocasionalmente)");
    printf("\n OPÇÕES DE ALIMENTOS: \n 1 - Arroz branco com bife \n 2 - Omelete com vegetais e queijo magro \n 3 - Salada de folhas verdes com frango grelhado");

    printf("\n-------------------------------------CEIA--------------------------------------\n"); // ceia
    printf("\n OPÇÕES DE BEBIDAS: \n 1 - Leite integral \n 2 - Suco de frutas natural");
    printf("\n OPÇÕES DE ALIMENTOS: \n 1 - Iogurte natural com frutas \n 2 - Mix de castanhas e sementes \n 3 - Torradas integrais com pasta de amendoim");
    
    printf("\n OBSERVACÃO: FOCO EM GANHO DE PESO\n");

}

int rotina_normal() { // FUNÇÃO PARA MOSTRAR A ROTINA PARA O USUARIO COM PESO NORMAL

    printf("--------------------------------CAFÉ DA MANHÃ----------------------------------\n"); // café da manhã 
    printf("\n OPÇÕES DE BEBIDAS: \n 1 - Café preto sem açucar \n 2 - Chá de ervas \n 3 - Leite integral ou semidesnatado");
    printf("\n OPÇÕES DE ALIMENTOS: \n 1 - Pão integral com queijo branco \n 2 - Frutas (banana, maçã, mamão) \n 3 - Iogurte natural");

    printf("\n-------------------------------------ALMOÇO--------------------------------------\n"); // almoço
    printf("\n OPÇÕES DE BEBIDAS: \n 1 - Água \n 2 - Chá gelado sem açúcar");
    printf("\n OPÇÕES DE ALIMENTOS: \n 1 - Arroz integral \n 2 - Feijão \n 3 - Frango grelhado ou peixe assado \n 4 - Salada de folhas verdes e legumes");

    printf("\n-------------------------------------LANCHE DA TARDE--------------------------------------\n"); // lanche da tarde
    printf("\n OPÇÕES DE BEBIDAS: \n 1 - Suco natural sem açúcar \n 2 - Água de coco");
    printf("\n OPÇÕES DE ALIMENTOS: \n 1 - Frutas (laranja, abacaxi, morango) \n 2 - Mix de castanhas e sementes \n 3 - Iogurte natural com granola");

    printf("\n-------------------------------------JANTAR--------------------------------------\n"); // jantar
    printf("\n OPÇÕES DE BEBIDAS: \n 1 - Água \n 2 - Refrigerante zero açúcar(Controladamente)");
    printf("\n OPÇÕES DE ALIMENTOS: \n 1 - Arroz branco com bife e alface \n 2 - Omelete com vegetais \n 3 - Salada de folhas verdes com frango grelhado");

    printf("\n OBSERVACÃO: FOCO EM MANUTENÇÃO DE PESO\n");

}

int rotina_saudavel(){ // FUNÇÃO PARA CRIAR UMA ROTINA SAUDÁVEL PARA O USUÁRIO
    
    float peso, altura, imc;
    
    printf("----------------------------------ROTINA SAUDÁVEL----------------------------------\n");
    printf("\n *Vamos começar calculando seu IMC(Índice de Massa Corporal)*");
 
    printf("\nDigite seu peso em kg(Ex: 82): ");
    scanf("%f", &peso);

    printf("\nDigite sua altura em metros(Ex: 1.83): ");
    scanf("%f", &altura);

    printf("Peso armazenado: %.2f\n", peso);
    printf("Altura armazenada: %.2f\n", altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);
    
    if (imc < 18.5) {
        printf("\n Seu IMC indica que você está abaixo do peso ideal.\n");
        rotina_baixopeso();
    } else if (imc >= 18.5 && imc < 25) {
        printf("\n Seu IMC indica que você está com peso normal.\n");
        rotina_normal();
    } else if (imc >= 25 && imc < 30) {
        printf("\n Seu IMC indica que você está com sobrepeso.\n");
        rotina_obesidade();
    } else {
        printf("\n Seu IMC indica que você está com obesidade.\n");
        rotina_obesidade();
    }
    
    return 0;
}


int main(){

    int op;

    printf("-----------------BEM VINDO AO MENU DA SEMANA DA ALIMENTAÇÃO SAUDÁVEL------------------\n"); // Menu de inicialização do sistema
    printf("\n *Esse sistema te ajudara a ter uma boa performance na semana da alimentação saudável*");
    printf("\n   *Escolha uma das opções abaixo para ter acesso a cada funcionalidade do sistema*\n");

    printf("\n 1 - Rotina Saudável(Dias da Semana)\n 2 - Calculadora de Calorias\n 3 - Atividades Físicas recomendadas\n 4 - Refugos Alimentares \n 5 - Cadrastar dados\n");
    printf("\n Digite a opção desejada: ");
    scanf("%d", &op);

    if (op == 1){
        rotina_saudavel(); 
    }
    return 0;
}
