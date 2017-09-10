#include<stdio.h>
#include<conio.h>
void DayConMax(int m, int chay);
int n = 10, max = 0;
int mang_a[10] = {9, 9, 10, 9, 8, 12, 15, 7, 20, 1};
main()
{
	for(int i=1; i<=10; i++)
	    DayConMax(i, 1);
	printf("\n Gia Tri Cua Day Con Max la: %d ", max);
	getch();
}
void DayConMax(int m, int moc)
{  
     int tong = 0;
		for(int chay = moc ; chay<=m+moc-1; chay++)
           {
           	  tong = tong + mang_a[chay-1];
           	  printf("%3d ", mang_a[chay-1]);
		   }
		printf("\n");   
		 if(tong>max) max = tong;  
	 if(moc<=n-m) DayConMax(m, moc+1)  ;
	 
}
