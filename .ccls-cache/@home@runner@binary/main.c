#include <stdio.h>
int main() {
  int a[10];
  int key, first,last,mid,n,i,j,temp;
  printf("Enter the number of elements : " );
  scanf ("%d",&n);
  printf("\n Enter the array element");
  for(i = 0; i<n; i++)
    {
      scanf("%d",&a[i]);
    } 

  

      
    
  
    
  for (i=0;i<n;i++)
    {
      for(j=0;j<n-1; j++)
        {
          if(a[j]>a[j=1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
          }
      }
     for(i=0;i<n;i++)
       {
         printf("\n %d\n",a[i]);
       }
        
    
  

    printf ("\nEnter the key element\n");
    scanf("%d",&key);

  first = 0; last = n-1;
  while (first<= last)
    {
    
  mid = (first + last)/2;
  if (key==a[mid])
  {
    printf("Found element in pos %d",mid +1);
    return 0;
    
  }
    else if (key > a[mid])
    {
      first = mid + 1;
      }
      else{
        last = mid - 1;
        }
      }
       printf("\nThe element %d is not found in the array",key); 
  return 0;
      
    }