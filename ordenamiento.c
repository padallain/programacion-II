#include <stdio.h>


int main (){
	
	float t, a[20]={2.31,4.56,8.14,10.32,78.56,34.65,9.56,48.12,75.23,26.12,12.56,56.12,63.65,75.45,5.21,36.65,47.45,16.96,98.52};
	int i , j, n;
	
	n=sizeof(a)/sizeof (float);
	
	for (i=1;i<n;i++){
		j=i-1;
		t=a[i];
		while (j>=0 &&t<a[j]){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=t;
	}
	
	for (i=0;i<n;i++){
		printf("%d %10.2f \n", i, a[i]);
	}
	
	return 0;
}
