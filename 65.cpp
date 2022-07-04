#define _CRT_SECURE_NO_WARNINGS 1

//一个最优美的图案。

#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

#define PI 3.1415926

int main()
{	
	initgraph(640, 480);

	/*  矩形  */
	setfillcolor(RGB(255,0,0));
	setlinecolor(RGB(255, 0, 0));
	fillrectangle(170, 140, 470, 340);
	
	/*  五角星  */
	float t;
	t = (1 + tan(0.1*PI)*tan(0.1*PI)) / (3 - tan(0.1*PI)*tan(0.1*PI));
	/*  大五角星  */
	//10个点坐标
	float x = 220.0, y = 190.0;//中心点
	float R = 30.0;            //半径25
	float Ax = x, Ay = y - R;
	float Bx = x + R * cos(0.1*PI), By = y - R * sin(0.1*PI);
	float Cx = x + R * cos(0.3*PI), Cy = y + R * sin(0.3*PI);
	float Dx = x - R * cos(0.3*PI), Dy = y + R * sin(0.3*PI);
	float Ex = x - R * cos(0.1*PI), Ey = y - R * sin(0.1*PI);
	
	float AAx = x, AAy = y + R * t;
	float BBx = x - R * t * cos(0.1*PI), BBy = y + R * t * sin(0.1*PI);
	float CCx = x - R * t * cos(0.3*PI), CCy = y - R * t * sin(0.3*PI);
	float DDx = x + R * t * cos(0.3*PI), DDy = y - R * t * sin(0.3*PI);
	float EEx = x + R * t * cos(0.1*PI), EEy = y + R * t * sin(0.1*PI);

	setfillcolor(RGB(255, 255, 0));
	setlinecolor(RGB(255, 255, 0));
	POINT pts[] = { {Ax,Ay},{DDx,DDy},{Bx,By},{EEx,EEy},{Cx,Cy},
	{AAx,AAy},{Dx,Dy},{BBx,BBy},{Ex,Ey},{CCx,CCy} };
	fillpolygon(pts, 10);

	/*  小五角星  */
	float r = 10.0;  //半径为10
	/*  小五角星1  */
	//10个点坐标
	double arct1 = atan(0.6);
	float x1 = 270.0, y1 = 160.0;//中心点
	float A1x = x1 + r * cos((36 + arct1) / 180 * PI),  A1y = y1 - r * sin((36 + arct1) / 180 * PI);
	float B1x = x1 + r * cos((36 - arct1) / 180 * PI),  B1y = y1 + r * sin((36 - arct1) / 180 * PI);
	float C1x = x1 + r * cos((108 - arct1) / 180 * PI), C1y = y1 + r * sin((108 - arct1) / 180 * PI);
	float D1x = x1 - r * cos(arct1 / 180 * PI),         D1y = y1 + r * sin(arct1 / 180 * PI);
	float E1x = x1 - r * cos((72 - arct1) / 180 * PI),  E1y = y1 - r * sin((72 - arct1) / 180 * PI);
	
	float AA1x = x1 - r * t * cos((36 + arct1) / 180 * PI),  AA1y = y1 + r * t * sin((36 + arct1) / 180 * PI);
	float BB1x = x1 - r * t * cos((36 - arct1) / 180 * PI),  BB1y = y1 - r * t * sin((36 - arct1) / 180 * PI);
	float CC1x = x1 - r * t * cos((108 - arct1) / 180 * PI), CC1y = y1 - r * t * sin((108 - arct1) / 180 * PI);
	float DD1x = x1 + r * t * cos(arct1 / 180 * PI),         DD1y = y1 - r * t * sin(arct1 / 180 * PI);
	float EE1x = x1 + r * t * cos((72 - arct1) / 180 * PI),  EE1y = y1 + r * t * sin((72 - arct1) / 180 * PI);

	setfillcolor(RGB(255, 255, 0));
	setlinecolor(RGB(255, 255, 0));
	POINT pts1[] = { {A1x,A1y},{DD1x,DD1y},{B1x,B1y},{EE1x,EE1y},{C1x,C1y},
	{AA1x,AA1y},{D1x,D1y},{BB1x,BB1y},{E1x,E1y},{CC1x,CC1y} };
	fillpolygon(pts1, 10);

	/*  小五角星2  */
	//10个点坐标
	double arct2 = atan(1.0 / 7);
	float x2 = 290.0, y2 = 180.0;//中心点
	float A2x = x2 - r * cos(arct2 / 180 * PI),        A2y = y2 + r * sin(arct2 / 180 * PI);
	float B2x = x2 - r * cos((72 - arct2) / 180 * PI), B2y = y2 - r * sin((72 - arct2) / 180 * PI);
	float C2x = x2 + r * cos((36 + arct2) / 180 * PI), C2y = y2 - r * sin((36 + arct2) / 180 * PI);
	float D2x = x2 + r * cos((36 - arct2) / 180 * PI), D2y = y2 + r * sin((36 - arct2) / 180 * PI);
	float E2x = x2 - r * cos((72 + arct2) / 180 * PI), E2y = y2 + r * sin((72 + arct2) / 180 * PI);
	
	float AA2x = x2 + r * t * cos(arct2 / 180 * PI),        AA2y = y2 - r * t * sin(arct2 / 180 * PI);
	float BB2x = x2 + r * t * cos((72 - arct2) / 180 * PI), BB2y = y2 + r * t * sin((72 - arct2) / 180 * PI);
	float CC2x = x2 - r * t * cos((36 + arct2) / 180 * PI), CC2y = y2 + r * t * sin((36 + arct2) / 180 * PI);
	float DD2x = x2 - r * t * cos((36 - arct2) / 180 * PI), DD2y = y2 - r * t * sin((36 - arct2) / 180 * PI);
	float EE2x = x2 + r * t * cos((72 + arct2) / 180 * PI), EE2y = y2 - r * t * sin((72 + arct2) / 180 * PI);

	setfillcolor(RGB(255, 255, 0));
	setlinecolor(RGB(255, 255, 0));
	POINT pts2[] = { {A2x,A2y},{DD2x,DD2y},{B2x,B2y},{EE2x,EE2y},{C2x,C2y},
	{AA2x,AA2y},{D2x,D2y},{BB2x,BB2y},{E2x,E2y},{CC2x,CC2y} };
	fillpolygon(pts2, 10);

	/*  小五角星3  */
	//10个点坐标
	float x3 = 290.0, y3 = 210.0;//中心点
	float A3x = x3,                   A3y = y3 - r;
	float B3x = x3 + r * cos(0.1*PI), B3y = y3 - r * sin(0.1*PI);
	float C3x = x3 + r * cos(0.3*PI), C3y = y3 + r * sin(0.3*PI);
	float D3x = x3 - r * cos(0.3*PI), D3y = y3 + r * sin(0.3*PI);
	float E3x = x3 - r * cos(0.1*PI), E3y = y3 - r * sin(0.1*PI);
	
	float AA3x = x3,                       AA3y = y3 + r * t;
	float BB3x = x3 - r * t * cos(0.1*PI), BB3y = y3 + r * t * sin(0.1*PI);
	float CC3x = x3 - r * t * cos(0.3*PI), CC3y = y3 - r * t * sin(0.3*PI);
	float DD3x = x3 + r * t * cos(0.3*PI), DD3y = y3 - r * t * sin(0.3*PI);
	float EE3x = x3 + r * t * cos(0.1*PI), EE3y = y3 + r * t * sin(0.1*PI);

	setfillcolor(RGB(255, 255, 0));
	setlinecolor(RGB(255, 255, 0));
	POINT pts3[] = { {A3x,A3y},{DD3x,DD3y},{B3x,B3y},{EE3x,EE3y},{C3x,C3y},
	{AA3x,AA3y},{D3x,D3y},{BB3x,BB3y},{E3x,E3y},{CC3x,CC3y} };
	fillpolygon(pts3, 10);

	/*  小五角星4  */
	//10个点坐标
	double arct4 = atan(0.8);
	float x4 = 270.0, y4 = 230.0;//中心点
	float A4x = x4 - r * cos(arct4 / 180 * PI),         A4y = y4 - r * sin(arct4 / 180 * PI);
	float B4x = x4 + r * cos((108 - arct4) / 180 * PI), B4y = y4 - r * sin((108 - arct4) / 180 * PI);
	float C4x = x4 + r * cos((arct4 - 36) / 180 * PI),  C4y = y4 + r * sin((arct4 - 36) / 180 * PI);
	float D4x = x4 + r * cos((36 + arct4) / 180 * PI),  D4y = y4 + r * sin((36 + arct4) / 180 * PI);
	float E4x = x4 - r * cos((72 - arct4) / 180 * PI),  E4y = y4 + r * sin((72 - arct4) / 180 * PI);

	float AA4x = x4 + r * t * cos(arct4 / 180 * PI),         AA4y = y4 + r * t * sin(arct4 / 180 * PI);
	float BB4x = x4 - r * t * cos((108 - arct4) / 180 * PI), BB4y = y4 + r * t * sin((108 - arct4) / 180 * PI);
	float CC4x = x4 - r * t * cos((arct4 - 36) / 180 * PI),  CC4y = y4 - r * t * sin((arct4 - 36) / 180 * PI);
	float DD4x = x4 - r * t * cos((36 + arct4) / 180 * PI),  DD4y = y4 - r * t * sin((36 + arct4) / 180 * PI);
	float EE4x = x4 + r * t * cos((72 - arct4) / 180 * PI),  EE4y = y4 - r * t * sin((72 - arct4) / 180 * PI);

	setfillcolor(RGB(255, 255, 0));
	setlinecolor(RGB(255, 255, 0));
	POINT pts4[] = { {A4x,A4y},{DD4x,DD4y},{B4x,B4y},{EE4x,EE4y},{C4x,C4y},
	{AA4x,AA4y},{D4x,D4y},{BB4x,BB4y},{E4x,E4y},{CC4x,CC4y} };
	fillpolygon(pts4, 10);
	
	_getch();
	closegraph();
    return 0;
}