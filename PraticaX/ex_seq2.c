/*I=1 J=7 
  I=1 J=6 I=5 J=11
  I=1 J=5 I=5 J=1-
  I=3 J=9 I=5 J=9
  I=3 J=8 I=7 J=13
  I=3 J=7 I=7 J=12
..  .     I=7 J=11
          I=9 J=15 
          I=9 J=14
          I=9 J=13*/

#include <stdio.h>

int main(void){

    int i, j, k;
    j = 7;
    i = 1;
    for (i = 1 ; i <= 9; i+=2){
        for(k=0 ; k < 3 ; k ++){
            printf("I=%d J=%d\n", i, j);
            j--;
        }
    j += 5;
    }

    return 0;
}