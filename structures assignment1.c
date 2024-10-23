//c program to define structures
#include<stdio.h>
#include <string.h>

struct book{
  char title[30];
  char author[30];
  char ISBN[30];
  int publicationyear;
  float price;
};

int main(){
   struct book mybook;
   
  	strcpy(mybook.title, "introduction to c program");
  	strcpy(mybook.author, "John Smith");
  	strcpy(mybook.ISBN, "9780131103627");
  	mybook.publicationyear= 2022;
  	mybook.price= 49.00;
  	
  	printf("Title: %s\n",mybook.title);
  	printf("Author: %s\n",mybook.author);
  	printf("Publication year: %d\n",mybook.publicationyear);
  	printf("ISBN: %s\n",mybook.ISBN);
  	printf("Price: %.2f\n",mybook.price);
  	
  	return 0;
  }
