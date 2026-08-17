#include<stdio.h>
int main(){
float totaltime, time,  second, hour, minute;
printf("Enter the total time in seconds: ");
scanf("%f", &totaltime);
hour = totaltime / 3600;
minute = (totaltime - (hour * 3600)) / 60;
second = totaltime - (hour * 3600) - (minute * 60);
printf("The time is: %.0f hours, %.0f minutes, and %.0f seconds.\n", hour, minute, second);
 return 0;   
}