#include <stdio.h>
#include <string.h>

struct book {
    char title[30];
    char author[30];
    char ISBN[30];
    int publicationyear;
    float price;
};

int main() {
    struct book myBook;

    printf("Enter mybook.title: ");
    scanf("%s\n",&myBook.title[30]);
    
    printf("Enter mybook.author: ");
    scanf("%s\n",&myBook.author[30]);
    
    printf("Enter mybook.ISBN: ");
    scanf("%s\n",&myBook.ISBN[30]);
    
    printf("Enter mybook.publication year: ");
    scanf("%d\n",&myBook.publicationyear);
    
    printf("Enter mybook.price: ");
    scanf("%.2f\n",&myBook.price);

    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publicationyear);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    return 0;
}
