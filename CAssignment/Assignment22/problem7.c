#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void memoryLeak(){
    int *p;
    p=(int*)malloc(sizeof(int));// memoryLeak this memory presennt  until program will end. we do not free this memory
}
int main(){
    memoryLeak();
    return 0;
}