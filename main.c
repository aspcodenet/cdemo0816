// IO - input outout
// left @
// funktion 
#include <stdio.h> // printf, scanf   TERMINAL


//program sekvens med instruktioner - som vi vill att CPU:n ska köra
// källkod -> gcc -> main.exe -> dator
// källkod -> avr_gcc ->main.hex -> atmega32

inline int calculateSalary(int a /*4 nya bytes*/, int b /*4 nya bytes*/){
    if(a == 12) return 199;
    return a + b;
}


#define clrscr() printf("\e[1;1H\e[2J")
char getch(){
    char c;
    c= getchar();
    return(c);
}

void gotoxy(int x,int y){
    printf("%c[%d;%df",0x1B,y,x);
}


// tre i rad tic tac toe
// 
//    3 * 3
//            y  x     1 2 3 
//                     4 5 6
//                     7 8 9  
char spelPlan[3][3];   // 9 st chars på raken

void writeSpelPlan(){
    clrscr();
    //rita ut
    for(int row = 0; row < 3; row++ ){
        for(int col = 0; col < 3; col++ ){
            printf("%c",spelPlan[row][col]);
        }
        printf("\n");
    }
    
    //
}

int main(){
    char number = '1'; // 49
    for(int col = 0; col < 3; col++ ){
        for(int row = 0; row < 3; row++ ){
            spelPlan[col][row] = number;
            number++;
        }
    }
    // char ch = 'A';
    // printf("%c\n", ch); //'A'
    // printf("%c\n", 65); //'A'
    // printf("%d\n", ch); //65
    // printf("%d\n", 65);//65
    while(1){
        writeSpelPlan();
    }
}