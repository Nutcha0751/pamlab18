#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
	double Lx = min(R1 -> x + R1 -> w, R2 -> x + R2 -> w) - max(R1 -> x, R2 -> x);
	double Ly = min(R1 -> y, R2 -> y) - max(R1 -> y - R1 -> h, R2 -> y - R2 -> h);
	if(Lx <=0) return 0;
	return Lx*Ly ;
}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};
	cout << overlap(&R1,&R2);
}