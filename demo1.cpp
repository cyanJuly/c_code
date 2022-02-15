#include <stdio.h>

int main(){
	int i=100;
	int s;
	for(int i=100;i>=100 && i<=200;i++){
		for(int j=2;j<i;j++){
			s=i%j;
			if(s==0){
				break;
			} 
		}
		if(s!=0){
			printf("%d ",i);
		}
	}
	return 0;
}
