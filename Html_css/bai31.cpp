#include<stdio.h>
void nhapMang1Chieu(int a[])
{
    printf("Nhap mang 4 phan tu: \n");
    for(int i=0;i<4;i++)
    {
        printf("Nhap phan tu thu %d: ",i+1); 
        scanf("%d",&a[i]); 
    }
}
void xuatMang1Chieu(int a[])
{
    printf("Mang vua nhap la: \n");
    for(int i=0;i < 4;i++)
    {	
    	if(i == 3)
    	{
    		    printf("%d\n",a[i]); 
		}
       	else printf("%d,",a[i]); 
    }
}
int main()
{
   
   int a[4];
   nhapMang1Chieu(a);
   xuatMang1Chieu(a); 
}