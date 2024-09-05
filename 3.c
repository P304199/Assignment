 #include<stdio.h>
int main()
{
    float BS,GS,DA,HRA;//BS=base salary,GS=gross salary,DA=dearness allowance,HRS=house rent allowance

    printf("enter basic salary\n");
    scanf("%f",&BS);

    if(BS<5000)
    {
        HRA=BS*10/100;
        DA =BS*90/100;
    }
    else
    {
        HRA=600;
        DA =BS*95/100;
    } 
        GS =BS+DA+HRA;
        prinf("Gross salary is %f\n",GS);
        return 0;
}