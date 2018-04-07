#include <stdio.h> 

int main(void){ 
  float v1, v2, v;
  char oper;
  
  printf("Выберите операцию: ");
  scanf("%c", &oper);
  
  if (oper== '+'){
  printf("Введите числа\n");
  scanf("%f %f", &v1, &v2);
  printf("%.2f\n",v1+v2);
  }
  if (oper== '-'){
  printf("Введите числа\n");
  scanf("%f %f", &v1, &v2);
  printf("%.2f\n",v1-v2);
  }
  if (oper== '*'){
  printf("Введите числа\n");
  scanf("%f %f", &v1, &v2);
  printf("%.2f\n",v1*v2);
  }
  if (oper== '/'){
  printf("Введите числа\n");
  scanf("%f %f", &v1, &v2);
  printf("%.2f\n",v1/v2);
  }
  if (oper== 'S'){
  printf("Введите числo\n");
  scanf("%f", &v1);
  v=v1;
  printf("%f",v);
  }
  if (oper== 'E'){
  printf("Exit");
  }
return 0;
} 