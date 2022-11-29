#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(){
	
	int N,i=0,yas,a=10,k,m,b,c,n,l,x;
	int yasAraliklari[12];
	int yaslar[N];
	printf("kisi sayisi girin\n");
	scanf("%d",&N);
	for(l=0;l<=N;l++){
		yaslar[l]=0;
	}
	for(x=0;x<=11;x++){
		yasAraliklari[x]=0;
		}
	while(i<N){
		printf("girdiginiz kisilrtin yaslarini girin\n");
		scanf("%d",&yaslar[i]);
		for(k=0;k<12;k++){
			if(yaslar[i]>=a){
				a=a+10;
			}
			else{
				yasAraliklari[k]+=1;
				k=12;
				a=10;
			}
		}
		i=i+1;
	}
	c=0;
	b=9;
	for(m=0;m<12;m++){
		printf("%d - %d yas arasinda %d kisi vardir\n",c,b,yasAraliklari[m]);
		c=c+10;
		b=b+10;
	}
return 0;	
}
