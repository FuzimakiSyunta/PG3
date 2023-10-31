#include<stdio.h>

//計算結果
int Total = 0;

int SalaryCalculation(int Worktime,int num,int n) {
	if (Worktime <= 0)
	{
		printf("合計金額\n");
		printf("%d %d\n", Total, n * 1072);

	    return 0;
	}
	Total += num;//最初は100円+Total
	printf("%d ",num);
	printf("%d\n",(n+1)*1072);
	return(Worktime * SalaryCalculation(Worktime - 1, num * 2 - 50, n + 1));
}
int main() {

	SalaryCalculation (8,100,0);//8回
}
