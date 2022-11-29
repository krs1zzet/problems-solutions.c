#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int ilkMatris[5][5],ikinciMatris[5][5],toplamMatris[5][5],i,j,toplamSatir=0,toplamSutun=0,trans[5][5];
	srand(time(NULL));
	printf("ilk matris\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			ilkMatris[i][j]=rand()%10;
			ikinciMatris[i][j]=rand()%10;
			printf("%d ",ilkMatris[i][j]);
		}
		printf("\n");
	}
	printf("ikinci matris\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",ikinciMatris[i][j]);
		}
		printf("\n");
	}
	printf("toplam matris\n");
	for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		toplamMatris[i][j]=ilkMatris[i][j]+ikinciMatris[i][j];
    		printf("%d ",toplamMatris[i][j]);
	}
	printf("\n");
	
}
	for(i=0;i<5;i++){
		toplamSutun=0;
		toplamSatir=0;
		for(j=0;j<5;j++){
		toplamSatir+=toplamMatris[i][j];
		toplamSutun+=toplamMatris[j][i];
}
		printf("%d. satırının toplami: %d\n",i+1,toplamSatir);
		printf("%d. sutununun toplami: %d\n",i+1,toplamSutun);
}

	return 0;
}
