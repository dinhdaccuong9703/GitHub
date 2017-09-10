#include<stdio.h>
#include<conio.h>
void ToHop(int d, int k, int m);
void InRaToHop(int *pb);
int mang_b[10];
int mang_a[10] = {-4, -5, 10, 9, 8, 12, -15, 7, 20, -1};
int max = 0, n =10, soPT = 0, m;
main()
{   int i;
    for(m=1; m<=n; m++)
    {
    	ToHop(1,1, m);
	}
    printf("\n Gia tri cua day lon nhat la: %d", max);
    printf("\n Gom %d phan tu ", soPT);
	getch();
}
void ToHop(int d, int k, int m)
{
	int i;
	for(i=d; i<=n-m+k; i++)
	   {
	     mang_b[k-1] = mang_a[i-1];
	   	 if(k==m)
	   	    {  int tong = 0;
			   for(int j=0; j<m; j++ )
			       tong = tong + mang_b[j];
			    if(tong>max) 
				   {
				     max = tong;   
				     if(soPT<m) soPT = m;
				   }
				     
		    }
	   	 else ToHop(i+1, k+1, m);
	   }
}
