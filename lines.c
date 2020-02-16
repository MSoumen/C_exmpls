#include <stdio.h>
//void gotoxy(short int col, short int row);
#define HLINE for(i=0;i<79;i++)\
				printf("_");
#define VLINE {\
/*					gotoxy(X,Y);*/\
					printf("%c",179);}
int main()
{
	int i,y;
//	gotoxy(1,12);
	HLINE
	for(y=1;y<25;y++)
	VLINE

	return 0;
}
/*void gotoxy(short col,short row)
{
	HANDEL hStdout=GetStdHandel(STD_OUTPUT_HANDEL);
	COORD position={col,row};
	SetConsoleCursurPosition(hStdout,position);
}*/
