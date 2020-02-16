#include <stdio.h>//--------- Runtime error !-------
//--------- by Codechef--------
 int biggest(int lead[],int n)
 {
 	int i,big=lead[0];
 	for(i=0;i<n;i++)
 	{
 		if(lead[i]>big)
 		 big=i;
 	}
 	return big;
 }

 int main()
 {
 	int loop,score1[100],score2[100],score1_cum[100],score2_cum[100],
 	  lead[100],leader[100];
 	scanf("%d",&loop);
 	for(int i=0;i<loop;i++)
 	{
 		scanf("%d %d",&score1[i],&score2[i]);
 		if(i==0)
 		{
 			score1_cum[i]=score1[i];
 			score2_cum[i]=score2[i];
 		}
 		else
 		{
 			score1_cum[i]=score1[i]+score1_cum[i-1];
 			score2_cum[i]=score2[i]+score2_cum[i-1];
 		}
 		if(score1_cum[i]==score2_cum[i])
 		  break;
 		if(score1_cum[i]>score2_cum[i])
 		{
 			lead[i]=score1_cum[i]-score2_cum[i];
 			leader[i]=1;
 		}
 		else
 		{
 			lead[i]=score2_cum[i]-score1_cum[i];
 			leader[i]=2;
 		}
 	} 	
 	int pos=biggest(lead,loop);
 	printf("\n%d %d",leader[pos],lead[pos]);

 	return 0;
 }