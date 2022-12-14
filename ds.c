/*
#include<stdio.h>
#include<conio.h>
void bsearch(int [], int);
void busort(int []);
void main()
{
    int a[10],i,s;
    for(i=0;i<=9;i++)
    {
        printf("\n Enter Number :");
        scanf("%d",&a[i]);
    }

    busort(a);

    for(i=0;i<=9;i++)
    {
        printf("\n Number is :%d",a[i]);
    } 
    printf("\n Searching Element :");
    scanf("%d",&s);

    bsearch(a,s);   
    
}
void bsearch(int a[],int s)
{
    int f=0,m=0,l=9,i,flag=0;
    for(i=0;i<=9;i++)
    {
        m = (f + l) / 2;
        if(s < a[m])
        {
            l = m - 1;
        }
        else if(s > a[m])
        {
            f = m + 1;
        }
        else
        {
            printf("\n:: Searching Element is found ::");
            flag = 1;        
            break;
        }
    }
    if(flag == 0)
    {
        printf("\n Searching Element Not Found");
    }
    getch();
}
void busort(int a[])
{
    int j,temp,i;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
*/
/*
#include<stdio.h>
#include<conio.h>
void bsort(int [])
void main()
{
    int i,j,k,a[5],b[5],c[10]
    printf("\n::: First Array Element :::");
    for(i=0;i<=4;i++)
    {
        printf("\n Enter Number :");
        scanf("%d",&a[i]);
    }
    printf("\n::: Second Array Element :::");
    for(j=0;j<=4;j++)
    {
        printf("\n Enter Number :");
        scanf("%d",&b[j]);
    }
    bsort(a);
    bsort(b);

    printf("\n First Array :")
}
*/

//QUICK SHORT
#include<stdio.h>
#include<conio.h>
void qsort(int [], int, int);
void main()
{
    int a[10],i;
    for(i=0;i<=9;i++)
    {
        printf("\n Enter Number :");
        scanf("%d",&a[i]);
    }
    
    qsort(a,0,9);

    printf("\n Sorted Output  :\n");
    for(i=0;i<=9;i++)
    {
        printf("\n Number is :%d",a[i]);
    }
    getch();
}
void qsort(int a[], int f, int l)
{
    int high,low,mid,temp;
    high = f;
    low = l;
    mid = a[(f+l)/2];

    while(high <= low)
    {
        while(mid > a[high])
        {
            high ++;
        }
        while(mid < a[low])
        {
            low --;
        }
        if(high <= low)
        {
            temp = a[high];
            a[high] = a[low];
            a[low] = temp;
            high ++;
            low --;
        }
    }

    if(f < low)
    {
        qsort(a,f,low);
    }
    if(high <l)
    {
        qsort(a,high,l);
    }
    return;
}






















