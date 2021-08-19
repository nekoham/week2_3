#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double w, h;
	printf("Please enter your weight(Kilogram) : ");
	scanf("%lf", &w);
	printf("Please enter your height(Metre) : ");
	scanf("%lf", &h);
	double bmi = w / (h * h);
	printf("Your bmi is %.1lf\n", bmi);

	if (bmi >= 30.0) {
		printf("อ้วนเกินไป");
	}
	else if (bmi <= 29.9 && bmi >= 25.0) {
		printf("สูงกว่ามาตรฐาน");
	}
	else if (bmi <= 24.9 && bmi >= 18.5) {
		printf("ปกติ");
	}
	else {
		printf("น้ำหนักต่ำกว่าเกณฑ์");
	}

	return 0;
}
