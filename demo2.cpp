#include <stdio.h>

int main(){
	int i=1;
	int s=0;
	while(i<10){
		for(int j=i;j<=9;j++){
			s=i*j;
			printf("%d*%d=%d ",i,j,s);
		}
		printf("\n");
		i++;
	}
	return 0;
} 
