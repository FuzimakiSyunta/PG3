#include<stdio.h>

template<typename T>

T Min(T a, T b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
	
}


template<>
char Min<char>(char a, char b) {

	printf("数字以外は代入できません\n");

	return a;
}



int main(void) {
	char c='a';
	char d='b';
	printf("%d\n",Min<int>(114,514));//628 関数テンプレートを利用
	printf("%f\n", Min<float>(11.4f, 51.4f));//-40.0 特殊化(オーバーライド)を利用
	printf("%lf\n", Min<double>(11.4f, 51.4f));//double
	Min(c,d);

	return 0;
}