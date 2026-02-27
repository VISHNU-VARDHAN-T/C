#include<stdio.h>
int main(){
int n,i,j,temp;
int bt[10],tat[10],wt[10],p[10],pr[10];
int avg_wt=0,avg_tat=0;
printf("Enter the number of processes:");
scanf("%d",&n);
printf("Enter Burst Time and Priority for each Process:");
for(i=0;i<n;i++){
printf("P%d\n",i+1);
printf("Burst Time:");
scanf("%d",&bt[i]);
printf("Priority:");
scanf("%d",&pr[i]);
p[i]=i+1;
}
for(i=0;i<n-1;i++){
for( j=i+1;j<n;j++){
temp=pr[i];
pr[i]=pr[j];
pr[j]=temp;
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
temp=p[i];
p[i]=p[j];
p[j]=temp;
}}
wt[0]=0;
for(i=0;i<n;i++){
wt[i]=wt[i-1]+bt[i-1];}
for(i=0;i<n;i++){
tat[i]=wt[i]+bt[i];
avg_wt+=wt[i];
avg_tat+=bt[i];
}
avg_wt/=n;
avg_tat/=n;
printf("\nProcess\t\tBurst time\t\tPriority\t\tTurnarounf time\t\tWaiting time\n");
for(i=0;i<n;i++){
printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\n",p[i],bt[i],pr[i],tat[i],wt[i]);
}
printf("\n Average_turnaround Time:%.2f",avg_tat);
printf("\nAverage_waiting Time:%.2f",avg_wt);
return 0;}







