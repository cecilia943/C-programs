// c program to calculate electricity bill

#include<stdio.h>

#define MAX_CUSTOMERS 100

int main(){
	int customerid[MAX_CUSTOMERS],unitsconsumed[MAX_CUSTOMERS];
	char customername[MAX_CUSTOMERS][40];
	float chargeperunit[MAX_CUSTOMERS],totalbill[MAX_CUSTOMERS],surcharge[MAX_CUSTOMERS];
	int numcustomers,i;
	
	printf("Enter the number of customers(max %d):",MAX_CUSTOMERS);
	scanf("%d",&numcustomers);
	
	//Loop through each customer to collect data
	for(i=0;i<numcustomers;i++){
		printf("\nEntering details for customer %d:\n",i+1);
		
		printf("Enter customerid: ");
		scanf("%d",&customerid[i]);
		
		printf("Enter customername:");
		scanf("%s",&customername[i]);
		
		printf("Enter unitsconsumed: ");
		scanf("%d",&unitsconsumed[i]);
		
		//Determine charge per unit based on its consumed
		if(unitsconsumed[i]<=199){
			chargeperunit[i]=1.20;
		}else if(unitsconsumed[i]<400){
			chargeperunit[i]=1.50;
		}else if(unitsconsumed[i]<=600){
			chargeperunit[i]=1.80;
		}else{
			chargeperunit[i]=2.00;
		}
		
		//Calculate total bill before surcharge
		totalbill[i]=unitsconsumed[i]*chargeperunit[i];
		
		//Apply surcharge if applicable
		 if(totalbill[i]>400){
			surcharge[i]=totalbill[i]*0.15;
	}else {
		surcharge[i]=0.0;//No surcharge
	}
}

//Output the electricity bills for all customers
printf("\nElectricity Bills:\n");
for(i=0;i<numcustomers;i++){
	printf("\nCustomerid:%d\n",customerid[i]);
	printf("UCustomername:%s\n",customername[i]);
	printf("Unitsconsumed:%d\n",unitsconsumed[i]);
	printf("Chargeperunit:%.2fKshs\n",chargeperunit[i]);
	printf("Total amount to pay:%.2fKshs\n",totalbill[i]);
}

return 0;
}