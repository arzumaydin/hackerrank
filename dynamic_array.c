#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
    //# of books in one shelf
    int* total_number_of_books = (int*)malloc(sizeof(int) * total_number_of_shelves);
    //# of pages in a shelf
    int** total_number_of_pages = (int**)malloc(sizeof(int*) * total_number_of_shelves);
    //initialize arrays
    for(int i = 0; i < total_number_of_shelves; i++)
    {
        total_number_of_books[i] = 0;
        total_number_of_pages[i] = (int*)malloc(sizeof(int));
    }
    
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */     
            int x, y;
            scanf("%d %d", &x, &y);
            total_number_of_books[x] += 1; //book number is incremented in xth shelf
            total_number_of_pages[x] = realloc(total_number_of_pages[x], sizeof(int) * total_number_of_books[x]); //add a memory block of new book's size
            total_number_of_pages[x][total_number_of_books[x] - 1] = y;

        } else if (type_of_query == 2) {