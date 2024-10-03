/*  print
10000
01000
00100
00010
00001
*/

#include<stdio.h> 
int main()
{
    int n; 
    printf("Enter the value of n: ");
    scanf("%d",&n);

   
    for(int i =1; i <=n; i++)
    {   
        for(int j =1; j <=n; j++)
        
      
        {
            if(j == i)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }

        }
        printf("\n");
    }

    return 0;
}
