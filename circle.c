#include <graphics.h>
#include <dos.h>
#include <stdio.h>

int main()
{
	int gd=DETECT,gm,r,k,l,xin,yin,p,x=0,y=0;
	printf("Enter radious : ");
	scanf("%d",&r);
	printf("Enter center(x,y): ");
	scanf("%d %d",&xin,&yin);
	initgraph(&gd,&gm,"");
	setbkcolor(WHITE);
	k=x*2;
	l=y*2;
	while(x<=y)
	{
		x++;
		if(p<0)
		 p=p+k+3;
		else
		{
			y--;
			p=p+k+3-l+3;
			l-=3;
		}
		k+=2;
		putpixel(x+xin,y+yin,2);
		putpixel(y+xin,x+yin,3);
		putpixel(y+xin,-x+yin,4);
		putpixel(x+xin,-y+yin,5);
		putpixel(-x+xin,-y+yin,6);
		putpixel(-y+xin,-x+yin,7);
		putpixel(-y+xin,x+yin,8);
		putpixel(-x+xin,y+yin,9);
		delay(100);
	}
	closegraph();
	return 0;
}