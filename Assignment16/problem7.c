// Write a program in C to print or display the lower triangular of a given matrix
#include <stdio.h>
#include <conio.h>
const int column;
const int Row;
void input(int a[][column]);
void lower_triangular(int a[][column]);
int main(){
    printf("Enter a length of Row and column: ");
    scanf("%d %d",&Row,&column);
    int a[Row][column];
    input(a);
    lower_triangular(a);
    return 0;
}
void input(int a[][column]){
    printf("Enter matrix values(Square): \n");
    for(int i=0;i<Row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void lower_triangular(int a[][column]){
    printf("Lower Triangular \n");
    for(int i=0;i<Row;i++){
        for(int j=0;j<column;j++){
            if(i<j)
                printf("0 ");
            else
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}