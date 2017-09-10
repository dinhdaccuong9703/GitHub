#include<stdio.h>
#include<conio.h>
#define sn 6
int max = 0;
int arr[sn+1];
int Mgn[sn+1];
int pa[6][6] = {
                    {1,60,9,7,2,0},
                    {70,1,4,5,3,2},
					{9,7,10,5,3,1},
					{9,6,5,10,2,6},
					{6,5,3,4,10,1},
					{4,7,6,7,1,10},
				 };

void CongViec(int dong);
int KiemTra(int dong, int cot);
void InRaKetQua(int *pb);

main()
{   int x;
	printf("\n Nhap gia tri cua x: ");
	scanf("%d", &x);
	CongViec(1);
	InRaKetQua(Mgn);
	printf("\n Gia Tri cua max = %d", max);
	getch();
}
void CongViec(int dong)
    {
    	int i, j, tong, cot;
    	printf("\n Dong = %d", dong);
    	for(cot=1; cot<=6; cot++)
           	  if(KiemTra(dong, cot))
           	    {
           	      arr[dong]=cot;
           	      printf("\n Gia tri cua arr[%d] = %d", dong, arr[dong]);
           	      if(dong==6)
           	    	  {  tong = 0;
						 for(i=1; i<=6;i++)
           	    	        {
							  tong = tong + pa[i-1][arr[i]-1];
           	    	        }
           	    	     if(tong>=max)
           	    	        {
							  max = tong;
							  for(j=1; j<=6; j++)
							      Mgn[j]=arr[j];
					     	}
					  }
				  else CongViec(dong+1);
				}
	}
int KiemTra(int dong,int cot)
	   {
	   	 int i;
	   	 for(i=1; i<dong; i++)
	   	      if(cot==arr[i])
	   	        return 0;
	     return 1;
	   }
void InRaKetQua(int *pb)
{
	int i;
	printf("\n\n Cach phan cong cong viec tot nhat la: \n");
	for(i=1; i<=6; i++)
	   {
	   	 printf("    Nguoi thu %d lam cong viec thu %d \n", i, Mgn[i]);
	   }
}













