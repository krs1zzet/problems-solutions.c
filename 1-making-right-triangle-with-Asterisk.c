#include <stdio.h>

int main (int argc, char **argv){
	
	int i,j,limit;
	printf("kac satir dik ücgen istediğinizi girin");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}


	
	return 0;
}
