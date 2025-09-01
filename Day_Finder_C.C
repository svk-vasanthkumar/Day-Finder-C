#include <stdio.h>
int main(){
int date,month,year,ydiff,days=0,leap,i,dayorder;
printf("Ent a date (dd mm yyyy): ");
scanf("%d %d %d",&date,&month,&year);
if(year<2000){
printf("Only 2000 or later");
return 0;
}
ydiff=year-2000;
for(i=2000;i<year;i++){
if((i%400==0)||(i%4==0&&i%100!=0))
days+=366;
else
days+=365;
}
if((year%400==0)||(year%4==0&&year%100!=0))
leap=1;
else
leap=0;
for(i=1;i<month;i++){
if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
days+=31;
else if(i==4||i==6||i==9||i==11)
days+=30;
else if(i==2&&leap==1)
days+=29;
else if(i==2&&leap==0)
days+=28;
}
days+=date-1;
if(ydiff>=100&&ydiff<200)days+=5;
else if(ydiff>=200&&ydiff<300)days+=3;
else if(ydiff>=300&&ydiff<400)days+=1;
dayorder=(6+days)%7;
switch(dayorder){
case 0:printf("sunday");break;
case 1:printf("monday");break;
case 2:printf("tuesday");break;
case 3:printf("wednesday");break;
case 4:printf("thursday");break;
case 5:printf("friday");break;
case 6:printf("saturday");break;
}
return 0;
}
