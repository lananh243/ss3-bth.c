#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {	

int a1, a2, a3, a4, min, max;

printf("Nhap a1, a2, a3, a4 ");
scanf("%d%d%d%d", &a1, &a2, &a3, &a4);

if(a1 > a2) {
	min = a2;
} else {
	min = a1;
}
if(a3 < min) {
	min = a3;
}
if(a4 < min) {
	min = a4;
}

printf("So nho nhat la %d", min);

if(a1 > a2) {
	max = a1;
} else {
	max = a2;
}
if(a3 > max) {
	max = a3;
}
if(a4 > max) {
	max = a4;
}

printf("\nSo lon nhat la %d", max);
	return 0;
}
