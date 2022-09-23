#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
char * getName(){
    char *p;
    char ch;
    int i=0,j=1;
    p=(char*)malloc(sizeof(char));
    // p="sujan";
    // cout<<sizeof(p)<<endl;
    // if(p==NULL)
    //     cout<<"Memory Allocation Failed"<<endl;
    // else{
        cin>>ch;
        while (ch!='\n')
        {   j++;
            p[i]=ch;
            p=(char*)realloc(p,j*sizeof(char));
            cin>>ch;
            i++;
        }
        p[i]='\0';
    // }
    return p;
}
int main(){
    char *name;
    name=getName();
    cout<<name<<endl;
    return 0;
}