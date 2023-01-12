#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void  function_a() {
	FILE  *p ;
	char ten[1000]  ;
	p = fopen("text.txt","w") ;
	printf("Nhap van ban: ") ;
	fflush(stdin) ;
	gets(ten) ;
	printf("Chuoi vua nhap: %s \n",ten) ;
	fprintf(p,"%s",ten ) ;
	fclose(p) ;
}
void function_b() {
	FILE  *p ;
	char *ten[100]  ;
	p = fopen("text.txt","r") ;

	char *chr = NULL;
	printf("TExt: ") ;
	do {

		chr = fgets(&ten,100,p) ;
		if (chr != NULL) {
			printf ("%s", ten) ;
		}
	} while(chr != NULL);
	fclose(p) ;
}
void function_c() {
	function_b() ;
	FILE  *p ;
	char ten[1000]  ;
	p = fopen("text.txt","a") ;
	printf("\nNhap van ban: \n") ;
	fflush(stdin) ;
	gets(ten) ;
	printf("Chuoi vua nhap: %s \n",ten) ;
	fprintf(p,"%s",ten ) ;
	fclose(p) ;
	function_b() ;

}
// ====================================================================================================================
int isPrime(int n) {
	if (n < 2 ) return  0 ;
	int i ;
	for(i=2; i<=sqrt(n); i++) {
		if (n%i==0)  return 0 ;
	}
	return 1 ;
}
void function_bai_2() {
	int n ,  a[100] ;
	// cau a 
	FILE *p = fopen("text2.txt","r") ;
	fscanf(p,"%d\n",&n) ;
	int i ;
	for(i=0; i<n; i++) {
		fscanf(p,"%d",&a[i]) ;
	}
	fclose(p) ;
	// cau b   
	int b[100] , size = 0  ;
	FILE *pp = fopen("text2.txt","a") ;
	fscanf(pp,"%d\n",&n) ;
	fprintf(pp,"So nguyen to trong mang.\n") ;
	for(i= 0; i < n; i++) {
		printf("%d\t",a[i]) ;
		if(isPrime(a[i])) {
			fprintf(pp,"%d\t",a[i]) ;
		}
	}
	fprintf(pp,"\n") ;
	fclose(pp) ;
}
//======================================================================
void function_bai_3() {
	int c,d, a[10][10] ; 
	// cau a 
	FILE *p = fopen("text3.txt","r") ;
	fscanf(p,"%d%d\n",&d,&c) ;
	int i , j  ;
	for(i=0; i<d; i++) {
		for(j=0; j<c; j++) {
			fscanf(p,"%d",&a[i][j]) ;
		}
	}
	// cau b 
	for(i=0; i<d; i++) {
		for(j=0; j<c; j++) {
			printf("%d\t",a[i][j]) ;
		}
		printf("\n\n");
	}
	fclose(p) ;
	//cau c 
	FILE *pp = fopen("text3.txt","a") ;
	if (c==d)  {
		for(i=0; i<c; i++) {
			fprintf(p,"%d\t",a[i][i]) ;
		}
	} else {
		fprintf(p,"Ma tran khong vuong\n") ;
	}

}


int main() {
	int a[100], n  ;
	function_a(a,n) ;
	function_b(a,n) ;  
	function_c() ;  // cau 1 v
//	function_bai_2() ;  // cai 2
//	function_bai_3() ;

}
