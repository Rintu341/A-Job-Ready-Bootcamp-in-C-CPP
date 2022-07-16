#include <stdio.h>
#include <conio.h>

int main(){
    float C_P,S_P,calculate;
    printf("Enter Cost Price & Sell Price \n");  
    scanf("%f %f",&C_P,&S_P);
    if (S_P>=C_P)
    {
        calculate=(S_P-C_P)/C_P*100;
        printf("Profit %% = %.2f %%",calculate);
    }else
    {
        calculate=(C_P-S_P)/C_P*100;
        printf("Loss %% = %.2f %%",calculate); 
    }        
    
    return 0;
}