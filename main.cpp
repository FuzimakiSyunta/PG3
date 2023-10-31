#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<functional>

typedef void (*PFunc)(int *);

void DispResult(int* s) {
	printf("%d秒待って実行されたよ\n",*s);

}

void setTimeout(PFunc p, int second) {
	//コールバック関数を呼び出す
	Sleep(second*1000);

	p(&second);
}

void WinResult(int* s)
{
	printf("当たり\n");
}
void LoseResult(int* s)
{
	printf("はずれ\n");
}

int main(int argc,const char*argv[])
{
	srand(time(nullptr));

	int number = 0;//入力変数
	printf("半か丁か\n");

	scanf_s("%d", &number);
	//3秒まつ
	PFunc p;
	p = DispResult;
	setTimeout(p, 3);

	int dice = 0;//サイコロの変数
	auto fx = [=]() {return dice + rand() % 6 + 1; };

	if (fx() % 2 == number % 2)
	{
		p = WinResult;
		setTimeout(p, 3);
	}
	else
	{
		p = LoseResult;
		setTimeout(p, 3);
	}
	
	return 0;
}
