#include<stdio.h>
#include<string.h>
struct book
{
    int book_id;
    char b_name[50];
    char a_name[40];
    int n_pages;
    float price;
    int edition;
    char p_name[40];
}b1;
struct book b2;
void main()
{
    struct book b3;
    strcpy(b1.a_name,"Krishna");
    b1.price=400;
    b2.n_pages=350;
    scanf("%d",&b2.book_id);
    scanf("%f",&b1.price);
    printf("Name of author of the book b1 is --- %s",b1.a_name);
    printf("Price %f",b1.price);
}
