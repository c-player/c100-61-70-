#define _CRT_SECURE_NO_WARNINGS 1

//¿˚”√ellipse and rectangle ª≠Õº

#include <conio.h>
#include <graphics.h>

int main()
{
	int i, j;
	initgraph(640, 480);
	for (i = 50, j = 20; i < 320, j < 240; i += 40, j += 30)
	{
		rectangle(i, j, 640 - i, 480 - j);
		ellipse(i, j, 640 - i, 480 - j);
	}
	_getch();
	closegraph();
    return 0;
}