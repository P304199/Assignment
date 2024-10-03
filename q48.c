/*
    1   
   12 
  123 
 1234
12345
*/

#include<stdio.h>
int main()
{
    int n; 
  int count =1; 
    printf("Enter the value of n:");
    scanf("%d",&n);
    

    for(int i =1; i <= n; i ++) 
    {
        for(int j =1; j <=n; j++) 
        {
            if(i+j >n) 
            {
                printf("%d",count);

                count ++;
                if(j == n)
                count =1;
             
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


}
