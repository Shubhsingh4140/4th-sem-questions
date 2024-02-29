#include<stdio.h>
void main()
{
      int a[100],i,j,k=0,key,n,num,flag=0,T;
      printf("enter no. of test cases:");
      scanf("%d",&T);
      for(int t=0;t<T;t++)
      {
            
            printf("enter the key:");
            scanf("%d",&key);
            printf("enter limit:");
            scanf("%d",&n);
            printf("enter elements\n");
            for(i=0;i<n;i++)
            {
                  scanf("%d",&a[i]);
            }
            for(i=0;i<n;i++)
            {
                  for(j=0;j<n;j++)
                  {
                        if((a[i]-a[j])==key)
                        {
                              flag++;
                        }
                  }
            }
            if(flag==0)
                  printf("No sequence found");
            else
                  printf("the no. of pairs found are %d\n",flag);
            flag=0;
      }
      
}
