	#include <stdio.h>
	int main()
	{
	  int loop,no,rem,rev;
	  scanf("%d",&loop);
	  while(loop--)
	  {
	    scanf("%d",&no);
	    rev=0;
	    while(no>0)
	    {
	      rem=no%10;
	      rev=rev*10+rem;
	      no/=10;
	    }
	    //printf("%s\n",(rev==no)?"wins":"losses");
	    if(rev==no)
	    	printf("wins\n");
	    else
	    	printf("losses\n");
	  }
	  return 0;
	}
