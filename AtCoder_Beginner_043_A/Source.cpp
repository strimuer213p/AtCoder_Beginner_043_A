/*
��蕶
���v���c�t���ɂ�N�l�̎q�������܂��B���ѐ搶�́A�q�����������ɕ��ׁA��l�ڂɂ̓L�����f�B�[��1��,��l�ڂɂ�2��,...,N�l�ڂɂ�N�����邱�Ƃɂ��܂����B�K�v�ȃL�����f�B�[�̌��̍��v�͉��ł��傤?
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