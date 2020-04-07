#include<stdio.h>
main()
{
	int y,m,d,feb=28;
	printf("Input Date in format of YY/MM/DD: ");
	scanf("%d/%d/%d",&y,&m,&d);
	if((y%4==0&&y%100!=0)||y%400==0)
	{
		feb=29;
	}
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
			d=d+31+feb+30+31+30+31+30;
			break;
		case 8:
			d=d+31+feb+30+31+30+31+30+31;
			break;
		case 9:
			d=d+31+feb+30+31+30+31+30+31+31;
			break;
		case 10:
			d=d+31+feb+30+31+30+31+30+31+31+30;
		case 11:
			d=d+31+feb+30+31+30+31+30+31+31+30+31;
		case 12:
			d=d+31+feb+30+31+30+31+30+31+31+30+31+30;			
	}
	d=(y+(y-1)/4+(y-1)/400-(y-1)/100+d)%7;
	switch(d)
	{
     	case 0:
			printf("sat");
			break;
		case 1:
			printf("sun");
			break;
		case 2:
			printf("mon");
			break;
		case 3:
			printf("tue");
			break;
		case 4:
			printf("wed");
			break;
		case 5:
			printf("thu");
			break;
		case 6:
			printf("fri");
			break;
	}
	
}
