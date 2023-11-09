#include<stdio.h>
int main(){
	int r;
	float PI = 3.14;
	printf("Nhap r cua hinh tron:");
	scanf("%d",&r);
	float area = r*r*PI;
	float perimeter = (2*r)*PI;
	printf("Hinh tron co dien tich:%.f va chu vi:%.f",area,perimeter);
}
