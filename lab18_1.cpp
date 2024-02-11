#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double Lx = min(R1.x+R1.w,R2.x+R2.w) - max(R1.x,R2.x);
	double Ly = min(R1.y,R2.y) - max(R1.y-R1.h,R2.y-R2.h);
	if(Lx <=0) return 0;
	return Lx*Ly ;
}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};
	cout << overlap(R1,R2);
}

/* 1(เงื่อนไขตย.3ไม่ได้)>> double overlap(Rect R1, Rect R2){
	// คำนวณพิกัด x และ y ของมุมบนซ้ายและมุมล่างขวาของสี่เหลี่ยมทับซ้อน
	double x1 = max(R1.x, R2.x);
	double y1 = max(R1.y, R2.y);
	double x2 = min(R1.x + R1.w, R2.x + R2.w);
	double y2 = min(R1.y + R1.h, R2.y + R2.h);

	// คำนวณความกว้างและความสูงของสี่เหลี่ยมทับซ้อน
	double Lx = x2 - x1;
	double Ly = y2 - y1;

	// ตรวจสอบว่ามีการทับซ้อนเชิงบวก (พื้นที่ทับซ้อน) หรือไม่
	if (Lx > 0 && Ly > 0) return Lx * Ly;
	else return 0; // ไม่มีการทับซ้อน
}*/

/* 2 >> double overlap(Rect R1, Rect R2){
	double Lx = max(0.0, min(R1.x + R1.w, R2.x + R2.w) - max(R1.x, R2.x));
	double Ly = max(0.0, min(R1.y, R2.y) - max(R1.y - R1.h, R2.y - R2.h));
	return Lx * Ly;
}*/