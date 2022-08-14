// Write a program in C to find the sum of rows and columns of a Matrix
#include <stdio.h>
#include <conio.h>
const  int Row;
const int column;
void input(int a[][column]);
void display(int b[][column]);
void addRowcolumn(int a[][column],int b[][column]);
int main(){
    printf("Enter a length of Row and column: ");
    scanf("%d %d",&Row,&column);
    int a[Row][column];
    int b[2][column];
    input(a);
    addRowcolumn(a,b);
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
void display(int b[][column]){
    printf("Tr : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<column;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}
void addRowcolumn(int a[][column],int b[][column]){
    int sum1,sum2,k;
    for(int i=0;i<Row;i++){
        sum1=0,sum2=0;
        for(int j=0;j<column;j++){
            sum1=sum1+a[j][i];
            sum2=sum2+a[i][j];
        }
        k=0;
        b[k][i]=sum1;
        k++;
        b[k][i]=sum2;
    }
}