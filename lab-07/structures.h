#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>

void Point(int a){
    srand(time(NULL));
    bool xsign, ysign; // true if negative
    double x, y;
    int arrX[a];
    int arrY[a];

    for(int i=0; i<a; i++)
	{
		x = rand()%100;
		y = rand()%100;
		xsign = rand()%2;
		ysign = rand()%2;
		
		if(xsign) x *= -1;
		if(ysign) y *= -1;
		
		arrX[i] = x;
		arrY[i] = y;		
	}	
}

void fillArr(double x, double y){
    int a;
    std::cin>>a;
    int Arr[a];



}
