#include <stdio.h>

int main(void){
	int left = 0, right = 26, mid, ind = -1;
	char ch;
	printf("Ââåäèòå èñêîìûé ñèìâîë");
	scanf("%c", &ch);
	char ar[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	while(left <=right){
		mid = (right + left)/2;
		if(ch == ar[mid]){
			ind = mid+1;
			break;
		}
		if(ch < ar[mid]) right = mid - 1;
		else left = mid + 1 ;
	}
	if (ind == -1) printf("Òàêîãî ñèìâîëà íåò \n");
	else printf("Èñêîìûé ñèìâîë íàõîäèòñÿ â %i ÿ÷åéêå \n", ind);
}
