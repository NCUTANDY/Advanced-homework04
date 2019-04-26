#include<stdio.h> 
#include <conio.h> 
int main()
{
	int day1, month2, year3, sum4, leap5;  
	
	printf("請輸入西元年月日：");  
	scanf("%d%d%d",&year3,&month2,&day1);

	switch(month2)
	{   
	case 1:sum4 = 0;break;    
    case 2:sum4 = 31;break;  
	case 3:sum4 = 59;break;   
	case 4:sum4 = 90;break;  
	case 5:sum4 = 120;break;  
	case 6:sum4 = 151;break;   
	case 7:sum4 = 181;break;   
	case 8:sum4 = 212;break;  
	case 9:sum4 = 243;break;  
	case 10:sum4 = 273;break; 
	case 11:sum4 = 304;break; 
	case 12:sum4 = 334;break; 

	default:printf("data error!");break; 
	}

	    sum4 = sum4 + day1;

	if(year3%400==0||(year3%4==0&&year3%100!=0))

	{  
		leap5 = 1;  
	}

	else
	{
		leap5 = 0; 
	}

	if(leap5 == 1&&month2 > 2)
	{  
		sum4++;  
	}

	printf("這一天是這一年的第%d天",sum4);


}
