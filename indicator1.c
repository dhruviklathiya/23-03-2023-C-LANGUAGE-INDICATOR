#include <stdio.h>
void swapping(int *a,int *b){
	int s;
	s =*a;
	*a =*b;
	*b =s;
	printf("After swap value of A : %d\n",*a);
	printf("After swap value of B : %d\n",*b);
}
int main(){
	int x,y;
	printf("Enter Value of A :");
	scanf("%d",&x);
	printf("Enter Value of B:");
	scanf("%d",&y);
	swapping(&x,&y);
	return 0;
}