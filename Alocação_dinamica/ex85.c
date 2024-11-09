#include <stdio.h>
#include <stdlib.h>


void free_vector(int *v, int n)
{
  free(v);
}
int main()
{
  int n, *v;

  printf("The lenght of the vector: ");
  scanf("%d", &n);

  v = (int*) malloc(n * sizeof(int));
  printf("The vector before the liberation is: %p \n", v);
  free_vector(v, n);
  printf("The vector after the liberation is: %p", v);
  return 0;
}