#include<stdio.h>
main()
{
	int a,b,c,d;
	
	printf("enter value of A,B,C,d=");
	
   	scanf("%d%d%d%d",&a,&b,&c,&d);
   	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				 printf("a is max");
			}
			else
			{
				 printf("d is max");
			}
			
		}
		else
		{
			if(c>d)
			{
				printf("C is max");
			}
			else
			{
				printf("d is max");
			}
		
		
			
		}
		
	
		
	}
	else
	{ 
		if(b>c)
		{
		  
		  if(b>d)
		  {
		  	printf("b is max");
		  }
		  else
		  {
		    printf("C is max");
		  }

		}
		else
		{
			if(c>d)
			{
			  printf("C is max");

				
			}
			else
			{
			  printf("d is max");

				
			}
		
		}
		
	}
	
	
}
