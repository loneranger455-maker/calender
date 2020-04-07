#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
int checkleap(year){
if((year%4==0&&year%100!=0)||year%400==0){
 return(1);}
else{
    return(0);
}
}
int checkspecial(month,check,day){
bool ab=false;
if (check==1){
    switch(month+1){
case 1:
    switch(day){case 1:case 11:case 15:case 24: ab=true;break;}break;
case 2:
    switch(day){case 21:case 24:ab=true;break;}break;
case 3:
    switch(day){case 8: ab=true;break;}break;
case 5:
    switch(day){case 1:case 7: ab=true;break;}break;
case 4:
    switch(day){case 1:case 13:ab=true;break;}break;
case 8:
    switch(day){case 13: ab=true;break;}break;
case 9:
    switch(day){case 19: ab=true;break;}break;
case 12:
    switch(day){case 25:ab=true;break;}break;}
    }
else{
    switch(month+1){
case 1:
    switch(day){case 1:case 15:case 11:case 24: ab=true;break;}break;
case 2:
    switch(day){case 21:case 24:ab=true;break;}break;
case 3:
    switch(day){case 9: ab=true;break;}break;
case 5:
    switch(day){case 1:case 8: ab=true;break;}break;
case 4:
    switch(day){case 14:ab=true;break;}break;
case 8:
    switch(day){case 14: ab=true;break;}break;
case 9:
    switch(day){case 18: ab=true;break;}break;
case 12:
    switch(day){case 25:ab=true;break;}break;}
    }
if(ab==false) return 0;
else if(ab==true) return 1;
}

int whichday(int y,int m,int feb){
int d=1;
	switch(m)
	{
		case 2:
			d=d+31;
			break;
		case 3:
			d=d+31+feb;
			break;
		case 4:
			d=d+31+feb+31;
			break;
		case 5:
			d=d+31+feb+31+30;
			break;
		case 6:
			d=d+31+feb+31+30+31;
			break;
		case 7:
			d=d+31+feb+31+30+31+30;
			break;
		case 8:
			d=d+31+feb+31+30+31+30+31;
			break;
		case 9:
			d=d+31+feb+31+30+31+30+31+31;
			break;
		case 10:
			d=d+31+feb+31+30+31+30+31+31+30;break;
		case 11:
			d=d+31+feb+31+30+31+30+31+31+30+31;break;
		case 12:
			d=d+31+feb+31+30+31+30+31+31+30+31+30;break;
	}
	d=(y+(y-1)/4+(y-1)/400-(y-1)/100+d)%7;
	return(d);}
void specialday(month,check){
    printf("\n\t\t\t");

switch(month+1)
    {
		case 1:
			printf("Special days:\n\t\t\t\t1 --> New Year day\n\t\t\t\t11 -->Suraj's Birthday\n\t\t\t\t15-->Maghe Sakrati\n\t\t\t\t24 --> Gyampo Lhosar");
			break;
		case 2:
			printf("Special days:\n\t\t\t\t21--> Maha Shivaratri\n\t\t\t\t24 --> Gyalpyo Lhosar");
			break;
        case 4:
            if(check==1){
                printf("Special days:\n\t\t\t\t1 --> My birthday\n\t\t\t\t 13 --> Nepali New Year");
		}
          else
            printf("Special days:\n\t\t\t\t14 --> Nepali New Year");
			break;
        case 3:
			if(check==1){
                     printf("Special days:\n\t\t\t8 --> Nari Diwas");
		}
          else
            printf("Special days:\n\t\t\t9 --> Nari Diwas");
			break;
        case 5:
			if(check==1){
                     printf("Special days:\n\t\t\t\t1 --> International Workers Day\n\t\t\t\t7 --> Buddha Jayanti");
		}
          else
            printf("Special days:\n\n\t\t\t\t1 --> International Workers Day\n\t\t\t\t8 --> Buddha Jayanti");
			break;
        case 6:
           printf("Special days:\n\t\t\t\t(no such days)");break;

        case 7:
		     printf("Special days:\n\t\t\t\t(no such days)");break;
        case 8:
			 if(check==1){
                     printf("Special days:\n\t\t\t\t13 --> Ozone's Birthday");
		}
          else
            printf("Special days:\n\n\t\t\t\t14 --> Ozone's Birthday");
			break;
        case 9:
			 if(check==1){
                     printf("Special days:\n\t\t\t\t19 --> Constitution Day");
		}
          else
           printf("Special days:\n\t\t\t\t18 --> Constitution Day");
			break;
        case 10:
			 printf("Special days:\n\t\t\t\t(no such days)");break;
        case 11:
			 printf("Special days:\n\t\t\t\t(no such days)");break;
         case 12:
			 printf("Special days:\n\t\t\t\t25 --> Christmas Day");break;
}
}
void main()
{
int i,j,func1,find,check,jgh=0;
char bas[10];
int jan=31,feb,mar=31,apr=30,may=31,june=30,july=31,aug=31,sept=30,oct=31,nov=30,dec=31;
time_t now = time(NULL);
   struct tm *t = localtime(&now);
   int cmonth=t->tm_mon+1 ;
   int cday=t->tm_mday ;
   int cyear= t->tm_year+1900 ;
    int chour=t->tm_hour;
   int cmin= t->tm_min;
   int index=cmonth-1;
   if(chour>12){
    chour=chour-12;
    jgh=1;
   }
   int csec= t->tm_sec;
int year=2020,hold;
char as[10];
ab :
check=checkleap(year);
if (check==1)feb=29;
else feb=28;
int month[12]={jan,feb,mar,apr,may,june,july,aug,sept,oct,nov,dec};
switch(index){
        case 0:
			strcpy(as,"January");break;
        case 1:
			strcpy(as,"February");break;
        case 2:
			strcpy(as,"March");break;
        case 3:
			strcpy(as,"April");break;
        case 4:
			strcpy(as,"May");break;
        case 5:
			strcpy(as,"June");break;
        case 6:
			strcpy(as,"July");break;
        case 7:
			strcpy(as,"August");break;
        case 8:
			strcpy(as,"September");break;
        case 9:
			strcpy(as,"October");break;
        case 10:
			strcpy(as,"November");break;
       case 11:
			strcpy(as,"December");break;
	}
	switch(cmonth-1){
        case 0:
			strcpy(bas,"January");break;
        case 1:
			strcpy(bas,"February");break;
        case 2:
			strcpy(bas,"March");break;
        case 3:
			strcpy(bas,"April");break;
        case 4:
			strcpy(bas,"May");break;
        case 5:
			strcpy(bas,"June");break;
        case 6:
			strcpy(bas,"July");break;
        case 7:
			strcpy(bas,"August");break;
        case 8:
			strcpy(bas,"September");break;
        case 9:
			strcpy(bas,"October");break;
        case 10:
			strcpy(bas,"November");break;
       case 11:
			strcpy(bas,"December");break;}
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 7);
printf("\n\n");
printf("\t\t\t");
if(chour<10)printf("0%d:",chour);
else printf("%d:",chour);
if(cmin<10)printf("0%d",cmin);
else printf("%d",cmin);
if(jgh==1){
    printf(" PM");
    jgh=0;
}
else printf(" AM");
printf("                              %d %s,%d\n\t\t\t",cday,bas,cyear);
for(int o=0;o<=50;o++){
printf("-");}
printf("\n");
 SetConsoleTextAttribute(hConsole, 3);
printf("\t\t\t\t\t   Year=%d AD\n\n",year);
SetConsoleTextAttribute(hConsole, 11);
printf("\t\t\t\t\t   Month=%s\n\n",as);
SetConsoleTextAttribute(hConsole, 7);
printf("\t\t\t");
for(int o=0;o<=50;o++){
    printf("-");
}
printf("\n\t\t\tSAT\tSUN\tMON\tTUES\tWED\tTHUR\tFRI\n\n");
printf("\t\t\t");
   for(int o=0;o<=50;o++){
    printf("-");
}
printf("\n");
SetConsoleTextAttribute(hConsole, 6);
func1=whichday(year,index+1,feb);
for(i=1;i<=(func1+3);i++){
    printf("\t");}
int nextline=(func1);
for(i=1;i<=month[index];i++){
    if(year==cyear && index==cmonth-1&&i==cday){
            SetConsoleTextAttribute(hConsole,3);
        printf("\b(");
        if(nextline==0){
         SetConsoleTextAttribute(hConsole, 4);}
        else if (checkspecial(index,check,i)==1)SetConsoleTextAttribute(hConsole,1);
        else SetConsoleTextAttribute(hConsole,6);
        printf("%d",i);
        SetConsoleTextAttribute(hConsole,3);
        printf(")\t");
    }
    else{
            if(nextline==0){
         SetConsoleTextAttribute(hConsole, 4);
    }
            else if (checkspecial(index,check,i)==1){SetConsoleTextAttribute(hConsole,12);};

    printf("%d\t",i);}
     nextline+=1;
    SetConsoleTextAttribute(hConsole, 6);
    if(nextline==0){
     SetConsoleTextAttribute(hConsole, 4);}
    if(nextline==7){
        printf("\n\t\t\t");
        nextline=0;
    }
    if(nextline==0){
         SetConsoleTextAttribute(hConsole, 4);
    }
}
th:
    printf("\n\t\t\t");
    SetConsoleTextAttribute(hConsole, 7);
    for(int o=0;o<=50;o++){
    printf("-");
}
 SetConsoleTextAttribute(hConsole, 14);
 specialday(index,check);
 printf("\n\t\t\t");
 SetConsoleTextAttribute(hConsole, 7);
    for(int o=0;o<=50;o++){
    printf("-");}
    SetConsoleTextAttribute(hConsole, 10);
printf("\n\n\t\t\tpress 1 to change year\n\t\t\tpress 2 to change month\n\t\t\tpress 3 to change both");
char pujan=getche();

if(pujan=='1'){
    printf("\n\t\t\tenter the year:");
    scanf("%d",&hold);
    year=hold;
    system("cls");
    goto ab;}
else if(pujan=='2'){
    printf("\n\t\t\tenter the number of the month:");
    scanf("%d",&hold);
    index=hold-1;
    system("cls");
    goto ab;
    }
else if(pujan=='3'){
      printf("\n\t\t\tenter the year:");
    scanf("%d",&year);
    printf("\t\t\tenter the number of the month:");
    scanf("%d",&hold);
    index=hold-1;
    system("cls");
    goto ab;}
else if(pujan=='d'||pujan=='D'){index=index+1;
if(index>11){index=0;year=year+1;}system("cls");goto ab;}
else if(pujan=='a'||pujan=='A'){index=index-1;
if(index<0){index=11;year=year-1;}system("cls");goto ab;}
else if (pujan=='w'||pujan=='W'){year=year-1;system("cls");goto ab;}
else if (pujan=='s'||pujan=='S'){year=year+1;system("cls");goto ab;}
else{
    goto th;}}
