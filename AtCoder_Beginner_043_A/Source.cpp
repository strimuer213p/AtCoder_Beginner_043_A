/*
問題文
競プロ幼稚園にはN人の子供がいます。えび先生は、子供たちを一列に並べ、一人目にはキャンディーを1個,二人目には2個,...,N人目にはN個あげることにしました。必要なキャンディーの個数の合計は何個でしょう?
*/
#include<iostream>

int main() {
	int num,sum=0;

	std::cin >> num;

	for (int i = 1; i <= num; i++) {
		sum += i;
	}

	std::cout << sum << std::endl;

	return 0;
}