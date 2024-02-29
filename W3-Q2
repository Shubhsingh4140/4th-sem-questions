#include<stdio.h>
void main()
{
      int a[100],n,i,j,k,s,c,t,T;
      printf("enter no. of test cases:");
      scanf("%d",&T);
      for(t=0;t<T;t++)
      {
            printf("enter limit:");
            scanf("%d",&n);
            printf("enter elements\n");
            for(i=0;i<n;i++)
            {
                  scanf("%d   ",&a[i]);
            }
            int min,f;
            for(i=0;i<n;i++)
            {
                  min=a[i];
                  for(j=i+1;j<n;j++)
                  {
                        c++;
                        if(a[j]<min)
                        {
                              min=a[j];
                              f=1;
                              k=j;
                        }
                  }
                  if(f==1)
                  {
                        s++;
                        int tmp=a[i];
                        a[i]=min;
                        a[k]=tmp;
                  }
                  f=0;
            }
      
            for(i=0;i<n;i++)
            {
                  printf("%d",a[i]);
            }
            printf("no. of swaps are %d and comparisons are %d",s,c);
      }
}
