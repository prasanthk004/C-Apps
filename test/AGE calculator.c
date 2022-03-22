#include<stdio.h>
#include<conio.h>
int main()
{

int i , n ;

int age=0 , year=0 ;

printf("\n  Enter the Year of birth ");
scanf("%d",&year);


printf("\n Enter how many years to live : " );
scanf("%d",&n);

printf("\n In YeaR %d your age is %d ",year,age) ;

for (i=1;i<=n;i++)

{

year+=1;
age+=1;

printf("\n In YeaR %d your age is %d ",year,age);
}

printf("\n\n If You lives %d years you will live for year  %d",n,year);

}




