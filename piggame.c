#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int dice,tempScore,humanTotalScore,computerTotalScore,game=0;
int cont;

void humanTurn(int,int,int);
void computerTurn(int,int,int);
void rollDice(int);
void check(int,int,int);
void isGameEnd(int,int);
void isEndTour(int,int,int);
void ask(int);

// 100 puana ulaşan olmadığı sürece oyun bitmiyor

int main(){
    while(game==0){
        humanTurn(cont,tempScore,dice);
        //computerTurn(dice,tempScore,cont);
        isGameEnd(humanTotalScore,computerTotalScore);
    }
    return 0;
}
// zar atılıyor, kontrol ediliyor , soruluyor, tur bittiyse puana bakılıyor 

void humanTurn(int cont,int tempScore,int dice){
    printf("human turn\n");
    tempScore=0;
    cont=1;
    while(cont==1){
    rollDice(dice);
    check(tempScore,cont,dice);
    ask(cont);
    isEndTour(cont,tempScore,humanTotalScore);
    }
}
//bilgisayar zar atıyor kontrol edilitor geçici skoru 20 nin üzerinde değilse devam ediyor
void computerTurn(int dice,int tempScore,int cont){
    printf("computer turn\n");
    cont=1;
    tempScore=0;
    while(cont==1){
    rollDice(dice);
    check(tempScore,cont,dice);
    if(tempScore>=20){
        cont=0;
    }
    isEndTour(cont,tempScore,humanTotalScore);
    }
}
//zar at ve yazdır
void rollDice(int dice){
    srand(time(NULL));
    dice=rand()%6+1;
    printf("you rolled %d\n",dice);
}
//1 geldiyse turu bitir gelmediyse geçici skora zarı ekle
void check(int tempScore,int cont,int dice){
    printf("zarın degeri %d\n",dice);
    if(dice==1){
    printf("aaaaaaaaa\n");
        cont=0;
        printf("rolled %d and you lost your %d points\n",dice,tempScore);
        tempScore=0;
    }
    else{
        printf("bbbbbbbbb\n");
        tempScore+=dice;
    }
}

void ask(int cont){
    printf("zar atmak istiyorsanız r atmak istemiyorsanız h ye basınız\n");
    scanf("%d",&cont);
}

void isEndTour(int cont,int tempScore,int humanTotalScore){
    if(cont=='h'){
        if(tempScore>=20){
        humanTotalScore+=tempScore;
        }
        else{
            printf("you couldn't earn any point this tour and your totalScore is %d\n",computerTotalScore);
        }
    }
}

void isGameEnd(int humanTotalScore,int computerTotalScore){
    if(humanTotalScore>=100){
        printf("human wins with %d points\n",humanTotalScore);
        game=1;
    }
    else if(computerTotalScore>=100){
        printf("computer wins with %d points\n",computerTotalScore);
        game=1;
    }
    else{
        printf("next turn\n");
        game=0;
    }



}
