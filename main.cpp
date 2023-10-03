#include<stdio.h>

template<typename T>

T add(T a, T b) {
	return a+b;
}

template<>
float add<float>(float a, float b) {//オーバーロード特殊化
	return a - b;
}

float add(float a, float b){//オーバーロード多重定義
	return a * b;
}

int main(void) {
	printf("%d\n",add<int>(114,514));//628 関数テンプレートを利用
	printf("%f\n", add<float>(11.4f, 51.4f));//-40.0 特殊化(オーバーライド)を利用
	printf("%f\n", add(11.4f, 51.4f));//585.96 多重定義(オーバーロード)を利用

	return 0;
}