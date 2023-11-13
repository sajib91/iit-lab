#include<iostream>
#include<conio.h>
#include<dos.h>
#include<windows.h>
#include<time.h>

#define SCREEN_WIDTH 100
#define SCREEN_HEIGHT 30
#define WIN_WIDTH 80

using namespace std;

HANDLE consol = GetStdHandle(STD_OUTPUT_HANDLE);
COORD Cursorpoition;

int enemyY[3];
int enemyX[3];
int enemyFlag[3];
char car[4][4] = { ' ','*','*','',
                   '*','*','*','*',
                   ' ','*','*',' ',
                   '*','*','*','*'};


          int carpos = WIN_WIDTH/2;
          int score = 0;

      void gotoxy(int x, int y){
        Cursorpoition.X = x;
        Cursorpoition.Y = y;
        SetConsoleCursorPosition(consol,Cursorpoition);
      }             
      void setcursor(bool visible, DWORD size){
        if(size == 0)
           size = 20;

           CONSOLE_CURSOR_INFO lpCursor;
           lpCursor.bVisible = visible;
           lpCursor.dwSize = size;
           SetConsoleCursorInfo(consol,&lpCursor);
      }
      void drawBorder(){
        for(int i=0; )
      }