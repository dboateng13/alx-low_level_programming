#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i)
{	
	if (i > 0)
		return (1);
	
	return (0);
}

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else if (c > a && c > b)
    {
        largest = c;
    }


    return (largest);
}


#endif /* MAIN_H */
