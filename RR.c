#include<stdio.h>
int n , tq ,i ,time=0;
int bt[10],rem_bt[10],tat[10],wt[10];
int avg_wt=0,avg_tat=0;
printf("Enter the no of processes:");
scanf("%d",&n);
printf("Enter burst tiem for each process:");
for(i=0;i<n;i++){
printf("P%d",i+1);
printf("Burst Time:");
scanf("%d",&bt[10]);
rem_vt[i]=bt[i];
wt[i]=0;
}
printf("Enter Time Quantum:");
for(i=0;i<n;i++){
scanf("%d",&tq);
do{
done=1;
if(rem_bt[i]>0){
done=0;
rem_bt[i]-=tq;
if(rem_bt[i]>tq){
time+=tq;
rem_bt[i]-=tq;
}else{
time+=rem_bt[i];
wt[i]=time-bt[i];
rem_bt[i]=0;
}
}
}
while(!done);
