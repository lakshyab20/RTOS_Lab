#include<stdio.h>
#include "function.c"

int main()
{
	int data[100],i,n,c,s;
	float j,m;
	
	printf("Enter size \n");
	scanf("%d",&n);
	printf("Enter elements \n");
	for(i=0;i<n;i++)
	scanf("%d",&data[i]);
	printf("Enter your choice \n1.Sorting\n2.Mean\n3.Median\n4.Mode\n5.Maximum\n6.Minimum\n");
	scanf("%d",&c);
	switch(c)
{
	case 1:sort(n,data);
		printf("Sorted array is");
		for(i=0;i<n;i++)
		printf("%d ",data[i]);
		break;
	case 2:m=mean(n,data);
		printf("Mean of array is %6.2f",m);
		break;
	case 3:m=median(n,data);
		printf("Median of array is %.2f",m);
		break;
	case 4:m=mode(n,data);
		printf("Mode of array is %.2f",m);
		break;
	case 5:s=max(n,data);
		printf("Maximum of array is %d",s);
		break;
	case 6:s=min(n,data);
		printf("Minimum of array is %d",s);
		break;
	
}
	
return 0;
}