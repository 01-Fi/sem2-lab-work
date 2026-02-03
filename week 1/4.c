#include <stdio.h>
int main(){
	int i,j,m,n;
	int sum;
	printf("Enter number of rows and columns:");
	scanf("%d %d",&m,&n);
	int a[m][n],b[m][n],c[m][n],d[m][n],e[m][n];
	int transpose[m][n];
	printf("enter matrix A :");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter matrix B :");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		c[i][j]=a[i][j]+b[i][j];
		}	
	} printf("Sum of matrix A and B is :\n ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		printf("%d\t",c[i][j]);
		}
		printf("\n");	
	}
	printf("Difference of matrix A and B is :\n ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		d[i][j]=a[i][j]-b[i][j];
		printf("%d\t",d[i][j]);
		}printf("\n");
	}
	printf("Multiplication of matrix A and B is :\n ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		e[i][j]=a[i][j]*b[i][j];
		printf("%d\t",e[i][j]);
		}printf("\n");}
		
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			transpose[j][i]=a[i][j];
		}
	}
	printf("Transpose of matrix A:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("%d\t",transpose[i][j]);
		}
		printf("\n");	
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			transpose[j][i]=b[i][j];
		}
	}
	printf("Transpose of matrix B:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("%d\t",transpose[i][j]);
		}
		printf("\n");	
	}
	return 0;
}
