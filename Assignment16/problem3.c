// Write a program in C to find the transpose of a given matrix
#include <stdio.h>
#include <conio.h>
const int Row;
const int column;
void input(int a[][column]);
void Transpose(int a[][column],int b[][Row]);
void display(int b[][Row]);
int main(){
    printf("Enter a length of Row and column: ");
    scanf("%d %d",&Row,&column);
    int a[Row][column],b[column][Row];
    input(a);
    Transpose(a,b);
    printf("\n");
    display(b);
    return 0;
}
void input(int a[][column]){
    printf("Enter matrix values: \n");
    for(int i=0;i<Row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void Transpose(int a[][column],int b[][Row]){
    for (int i = 0; i <Row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            b[j][i]=a[i][j];
        }
    }
}
void display(int b[][Row]){
    printf("Transpose : \n");
    for(int i=0;i<column;i++){
        for(int j=0;j<Row;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}