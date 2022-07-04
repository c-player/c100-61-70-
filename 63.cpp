#define _CRT_SECURE_NO_WARNINGS 1

//ª≠Õ÷‘≤ellipse

#include <conio.h>
#include <graphics.h>

int main()
{
	initgraph(640, 480);
	ellipse(200, 200, 500, 350);
	_getch();
	closegraph();
    return 0;
}