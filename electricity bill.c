//Program to calculate and display electricity bill for units consumed
/*
Author:Cecilia Mwikali
Reg No:CT101/G/25030/24
*/

#include<stdio.h>

int main(){
	int customerid,unitconsumed,unit;
	char customername;
	float chargesperunit,totalbill,surchsrge;
	
	printf("Enter customerid: ");
	scanf("%d",&customerid);
	
	printf("Enter unitconsumed: ");
	scanf("%d",&unitconsumed);
	
	printf("Enter customername: ");
	scanf("%c",&customername);
	
	if(unit<=199){
		printf("chargesperunit=ksh1.20");
	}
	else if(unit=200<400){
		printf("chargesperunit=ksh1.50");
	}
	else if(unit=400<600){
		printf("chargesperunit=ksh1.80");
	}
	else if(unit>=600){
		printf("chargesperunit=ksh2.00");
	}
	
	totalbill=unit*chargesperunit;
	
	if(totalbill>400){
		printf("surcharge=15%");
	}
	
	if (totalbill,100){
		printf("minimum bill=ksh100");
	}
	
	return 0;
}
		
	
	
	
		
