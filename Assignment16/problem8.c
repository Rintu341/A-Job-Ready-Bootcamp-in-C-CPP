#include <stdio.h>
#include <conio.h>
const int column;
const int Row;
void input(int a[][column]);
void Upper_triangular(int a[][column]);
int main(){
    printf("Enter a length of Row and column: ");
    scanf("%d %d",&Row,&column);
    int a[Row][column];
    input(a);
    Upper_triangular(a);
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
void Upper_triangular(int a[][column]){
    printf("Upper Triangular \n");
    for(int i=0;i<Row;i++){
        for(int j=0;j<column;j++){
            if(i>j)
                printf("0 ");
            else
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}