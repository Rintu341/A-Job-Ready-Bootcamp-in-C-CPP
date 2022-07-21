#include <stdio.h>
#include <conio.h>

int main(){
    int a,b,c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
        printf("Triangle is vaild");
    else    
        printf("Triangle is Not vaild");

    return 0;
}