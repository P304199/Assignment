/*print
A
BB
CCC
DDDD
EEEEE


*/


#include<stdio.h> 
int main()
{   
    int n; 
    
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(char i ='A'; i <=65+n; i++)
    {
        for(int j =65 ; j<=i;j++ )
        {
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}
