#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int i,j,M,N,X,a,b,snake=1,frame[100][100],game=0;
    char dir;
	srand(time(NULL));
	printf("N satir M sutun X yem giriniz\n");
	scanf("%d",&N);
	scanf("%d",&M);
	scanf("%d",&X);



	//fonk 0
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			frame[N][M]=0;
		}
	}
	int x=N/2, y= M/2;

	frame[x][y]=1;// SORUN

	//yemler---------------------
	for(i=0;i<X;i++){
		a=rand()%N;
		b=rand()%M;
		if(frame[a][b]==0){
		frame[a][b]=-1;
		}
	}
	
//***********************************************

	//TABLO
	while(game==0){

	for(i=0;i<M+2;i++){
		printf("#");
	}
	printf("\n");

	for(i=0;i<N;i++){
		printf("#");
		for(j=0;j<M+2;j++){
			if(frame[i][j]==0){
				printf(" ");}
			if(frame[i][j]==-1){//yem yazdırması
				printf("0");			
			}
			if(frame[i][j]==1){
				printf("%d",snake);//başlangıç yılan
			}
			if(j==M-1){
				printf("#");
			}
		}
		printf("\n");
	}
	for(i=0;i<M+2;i++){
		printf("#");
        }
        
        
        //yon bilgisi
    printf("\nyon giriniz(W,A,S,D)\n");
    	scanf("%s",&dir);
    	if(65<=dir&&dir<=90){
    		dir+=32;
		}
		//hareket
	if(dir=='w'){
		x--;
		frame[x][y]=1;
		frame[x+snake][y]=0;
	}
	if(dir=='s'){
		x++;
		frame[x][y]=1;
		frame[x-snake][y]=0;
	}
	if(dir=='a'){
		y--;
		frame[x][y]=1;
		frame[x][y+snake]=0;
	}
	if(dir=='d'){
		y++;
		frame[x][y]=1;
		frame[x][y-snake]=0;
	}
	//temizlik
	
	
	
	
	
	}
	
	//Hareket




	


		
    //	printf("%c\n",dir);
	
    
    
    
	/*
	yılan 1
	yemek 0
	yılan büyüklüğü for ile aç 1 den başlat
	yılan 1 2 3 4 5 6 
	yılan 1 1 1 1 1 1
	yılansayac=1 printf a a++
	
	1 printf 
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	10oyun masası boş
	for(i=0;i<M+M+2;i++){
		printf("#");
	}
	printf("\n");
	for(i=0;i<N;i++){
		printf("#");
		for(j=0;j<M;j++){
			if(frame[i][j]==0){
				printf("_ ");
			}
			if(j==M-1){
				printf("#");
			}
		}
		printf("\n");
	}
	for(i=0;i<M+M+2;i++){
		printf("#");
        }
    
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/* KONTROL
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
		printf("%d",frame[i][j]);
		}
		printf("\n");
	}
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;
}



