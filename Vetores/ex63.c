/*Numa certa eleição, existem 5 candidatos identificados pelos valores 1, 2, . . . , 5. Uma votação
pode ser representada como um vetor em que cada posição indica um eleitor e o conteúdo dessa
posição seu voto. Por exemplo, a sequência (1, 2, 1, 2, 3, 5) indica a existência de seis eleitores,
sendo que os candidatos 1 e 2 obtiveram dois votos e os candidatos 3 e 5 obtiveram um voto
cada. Construa um programa que leia os votos de n eleitores, indique quanto cada candidato
recebeu em votos e qual candidato obteve o maior número de votos.

In a certain election, there are 5 candidates identified by the values ​​1, 2, . . . , 5. A vote
can be represented as a vector in which each position indicates a voter and the content of that
position your vote. For example, the sequence (1, 2, 1, 2, 3, 5) indicates the existence of six voters,
with candidates 1 and 2 obtaining two votes and candidates 3 and 5 obtaining one vote
each. Build a program that reads the votes of n voters, indicates how much each candidate
received in votes and which candidate received the highest number of votes.*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int n_votes(int vector[], int j)
{
    int total_of_votes = 0
    for (int i = 1; i < 5; i++)
    {
        if (vector(i) == j)
        {
            total_of_votes += 1;
        }
    }
    return total_of_votes;
}

int winner(int vector[], int n)
{
    int winner[MAX];
    for (int i = 0; i < n; i++)
    {
        if vector[i] < vector[MAX]
        {
            winner[i] = i;
        }
        i += 1
    }
}

int main()
{
    int n_voters, n, vector[n];

    printf("How many people is going to vote? \n");
    scanf("%d", &n_voters);

    printf("Enter who you will be voting to (1 - 6).\n");
    for (int i = 0; i < n_voters; i++)
    {
        scanf(" %d", &vector[i]);
    }
    
    printf("Election result: \n");
    for (int j = 1; j < 5; j++)
    {
        printf("Canditade %d: %d votes.\n", j, n_votes(vector, j));
    }
    
}