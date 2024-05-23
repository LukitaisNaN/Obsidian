#include <stdio.h>
#include <stdbool.h>

bool has_free_cell(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == '-')
            {
                return true;
            }   
        }
    }
    return false;
}

bool checkFreeCell(char table[3][3], int row, int column)
{
    if (table[row-1][column-1] != '-')
    {
        return true;
    }
    
    return false;
}

int modify(int file, int column, char (*table)[3][3], char symbol)
{
    (*table)[file-1][column-1] = symbol;
    printf("%c ubicada en fila %d y columna %d!\n", symbol, file, column);
    return 0;
}

int getCoordinates(char symbol, int *row, int *column)
{
    int r = 0;
    int c = 0;
    printf("Coordenadas para posicionar '%c': (entre 1 y 3)\n", symbol);
        
    //Ask for row coordinates
    printf("Fila: ");
    scanf("%d", &r);

    //Ask for column coordinates
    printf("Columna: ");
    scanf("%d", &c);
    
    *row = r;
    *column = c; 
    return 0;
}

int printBoard(char table[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%c", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}

char checkForWinner(char table[3][3], bool *num)
{

    //Check row winner
    for (int i = 0; i < 3; i++)
    {
        if ((table[i][0] == table[i][1]) && (table[i][2] == table[i][1]) && table[i][i] != '-')
        {
            *num = false;
            return table[i][0];
        }
    }   

    //Check column winner
    for (int i = 0; i < 3; i++)
    {
        if ((table[0][i] == table[1][i]) && (table[2][i] == table[1][i]) && table[i][i] != '-')
        {
            *num = false;
            return table[0][i];
        }
            
    }

    //Check for diagonal winner
    if (
            //Avoid checking for empty tables
            table[1][1] != '-'
            &&
            (
                //Left up to right down
                (
                    (table[0][0] == table[1][1]) 
                        && 
                    (table[1][1] == table[2][2])
                ) 

                || 

                //Right up to down left
                (
                    (table[0][2] == table[1][1]) 
                        && 
                    (table[1][1] == table[2][0])
                )
            )
        )
    {
      *num = false;
      return table[1][1];  
    }
    
    
    return '(';
}

int main()
{
    //Initialize board
    char board[3][3] = 
    {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };

    //Litterally the function name
    printBoard(board);

    char p1 = 'X';
    char p2 = 'O';

    bool ended = true;
    //Verify that board has free cells and modify them (Game code)
    while (has_free_cell(board) && ended)
    {
        int r = 0;
        int c = 0;

        getCoordinates(p1, &r, &c);

        //Read function's name again
        while (checkFreeCell(board, r,c))
        {
            printf("Posicion ocupada, reintroducir valores\n");
            getCoordinates(p1, &r, &c);
        }
        
        //Add 'X' to board
        modify(r, c, &board, p1);

        checkForWinner(board, &ended);
        if (ended == false)
        {
            printBoard(board);
            break;
        }
    
        //Search for free cells to place 'O' and modify
        if (has_free_cell(board))
        {
            printBoard(board);

            getCoordinates(p2, &r, &c);

            while (checkFreeCell(board, r,c))
            {
                printf("Posicion ocupada, reintroducir valores\n");
                getCoordinates(p2, &r, &c);
            }
            
            modify(r, c, &board, p2);

            checkForWinner(board, &ended);

            if (ended == false)
            {
                printBoard(board);
                break;
            }
        }

        printBoard(board);    
    }

    char winner = checkForWinner(board, &ended);
    printf("The winner is :%c!", winner);
    return 0;
}
