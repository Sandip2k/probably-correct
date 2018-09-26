#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
long toDec(char a[100],int n)
{
	long int x;int k=0;
	for(int i=strlen(a)-1;i>=0;i--)
	{
		if(a[i]>=48 && a[i]<=57)
			x+=((long)(a[i]-48))*pow(n,k);
		else if(a[i]>=65 && a[i]<=90)
			x+=((long)(a[i]-55))*pow(n,k);
		k++;
	}
	return x;	
}
void toOct(long int x)
{
	int r;long int c=x; int a[100];int k=0;
	while(c!=0)
	{
		r=c%8;
		a[k++]=r;
		c=c/8;
	}
	for(int i=k-1;i>=0;i--)
		printf("%d",a[i]);
	printf("\n");
}
void toBin(long int x)
{
	int r;long int c=x; int a[100];int k=0;
	while(c!=0)
	{
		r=c%2;
		a[k++]=r;
		c=c/2;
	}
	for(int i=k-1;i>=0;i--)
		printf("%d",a[i]);
	printf("\n");	
}
void toHex(long int x)
{
	int r;long int c=x; short a[100];int k=0;
	while(c!=0)
	{
		r=c%16;
		a[k++]=r;
		c=c/16;
 	}
 	for(int i=k-1;i>=0;i--)
 	{
		if(a[i]>=10)
		std::cout<<(char)(a[i]+55);
		else
		std::cout<<a[i];
	}
	printf("\n");
		
}
int main(void)
{
	int n; char arr[100]; int nt;
	printf("Enter your source radix :");
	scanf("%d",&n);
	printf("Enter your number :");
	scanf("%s",arr);
	printf("Enter your target radix :");
	scanf("%d",&nt);
	printf("\n");
	long int x=toDec(arr,n);
	switch(nt)
	{
		case 2:
			toBin(x);
			break;
		case 8:
			toOct(x);
			break;
		case 10:
			printf("%d",x);
			break;
		case 16:
			toHex(x);
			break;
	}	
}
