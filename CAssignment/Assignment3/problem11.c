#include <stdio.h>
#include <conio.h>

int main(){
    int Ben,Eng,math,phy,che;
    printf("Enter the Student's marks :\nBengali \nEnglish \nMathematics \nPhysics \nChemistry\n");
    scanf("%d %d %d %d %d",&Ben,&Eng,&math,&phy,&che);
    if (Ben>=33 &&Eng>=33&&math>=33&&phy>=33&&che>=33)
        printf("Candidate Passed the examination\n");
    else
        printf("Candidate Failed the examination\n");
    
    return 0;
}