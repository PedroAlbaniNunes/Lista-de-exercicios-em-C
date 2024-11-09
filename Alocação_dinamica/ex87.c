/*Crie uma função que receba como parâmetros dois vetores de inteiros x1 e x2 e as suas respectivas
quantidades de elementos n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor,
x3, alocado dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro n3 para retornar
o tamanho de x3. Adote como assinatura da função int* interseccao(int *x1, int *x2, int n1, int n2, int *n3)

Create a function that takes as parameters two vectors of integers x1 and x2 and their respective
quantities of elements n1 and n2. The function must return a pointer to a third vector,
x3, dynamically allocated, containing the intersection of x1 and x2 and use the n3 pointer to return
the size of x3. Adopt as signature of the function int* interseccao(int *x1, int *x2, int n1, int n2, int *n3).
*/


int* interseccao(int *x1, int *x2, int n1, int n2, int *n3)
{
    int n3 = (int*)malloc(n1 * sizeof(int));
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (x1[i] == x2[j])
            {
                
            }
        }
    }
}