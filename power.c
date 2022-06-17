#include <stdio.h>

int power (int n, int pot, int base) {
  
  pot = base;

  for (int aux=1; aux<n; aux++){
  
    pot = pot*base;  
    
    printf("%i\t", pot);
  
  }

  return pot;  
}

int main (){
  int n;
  int pot=0;
  int base;

  printf("insira o base e a potencia\n\n");
  // scanf("%d\t %d\t", &base, &n);
  base = 3;
  n = 4;

  if (base == 0) {
    printf("-1\n");
    return -1;
  } 

  if(n == 0){
    printf ("O valor e 1");
    return 0;
  } 

  pot += power(n, pot, base);
  printf("O valor eh %i", pot);
  
  return 0;
}