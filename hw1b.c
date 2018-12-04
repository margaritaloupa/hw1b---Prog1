#include<stdio.h>

int main(int argc, char *argv []) {
    
    int pillars, row=1, space, col, i, j, k, pillar_row, l, m, u, a, b, c, h, z=0; 
    const int THIRD_ROW = 8, CHARACTERS_OF_THE_ROOF = 8;
    
    do{
        printf("\nEnter the number of pillars you want. Make sure it's an even number greater than 2: \n");
        scanf("%d", &pillars);
    }
    while ((pillars < 2) || (pillars % 2 != 0));
    
    
    for(h= 1, a = 1, b = (pillars / 2) - 1; a <= pillars / 2; a++, b--,z+=16) {
        
        for(space = 1; space <= CHARACTERS_OF_THE_ROOF * b; space++) { 
            printf(" ");
        }
        printf("__..--''");
        if(h == 1)
            printf("''--..__");
        else {
                for(c = 1; c<=z ; c++) {  
                    printf(" ");
                }
                printf("''--..__");
            }
        h++;
        printf("\n"); // skeph
    }
    

    for(u = 1; u <= 8 * pillars; u++)
        printf("="); // katw apo thn skeph
    printf("\n");
    
    for(m = 1; m <= 4 * pillars; m++)
        printf("[]"); // panw apo ta kionokana
    printf("\n");
    
    for(l = 1; l <= pillars; l++) //Kionokrana
        printf(" @.==.@ ");
    printf("\n");
    
    for(pillar_row = 1; pillar_row <= 7; pillar_row++){ //prwtes 7 kolones
        for(space = 1; space <= 2; space++)
            printf(" ");
        for(j = 1; j <= pillars; j++){
            printf("|''|");
            for(k = 1; k <= 4; k++)
                printf(" ");
        }
        printf("\n");
    }
    for(space = 1; space <=2; space++) //prwth seira
        printf(" ");
    
    for(i = 1; i <= pillars; i++){ 
        printf("|''|");
        if(i == pillars)
            break;
        for(j = 0; j < 4; j++)
        printf("_");
        }
        
    printf("\n");
    
    for(row = 1; row <= 3; row++) { //skalia
        for(space = 1; space <= 3 - row; space++)
            printf(" ");
        for(col = 1; col <= ((2 * row) + 2 ) + ((pillars - 1) * THIRD_ROW); col++)
            printf("=");
         
        printf("\n");
    }
    return(0);
}
           
    

  
