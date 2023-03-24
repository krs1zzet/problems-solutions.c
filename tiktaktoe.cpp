#include <iostream>
#include <ctime>


void drawBoard(char *table);
void playerTurn(char *table,char player);
void computer();
bool checkwin();
bool checktie();


int main(){
    char table[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player= 'X';
    char comp = 'O';
    bool running = true;
    drawBoard(table);
    while(running){
        playerTurn(table,player);
        drawBoard(table);

    }
 

    return 0;
}
void drawBoard(char *table){
    std::cout<<'\n';
    std::cout<<"     |     |     " <<'\n';
    std::cout<<"  "<<table[0]<<"  |  "<<table[1]<<"  |  "<<table[2]<<"   " <<'\n';
    std::cout<<"_____|_____|_____" <<'\n';
    std::cout<<"     |     |     " <<'\n';
    std::cout<<"  "<<table[3]<<"  |  "<<table[4]<<"  |  "<<table[5]<<"   " <<'\n';
    std::cout<<"_____|_____|_____" <<'\n';
    std::cout<<"     |     |     " <<'\n';
    std::cout<<"  "<<table[6]<<"  |  "<<table[7]<<"  |  "<<table[8]<<"   " <<'\n';
    std::cout<<"     |     |     " <<'\n';

    std::cout<<'\n';
}
void player(char *table,char player){
    int number;
    do{
    std::cout<<"please enter your choice"<<'\n';
    std::cin >> number;
    number--;
    if(table[number]==' '){
        table[number]=player;
        break;
    }
    }while((number < 0) || (number > 8));

}
