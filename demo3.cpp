#include <stdio.h>

int main(){
	int i=1000;
	while(i>=1000 && i<=2000){
		if(i%4==0 && i%100!=0 || i%400==0){
			printf("%dÊÇÈòÄê£¡",i);
		}
		i++;
	}
	return 0;
}
