#include<stdio.h>

void checkEvenorOdd(int number){
	int even=number%2==0;
	if(number%2==0){
		printf("Number is even=%d\n",number);
	}else{
		printf("Number is odd=%d\n",number);
	}
}
int main(){
	checkEvenorOdd(9);
	return 0;
}