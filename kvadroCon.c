#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define _WIN32_WINNT_WiN7 0x0601 //для win7 


   int main ( ){

   // HWND hwnd = GetConsoleWindow();//дескриптор консольного окна
   // HWND hwnd = GetDesktopWindow();//дескриптор рабочего стола

    HWND hwnd = FindWindowW(NULL,L"Калькулятор");//находит окно с названием "Калькулятор"
    //  HWND hwnd = FindWindowW(NULL,L"........");//находит окно с названием 

	  HDC dc = GetDC (hwnd);// для рисования на самом окне 
	                      //необходимо получить контекст устройства
	   
   SelectObject( dc,GetStockObject(DC_BRUSH) );// функция GetStockObject() возвращает	дескиптор одного из стандартных объектов,в данном случае кисть(BRASH). 
//SelectObject устанавливает полученый объект в качестве текущего объекта.
  
   SetDCBrushColor(dc,RGB(255,0,255));//Устанавливает цвет для текущего оъекта Rectangle
   Rectangle(dc,50,50,100,100);

   SetDCBrushColor(dc,RGB(25,100,255));//Устанавливает цвет для текущего оъекта Ellipse
   Ellipse(dc,200,100,300,200);




    return 0;
  }
