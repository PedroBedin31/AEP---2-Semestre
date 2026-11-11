#include <stdio.h>

typedef struct { //Gerenciamento dos dados

    int codigo;
    char escola[100];
    char tema[100];
    int participantesPrevistos;
    int participantesReais;
    int status; // permitir que a ação seja atualizada

} Acao;

void cadastrarAcao(Acao acoes[], int *totalAcoes) {

    if (*totalAcoes >= 100) { //Limitar ações a apenas 100
    printf("Limite de acoes atingido!\n");
    return;
}

    printf("\n===== CADASTRAR ACAO =====\n"); 

    printf("Digite o codigo: ");
    scanf("%d", &acoes[*totalAcoes].codigo);

    printf("Digite a quantidade de participantes previstos: ");
    scanf("%d", &acoes[*totalAcoes].participantesPrevistos);

    getchar(); // Limpa o Enter deixado pelo scanf

    printf("Digite o nome da escola: ");
    fgets(acoes[*totalAcoes].escola, 100, stdin); // Função fgets para ler a string com espaços

    printf("Digite o tema da acao: ");
    fgets(acoes[*totalAcoes].tema, 100, stdin); //stdin: Entrada padrão, para ler a string com espaços

    acoes[*totalAcoes].status = 1; // Mostrar o status e participantes reais da ação
    acoes[*totalAcoes].participantesReais = 0; 

    (*totalAcoes)++;

    printf("\nAcao cadastrada com sucesso!\n");
}

void listarAcoes(Acao acoes[], int totalAcoes) {

    printf("\n===== LISTA DE ACOES =====\n");

    if (totalAcoes == 0) {
        printf("Nenhuma acao cadastrada.\n");
        return;
    }

    for (int i = 0; i < totalAcoes; i++) { // Mostrar todas as ações cadastradas, com o seu respectivo numero e resultado

        printf("\n--- ACAO %d ---\n", i + 1);

        printf("Codigo: %d\n", acoes[i].codigo);

        printf("Escola: %s", acoes[i].escola);

        printf("Tema: %s", acoes[i].tema);

        printf("Participantes previstos: %d\n",acoes[i].participantesPrevistos);

        printf("Participantes reais: %d\n",
       acoes[i].participantesReais);

        printf("Status: ");

        if (acoes[i].status == 1) {
            printf("Planejada\n");
        }
        else if (acoes[i].status == 2) {
            printf("Concluida\n");
        }
        else if (acoes[i].status == 3) {
            printf("Cancelada\n");
        }

        
    }
}

void buscarAcao(Acao acoes[], int totalAcoes) {

    int codigoBusca;
    int encontrou = 0;

    printf("\n===== BUSCAR ACAO =====\n");

    printf("Digite o codigo da acao: ");
    scanf("%d", &codigoBusca);

    for (int i = 0; i < totalAcoes; i++) {

        if (acoes[i].codigo == codigoBusca) { // Comparando o código digitado com os códigos cadastrados, caso seja igual, mostra os dados da ação

            printf("\nAcao encontrada!\n");

            printf("Codigo: %d\n", acoes[i].codigo);
            printf("Escola: %s", acoes[i].escola);
            printf("Tema: %s", acoes[i].tema);
            printf("Participantes previstos: %d\n",
                   acoes[i].participantesPrevistos);

            encontrou = 1; // Se der encontrar a ação, volta ao menu principal 
            break;
        }
    }

    if (encontrou == 0) { 
        printf("\nAcao nao encontrada.\n");
    }
}

void atualizarStatus(Acao acoes[], int totalAcoes) {

    int codigoBusca;
    int novoStatus;
    int encontrou = 0;

    printf("\n===== ATUALIZAR STATUS =====\n");

    printf("Digite o codigo da acao: ");
    scanf("%d", &codigoBusca);

    for (int i = 0; i < totalAcoes; i++) {

        if (acoes[i].codigo == codigoBusca) {

            encontrou = 1; //Se encontrou e atualizou o status, termina a função e volta ao menu principal

            printf("\nEscolha o novo status:\n");
            printf("1 - Planejada\n");
            printf("2 - Concluida\n");
            printf("3 - Cancelada\n");

            printf("Opcao: ");
            scanf("%d", &novoStatus);

            if (novoStatus >= 1 && novoStatus <= 3) {

                acoes[i].status = novoStatus;
                
                if (novoStatus == 2) {
                    do {
                        printf("Quantos participantes compareceram?");
                        scanf("%d", &acoes[i].participantesReais);

                        if (acoes[i].participantesReais < 0) {
                            printf("Quantidade invalida! Digite um valor positivo.\n");
                        }
                    } while (acoes[i].participantesReais < 0);
                }

                printf("\nStatus atualizado com sucesso!\n"); // Atualiza o cadastro da ação com o novo status e volta ao menu principal

            } else {
                printf("\nStatus invalido!\n");
            }

            break;
        }
    }

    if (encontrou == 0) {
        printf("\nAcao nao encontrada.\n");
    }
}

void gerarRelatorio(Acao acoes[], int totalAcoes) {

    int planejadas = 0;
    int concluidas = 0;
    int canceladas = 0;

    int totalPrevistos = 0;
    int totalReais = 0;

    for (int i = 0; i < totalAcoes; i++) { //Enumerar a quantidade de ações planejadas, concluídas e canceladas

        if (acoes[i].status == 1) {
            planejadas++;
        }
        else if (acoes[i].status == 2) {
            concluidas++;

            totalPrevistos += acoes[i].participantesPrevistos; // Se concluida, soma o total de participantes previstos e reais
            totalReais += acoes[i].participantesReais;
        }
        else if (acoes[i].status == 3) {
            canceladas++;
        }
    }

    printf("\n===== RELATORIO GERAL =====\n");

    printf("Acoes planejadas: %d\n", planejadas);
    printf("Acoes concluidas: %d\n", concluidas);
    printf("Acoes canceladas: %d\n", canceladas);

    printf("Total de participantes reais: %d\n", totalReais);

    if (totalPrevistos > 0) { // Percentual de pessoas reais comparado a previsão

        float percentual = (float) totalReais / totalPrevistos * 100;

        printf("Percentual de participacao: %.2f%%\n", percentual);

    } else {
        printf("Nao ha participantes previstos em acoes concluidas.\n");
    }
}

int main() {
    
    Acao acoes[100];// Limite de 100 acoes cadastradas

    int totalAcoes = 0;

    printf("Total de acoes: %d\n", totalAcoes);

    printf("Codigo: %d\n", acoes[0].codigo);

    printf("Participantes previstos: %d\n",acoes[0].participantesPrevistos);

    int opcao;

    do {

        printf("\n===== PSE EM ACAO =====\n");

        printf("1 - Cadastrar acao\n");
        printf("2 - Listar acoes\n");
        printf("3 - Buscar acao\n");
        printf("4 - Atualizar status\n");
        printf("5 - Gerar resumo geral\n");
        printf("0 - Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                cadastrarAcao(acoes, &totalAcoes);
                break;

            case 2:
                listarAcoes(acoes, totalAcoes);
                break;

            case 3:
                buscarAcao(acoes, totalAcoes);
                break;

            case 4:
                atualizarStatus(acoes, totalAcoes);
                break;

            case 5:
                gerarRelatorio(acoes, totalAcoes);
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }

    } while(opcao != 0);

    return 0;
}
