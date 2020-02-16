#include <stdio.h>
#include <string.h>
void delay()
{
	for(long i=0;i<=99999999;i++)
	{}
}
int main()
{
	struct student//typedef prevent to write 
	//struct student std1 always...
	// sorted it to only student std1
	{
		int r_no;
		char name[20],course[15];
		float fees;
	};
	struct student std1={01,"Arpan Dwibedi","MBBS",8900};
	struct student std2={02,"KOUSHIK MAHATA","C.S.E",10000};
	struct student std3={03,"PRATEEK MAHATO","M.E",2900};
	//struct student std1;
	printf("\t********************************");
	printf("\n\t S T U D E N T  D E T A I L S");
	printf("\n\t********************************");
	printf("\n\n");
	delay();
	printf("RollNo :%d\n",std1.r_no);
	printf("Name :%s\n",std1.name);
	printf("Course Taken :%s\n",std1.course);
	printf("Paid :%.2f\n\n",std1.fees);
	delay();
	printf("RollNo :%d\n",std2.r_no);
	printf("Name :%s\n",std2.name);
	printf("Course Taken :%s\n",std2.course);
	printf("Paid :%.2f\n\n",std2.fees);
	delay();
	printf("RollNo :%d\n",std3.r_no);
	printf("Name :%s\n",std3.name);
	printf("Course Taken :%s\n",std3.course);
	printf("Paid :%.2f\n\n",std3.fees);
	delay();
	delay();
	printf("\n\n");
	return 0;
}