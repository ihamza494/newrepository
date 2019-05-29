#include<stdio.h>
void main()
{int a[6],b[6],i,sum=0,count=0,min,max;
char c;
for(i=0;c!='\n';i++)
{
scanf("%d%c",&a[i],&c);
 sum+=a[i];
 count++ ;
}
for(i=0;i<count;i++){
	a[i]=sum-a[i];
}

for(i=0;i<count-1;i++){
	max=a[0];
	if(a[i+1]>a[i])
	 max=a[i+1];
}
for(i=0;i<count-1;i++){
	min=a[0];
	if(a[i+1]<a[i])
		min=a[i+1];
}
printf("\n%d  %d",min,max);

}
