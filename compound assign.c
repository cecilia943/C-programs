//Program to calculate coumpound interest
/*
Author:Cecilia Mwikali
Reg No:CT101/G/25030/24
*/
#include<stdio.h>
#include<math.h>

int main(){
	float principal, amount,rate,time,period;
	int number;
	
	printf("Enter principal amount: ");
	scanf("%f",&principal);
	
	printf("Enter rate(in %): ");
	scanf("%f",&rate);
	
	printf("Enter time(in years): ");
	scanf("%f",&time);
	
	printf("Ënter the number of times compounding is done");
	scanf("%d",&number);
	
	period=number*time;
	
	printf("period is: %f",&period);
	
	amount=principal*pow((1+rate/number),number* time);
	printf("Amount is: %.2f",&amount);
	
	return 0;
	
}
	