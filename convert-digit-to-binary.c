#include <stdio.h>


int main (int argc, char **argv){
	

	int sayi,geciciSayi,i=0;
	char bitArray[32];	
	printf("sayi gir");
	scanf("%d",&sayi);
	geciciSayi=sayi;
	
	while(geciciSayi!=0){
		
    if(geciciSayi%2==0){
			bitArray[i]='0';
    }
		else{
			bitArray[i]='1';
		}
		i++;
		geciciSayi/=2;
	}
	
  printf("%d sayisinin bit karsiligi:",sayi);
	
  while(i>=0){
		printf("%c",bitArray[i]);
		i--;
	}
	
	


return 0;
 }
