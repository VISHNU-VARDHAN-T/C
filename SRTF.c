#include<stdio.h>
#include<limits.h>
int main(){
int n,i,time=0,completed=0,shortest;
int arrival[20],burst[20],waiting[20],tat[20],remaining[20];
int min_remaining,finish_time;
int total_waiting=0,total_tat=0;
printf("Enter the number of processes:");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\nProcess-%d\n",i+1);
printf("Arrival Time:");
scanf("%d",&arrival[i]);
printf("Burst Time:");
scanf("%d",&burst[i]);
remaining[i]=burst[i];
}
printf("\nProcess\tArriva\tBurst\tRemaining\n");
while(completed!=n){
min_remaining=INT_MAX;
shortest=-1;
for(i=0;i<n;i++){
if(arrival[i]<=time&&remaining[i]>0&&remaining[i]<min_remaining){
min_remaining=remaining[i];
shortest=i;
}}
if(shortest==-1){
time++;
 continue;
}
remaining[shortest]--;
time++;
if(remaining[shortest]==0){
completed++;
finish_time=time;
tat[shortest]=finish_time-arrival[shortest];
waiting[shortest]=tat[shortest]-burst[shortest];
total_waiting+=waiting[shortest];
total_tat+=tat[shortest];
printf("%d\t%d\t%d\t%d\t%d",shortest+1,arrival[shortest],burst[shortest],waiting[shortest],tat[shortest]);}}
printf("\n Average Waiting Time =%.2f",(float)total_waiting/n);
printf("\nAverage Turnaround Time=%.2f\n",(float)total_tat/n);
return 0;
}
