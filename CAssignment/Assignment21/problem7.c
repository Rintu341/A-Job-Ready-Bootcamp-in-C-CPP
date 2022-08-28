#include <stdio.h>
#include <conio.h>
struct TimePeriod
{
    int hour;
    int minute;
    int second;
};
void input(struct TimePeriod b1[], int size)
{
    int i ;
    char c;
    for (i = 0; i < size; i++)
    {
        printf("Enter  Hours , Minutes and Second Respectively : ");
        scanf("%d ", &b1[i].hour);
        scanf("%c",&c);
        scanf("%d", &b1[i].minute);
        scanf("%c",&c);
        scanf("%d",&b1[i].second);
        printf("\n");
    }

}
int main(){
    struct TimePeriod time[2];
    struct TimePeriod  Diff;
    input(time,2);

    if(time[0].hour>time[1].hour)
        Diff.hour=time[0].hour -time[1].hour;
    else
        Diff.hour=time[1].hour -time[0].hour;

    if(time[0].minute>time[1].minute)
        Diff.minute=time[0].minute -time[1].minute;
    else
        Diff.minute=time[1].minute -time[0].minute;

    if(time[0].second>time[1].second)
        Diff.second=time[0].second -time[1].second;
    else
        Diff.second=time[1].second -time[0].second;   

    printf("Time Differense %d:%d:%d - %d:%d:%d  =  %d:%d:%d ",time[0].hour,time[0].minute,time[0].second,time[1].hour,time[1].minute,time[1].second,Diff.hour,Diff.minute,Diff.second);
    return 0;
}
