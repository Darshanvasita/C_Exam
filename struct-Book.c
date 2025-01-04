#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book books[n];


    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);  
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\nDetails of all books:\n");
    for (int i = 0; i < n; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}
