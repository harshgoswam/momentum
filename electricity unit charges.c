#include<stdio.h>
 main() {

    int unit ;
    float amt ,surcharge ;
    printf("Enter unit: ");
    scanf("%d", &unit);

    if (unit <= 50)
    {
    
	
        amt = (unit*0.50);
    }
    else if (unit <= 150)
    {
	
        amt = ((unit-50)*0.75) + 25;
	}

        else if (unit <= 250)
    {
		
        amt = ((unit-150)*1.20) + 100;
	}
    else
	{
	
        amt = ((unit-250)*1.50) + 220;
	}

   surcharge = amt*0.20;

   printf("electricity unit charges = amt.%.2f", amt+surcharge);

}
