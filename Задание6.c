#include <stdio.h> 

void bn(unsigned long); 

int main(void){ 
unsigned long s; 
scanf("%lu", &s);
printf("Двоичный код: "); 
bn(s); 
putchar('\n'); 
return 0; 
} 

void bn(unsigned long s){
int g; 
g=s%2; 
if (s>=2) 
bn(s/2); 
putchar(g==0 ? '0' : '1'); 
} 