//Program to calculate the fine for overdue
/*
Author:Cecilia Mwikali
Reg No:CT101/G/25030/24
Date:1/10/2024
*/

#include<stdio.h>

int main(){
	int bookid,duedate,returndate;
	int daysdue;
	float fineamount,finerate;
	
	//Take values from user
	printf("Enter the bookid: ");
	scanf("%d",&bookid);
	
	printf("Enter the duedate: ");
	scanf("%d",&duedate);
	
	printf("Enter returndate: ");
	scanf("%d",returndate);
	//Calculate days due using the formula below
	daysdue=returndate-duedate;
	
	if(daysdue <=7){
		printf("fineamount=ksh20");
	}
	else if(daysdue<=14){
		printf("fineamount=ksh50");
	}
	else if(daysdue>=15){
		printf("fineamount=ksh100");
	}
	
	fineamount=daysdue*finerate;
	
	return 0;
}