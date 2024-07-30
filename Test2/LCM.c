#include<stdio.h>

int lcm(int num1,int num2)
{
    int max,lm;
    max=num1<num2?num1:num2;

    while(1)
    {
    	if(max%num1==0 && max%num2==0)
    	{
			lm=max;
			break;
		}
		max++;
	}

    return lm;
}

main()
{
    int num11,num22,l;
    printf("Enter Number One : ");
    scanf("%d",&num11);
    printf("Enter Number Two : ");
    scanf("%d",&num22);
    l=lcm(num11,num22);
    printf("The LCM Of %d and %d is : %d ",num11,num22,l);

    return 0;
}


