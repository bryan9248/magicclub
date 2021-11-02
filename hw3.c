#include<stdio.h>

int main(){
    int s[4][4];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &s[i][j]);
        }
    }
     for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%2d",s[i][j]);
            if(j != 3){
                printf(" ");
            }

        }
        printf("\n");
    }
    printf("\n");
    int row[4]={0};
    int column[4]={0};
    int diagonal[2]={s[0][0]+s[1][1]+s[2][2]+s[3][3],s[3][0]+s[2][1]+s[1][2]+s[0][3]};
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            row[i]+=s[i][j];

        }

    }
    for(j=0;j<4;j++){
        for(i=0;i<4;i++){
            column[j]+=s[i][j];
        }

    }


    printf("Row sums: %d %d %d %d\n", row[0],row[1],row[2],row[3]);
    printf("Column sums: %d %d %d %d\n", column[0],column[1],column[2],column[3]);
    printf("Diagonal sums: %d %d\n", diagonal[0],diagonal[1]);


}
