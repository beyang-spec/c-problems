#include<stdio.h>
int main()
{

int i=1,n,even=0,odd=0;
printf("\nEnter the Ending value:");
scanf("%d",&n);
printf("\nEven numbers:");
while(i<=n)
{
    if(i%2==0)
    {
        printf("\n%d",i);
        even++;
    }
    i++;

}
printf("\nOdd numbers:");
i=1;
while(i<=n)
{
    if(i%2==1)
    {
        printf("\n%d",i);
        odd++;
    }
    i++;
}
printf("\nTotal even numbers:%d",even);
printf("\nTOtal odd numbers:%d",odd);
return 0;
}