#include<stdio.h>

int SalaryCalculation(int time) {
	if (time <= 1)
	{
		return(time);
	}
	return(time * SalaryCalculation(time-50));
}
int main() {
	int num = 2;
	int result;

	result = SalaryCalculation(num);
	printf("%d時間働いて給料は%d\n", num, result);

	return(0);
}
