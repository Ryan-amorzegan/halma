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
        printf("%c\n",186);njk
        for (int j = 0; j <= 2* zel; j++)
        {
            printf("%c",61);
        }
        printf("\n");
        

    }   
}
int fasele(int x,int y,int i,int j){        /* x o y makane avalie i o j makane sanavie*/
    if ((i - x)*(i - x) + (j - y)*(j -  y) <= 2){
        return 0;
    }
    else
    {
        return 1;
    }
    
}
void posible(int board[50][50],int x,int y){ /* int a age 1 bashe makan haye momken ro neshon mide age 0 bashe board ro reset mikone*/
    x = x - 1;
    y = y - 1;
    for (int i = -1; i <=1; i++)
        {
        for (int j = -1; j <= 1; j++)
        {
            if (x + i >= 0 && y + j >= 0)
            {
                if (board[x+ i][y + j] == 32)
                {
                    board[x+ i][y + j] = 42;
                }   
            }
                
        }    
    }

}
int reset(int board[50][50], int zel){
     for (int i = 0; i < zel; i++)
        {
            for (int j = 0; j < zel; j++)
            {
                if (board[i][j] == 42)
                {
                    board[i][j] = 32;
                }
                
            }
            
        }
}
jump(int board[][50],int i,int j,int zel){
    i--;
    j--;
    for (int h = j + 1; h < zel; h++)
    {
        if (board[i][h] == 220)
        {
            int dy = h - j;
            for (int p = 1; p < dy; p++)
            {
                if (board[i][h + dy])
                {
                    break;
                }
            }
            if (board[i][j + 2*dy] == 32)
            {
                board[i][j + 2*dy] = 42;
            }
            break;
            
            
        }
        
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
    board[1][0] = 220;
    board[1][1] = 220;
    board[1][3] = 220;
    while (1)
    {
        print_board(board, zel);
		int i, j,x,y;
		printf("\nyour move \n");
		scanf("%d %d", &i, &j);
        posible(board,i,j);
        jump(board,i,j,zel);
        print_board(board, zel);
        printf("to which position??\n");
		scanf("%d %d", &x, &y);
		board[x - 1][y - 1] = 220;
		board[i - 1][j - 1] = 32;
        reset(board,zel);
    }
    
    return 0;
}
