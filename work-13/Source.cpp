#include<stdio.h>//1 2 3 5 8 13
int x, y,sum,i=3;//     x1 x2=x1+x1 x3=x2+x1
int Fibonanci();
int Fibonanci(){
	scanf_s("%d", &x);//0
	scanf_s("%d", &y);//1
	printf("%d %d ", x,y);
	while (x >= 0) {
		while (i < 20) {
			sum = x + y;
			printf("%d ", sum);
			x = y;
			y = sum;
			i++;
		}
	}
	return 0;
}
int main() {
	Fibonanci();
}