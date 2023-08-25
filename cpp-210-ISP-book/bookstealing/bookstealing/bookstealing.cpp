#include <cstdio>

struct Book {
    char name[256];
    int year;
    int pages;
    bool hardcover;
};

Book stealHalfTheBook(Book book){
    book.pages /= 2;
    printf("Pages of Book after stealing:%d\n", book.pages); // 100
    return book;
}

int main(){
    Book book;
    book.pages = 200;
    printf("Pages of main-Book before stealing:%d\n", book.pages); // 200
    book = stealHalfTheBook(book); // clone
    printf("Pages of main-Book after stealing:%d\n", book.pages); // 200
}