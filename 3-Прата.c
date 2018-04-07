#include <stdio.h>
#include <stdlib.h>

int main(void){
  int c=1, s1= 0, s2= 0,
  e= 0, os= 0;

  while(c!= 0){
  scanf("%i", &c);
  if(c%2== 0 && c!= 0) {
  e++;
  s1+= c;	
  }
  if(c%2!= 0 ) {
  os++;
  s2+= c;	
  }
  }
  printf("кол-во чётных: %i\n  ср. знач. чётных: %i \n", e, s1/e);
  printf("кол-во нечётных: %i\n ср. знач. нечётных: %i \n", os, s2/os);
}