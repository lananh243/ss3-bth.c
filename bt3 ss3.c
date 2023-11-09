#include<stdio.h>
int main(){
	float  diemtoan, diemvan, diemanh;
	printf("Nhap diem toan va diem van va diem anh:");
	scanf("%f%f%f",&diemtoan,&diemvan,&diemanh);
	float tongdiem = diemtoan+diemvan+diemanh;
	float diemtrungbinh = (diemtoan+diemvan+diemanh)/3;
	printf("Tong diem cua 3 mon:%.2f va diem trung binh cua 3 mon:%.2f",tongdiem,diemtrungbinh);	
}

