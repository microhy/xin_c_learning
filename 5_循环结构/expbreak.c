#include<stdio.h>


int main()
{
    int cnt = 0 ;

    for( ; ; )
    {
	puts("enter 1. for\n");
        for(; ; )
	{
	    puts("enter 2. for\n");
	    puts("break from 2.for");
            break;
	}
	puts("break from 1.for");
	break;
    }

    puts("----exit main---");
    return 0;
}
