#include "stdio.h"
void print_board( int zel){
    for (int i = 0; i < zel; i++)
    {
        for (int j = 0; j < zel; j++)
        {
            printf("%c ",186);
        }
        printf("%c\n",186);
        for (int j = 0; j <= 2* zel; j++)
        {
            printf("%c",61);
        }
        printf("\n");
        

    }
    return 0;    
}
int main(){
    print_board(10);
    return 0;
}
