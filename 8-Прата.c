#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int z= 0, t;
  float cash = 0;
  printf("s");
  printf("Введите число, соответствующее желаемой тарифной ставке или действию:\n 1) $8.75/÷       2)$9,33/÷\n 3) $10.00/÷      4)$11.20/÷\n 5)Выход \n");
  scanf("%i", &t);
   switch(t){
   case'1':
   scanf("%i", &z);
	cash= z * 8.75;
	z= 0;
	break;
	case'2':
	scanf("%i", &z);
	cash= z * 9.33;
	z= 0;
	break;
 	case'3' :
	scanf("%i", &z);
	cash = z * 10.00;
	z = 0;
	break;
	case'4':
	scanf("%i", &z);
	cash= z * 11.20;
	z= 0;
 	break;
	case'5' :
	break;
	}
	return 0;
}