#include <stdio.h>
int main(){
	int so,thousand, hundred, dozen, unit;
	printf (" nhap vao so nguyen:");
	scanf ("%d",&so);
    unit = so%10;
	dozen = (so/10)%10;
	hundred = (so/100)%10;
	thousand = so/1000;
	printf("Tong cua day so la: %d\n",unit+dozen+hundred+thousand);
	printf("Day so dao nguoc la: %d\n",unit*1000+dozen*100+hundred*10+thousand);
}
