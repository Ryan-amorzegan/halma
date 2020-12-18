#include "stdio.h"
void print_board(int game[50][50], int zel){
     for (int j = 0; j <= 2* zel; j++)
        {
            printf("%c",61);
        }
    printf("\n");
    for (int i = 0; i < zel; i++)
    {
        for (int j = 0; j < zel; j++)
        {
            printf("%c%c",186,game[i][j]);
        }
        printf("%c\n",186);
        for (int j = 0; j <= 2* zel; j++)
        {
            printf("%c",61);
        }
        printf("\n");
        

    }   
}
int main(){
    int board[50][50];
    int zel;
    scanf("%d",&zel);
    for (int i = 0; i < zel; i++)
    {
        for (int j = 0; j < zel; j++)
        {
            board[i][j] = 32;
        }
        
    }
    board[0][0] = 220;
    board[0][1] = 220;
    board[0][2] = 220;
    board[0][3] = 220;
    board[2][0] = 220;
    board[3][1] = 220;
    board[2][2] = 220;
    board[3][0] = 220;
    board[2][1] = 220;
    board[1][2] = 220;
    board[1][2] = 220;
    board[1][0] = 220;
    board[1][1] = 220;
    board[1][3] = 220;
    print_board(board,zel);
    while (1)
    {
        int i,j,x,y;
        scanf("%d %d",&i,&j);
        board[i-1][j-1] = 32;
        scanf("%d %d",&x,&j);
        board[x - 1][y - 1] = 220;
        printf("%c",board[x - 1][y - 1]);
        print_board(board,zel);
    }
    
    return 0;
}
