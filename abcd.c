/* write a program to input a number and check number is palingrom or not */
/*#include<stdio.h>
#include<conio.h>
void main()
{
    long int tot=0,no,no1,rem;
    printf("\n Enter your Number :");
    scanf("%ld",&no);
    no1=no;

    while (no > 0)
    {
        rem = no % 10;
        tot = tot * 10 + rem; 
        no = no / 10; 
    }
    printf("\n Reverse Number is :%ld",tot);

    if (tot == no1)
    {
        printf("\n number is palingrom");        
    }
    else
    {
        printf("\n number is not palingrom");
    }
    getch;
}
*/
// write a program with the use of switch case...
/*#include<stdio.h>
#include<conio.h>
void main()
{
    int c,fn,sn,a,tot=0;
    printf("\n Enter Your first Number :");
    scanf("%d",&fn);
    printf("\n Enter Your second Number :");
    scanf("%d",&sn);
    printf("\n :: ARITHMATIC OPRETORS ARE ::");
    printf("\n 1. Addition");
    printf("\n 2. Substriction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    A :
    printf("\n Enter your Choice :");
    scanf("%d",&c);
    switch (c)
    {
        case 1:
            tot=fn+sn;
            printf("\n addition is :%d",tot);
            break;
        case 2:
            tot=fn-sn;
            printf("\n substriction is :%d",tot);
            break;
        case 3:
            tot=fn*sn;
            printf("\n Multiplication is :%d",tot);
            break;
        case 4:
            tot=fn/sn;
            printf("\n Division is :%d",tot);
            break;
        default:
            printf("\n Sorry wrong choice......try again..");
            break;
    }
    printf("\n enter any number for continue or press [0] for exit....  =");
    scanf("%d",&a);
    if (a!=0)
    {
        goto A;
    }
    printf("\n thank you visit");
    getch();
}  
*/
/*
#include<stdio.h>
#include<conio.h>
void main()
{
    int c;
    float cel=0,k=0,f=0,n;
    printf("\n :: TYPES OF CONVERSION ::");
    printf("\n 1. conversion from celsius to kelvin and fahrenheit");
    printf("\n 2. conversion from Kelvin to celsius and fahrenheit");
    printf("\n 3. conversion from fahrenheit to celsius and kelvin");
    A :
    printf("\n Enter your choice :");
    scanf("%d",&c);

    switch (c)
    {
        case 1:
            printf("\n (1)..Enter celcius number for conversion :");
            scanf("%f",&cel);
            k = cel + 273.15;
            f = (cel*9/5)+32;
            printf("\n -> your kelvin value is :%.2f",k);
            printf("\n -> your fahrenheit value is :%.2f",f);
            break;
        case 2:
            printf("\n (2)..Enter Kelvin number for conversion :");
            scanf("%f",&k);
            cel = k - 273.15;
            f = cel * 9/5 + 32;
            printf("\n -> your calsius value is :%.2f",cel);
            printf("\n -> your fahrenheit value is :%.2f",f);
            break;
        case 3:
            printf("\n (3)..Enter fahrenheit number for conversion :");
            scanf("%f",&f);
            cel = (f-32)*5/9;
            k = cel + 273.15;
            printf("\n -> your celsius value is :%.2f",cel);
            printf("\n -> your kelvin value is :%.2f",k);
            break;
        
        default :
            printf("\n # # wrong input try again ....# # ");
            break;
    }    
    printf("\n\t :: ENTER ANY NUMBER FOR CONTINU OR PRESS '0' FOR EXIT... --->>> ");
    scanf("%f",&n);
    if (n != 0)
    {
        goto A;
    }
    printf("\n\n\t * * >>>> Thank you for visit <<<< * *");
    getch();
}
*/

