#include <stdio.h>
int main() {
   int i, j, fat;
   for(i = 1; i <= 10; i++) {
      if(i % 2 != 0) {  // verifica se i é ímpar
         fat = 1;
         for(j = i; j >= 1; j--) {
            fat *= j;
         }
         printf("Fatorial de %d = %d\n", i, fat);
      }
   }
   return 0;
}
