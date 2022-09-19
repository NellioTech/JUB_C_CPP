#include <iostream>
int main()
{
    class Book
    {
    private:
        char *title;
        int pages;

    public:
        Book();
        Book(const char  *t, int p);
        Book(const Book &b){
            title = new char;
            *title = *b.title;
            pages = b.pages;
        }
    };
}
// if it is not defined
// the complier will do title = b.title
// which will cause two char to have the
// same memory address