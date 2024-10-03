//Program to calculate simple interest
/*
Author:Cecilia Mwikali
Reg No:CT101/G/25030/24
Date:30/09/2024
*/

#include<stdio.h>

int main(){
	float principal,rate,time;
	float simpleinterest;
	
	printf("Enter principal amount: ");
	scanf("%f",&principal);
	
	printf("Enter rate(in %: ");
	scanf("%f",&rate);
	
	printf("Enter time(in years): ");
	scanf("%f",&time);
	
	simpleinterest=(principal*time*rate)/100;
	
	printf("The simple interest is: .2f%",simpleinterest);
	
	return 0;
	
}