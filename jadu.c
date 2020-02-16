#include <stdio.h>
//using namespace std;

int main() {
    char ch;
    int c=0,score;
    int flag = 0;
    
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch >= '0' && ch <= '9')
        {   
            flag = 1;
            break;

        }
        else if(ch<=32) 
        continue;
        else
         c++;   
    }
    if(flag == 1)
    {  
    	printf("0"); 
    	return 0;
    }
    if(c <= 100)
   	 score = 100;
    else 
   	 score= 50;
    printf("%d\n",score);
    return 0;
}