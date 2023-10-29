#include<stdio.h>
#include<Windows.h>
#include<time.h>

typedef void (*PFunc)(int *);

void DispResult(int* s) {
	printf("%d秒待って実行されたよ\n",*s);

}

void setTimeout(PFunc p, int second) {
	//コールバック関数を呼び出す
	Sleep(second*1000);

	p(&second);
}
int main()
{
	srand(time(nullptr));

	int dice = 0;//サイコロの変数
	dice = rand() % 6 + 1;

	printf("整数か偶数か選んでください");
	int number = 0;//入力変数
	scanf_s("%d", &number);

	//3秒まつ
	PFunc p;
	p = DispResult;
	setTimeout(p, 3);
	//奇数か偶数か
	if (number == 1 || number == 3 || number == 5)
	{
		printf("奇数\n");
	}
	else
	{
		printf("偶数\n");
	}
	return 0;
}
