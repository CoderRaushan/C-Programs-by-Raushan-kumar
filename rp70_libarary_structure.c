#include <stdio.h>
struct library
{
    char title[50];
    char author_name[50];
    float book_id;
    int book_price;
};
int main()
{
    struct library b;
    printf("Enter book title:\n");
    scanf("%s", b.title);
    printf("Enter author Name:\n");
    scanf("%s", b.author_name);
    printf("Enter book id:\n");
    scanf("%f", &b.book_id);
    printf("Enter book price:\n");
    scanf("%d", &b.book_price);
    printf("The information of book shown below:\n");
    printf("book title: %s\n", b.title);
    printf("author name: %s\n", b.author_name);
    printf("book id:%f\n", b.book_id);
    printf("book price: %d\n", b.book_price);
    return 0;
}
                                               