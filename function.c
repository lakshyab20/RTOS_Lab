#include "header.h"
void sort(int size,int x[])
{
int i,j,t;
for(i=1;i<=size-1;i++)
{
	for(j=1;j<=size-i;j++)
		if(x[j-1]>=x[j])
		{
			t=x[j-1];
			x[j-1]=x[j];
			x[j]=t;
		}
}
}
float mean(int size,int x[])
{
int i;
float sum=0.0;
for(i=0;i<size;i++)
{
sum=sum+x[i];
}
return sum/size;
}


float mode(int size,int x[])
{
int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < size; ++i) {
      int count = 0;
      
      for (j = 0; j < size; ++j) {
         if (x[j] == x[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = x[i];
      }
   }

   return maxValue;
}

float median(int size,int x[])
{
	sort(size,x);
	float median=0;
    
    
    if(size%2 == 0)
        median = (x[(size-1)/2] + x[size/2])/2.0;
    
    else
        median = x[size/2];
    
    return median;
}
int max(int size,int x[])
{
	sort(size,x);
	return (x[size-1]);
}
int min(int size,int x[])
{
	sort(size,x);
	return(x[0]);
}