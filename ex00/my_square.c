#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char my_square(int row, int column) {
    int i, j;
    for(i = 1; i <= row; i++ ){
        for(j = 1; j <= column; j++) {
            if(i == 1 && j == 1 || i == row && j == column || i == 1 && j == column || j == 1 && i == row) {
              printf("o");  
            } else if(i == 1 || i == row) {
                printf("-");
            } else if(j == 1 || i == row || i == 1 || j == column) {
                printf("|");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}





int main(int ac, char **av) {
    if(ac != 3) {
        return 0;
    }
    my_square(atoi(av[1]), atoi(av[2]));
}