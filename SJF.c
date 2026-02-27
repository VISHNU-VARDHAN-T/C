#include<stdio.h>
int main(){
int n,i,j,temp;
int bt[10],wt[10],tat[10],p[10];
float avg_wt=0,avg_tat=0;
printf("Enter the number of processes:");
scanf("%d",&n);
printf("Enter the Burst Time for each process:\n)");
for(i=0;i<n;i++){
printf("P%d:",i+1);
scanf("%d",&bt[i]);
p[i]=i+1;
}
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
 
temp=p[i];
p[i]=p[j];
p[j]=temp;}}
wt[i]=0;
for(i=0;i<n;i++){
wt[i]=wt[i-1]+bt[i-1];
}
for(i=0;i<n;i++){
tat[i]=wt[i]+bt[i];
avg_wt+=wt[i];
avg_tat+=tat[i];
}
avg_wt/=n;
avg_tat/=n;
printf("\nProcess\t\tBurst Time\t\tTurnaround Time\t\tWaiting Time\t\n");
for(i=0;i<n;i++){
printf("P%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],tat[i],wt[i]);
}
printf("\n Average Waiting Time:%.2f",avg_wt);
printf("\nAverage Turn Around Time:%.2f",avg_tat);
return 0;
}
