#include <iostream>

using namespace std;

inline _int64 Cycles() {
	_asm {
		rdtsc
	}
}

_int64 pft_start;
_int64 pft_finish;

#define SPEED_START_CONSOLE pft_start = Cycles();
#define SPEED_FINISH_CONSOLE pft_finish = Cycles(); cout << pft_finish - pft_start <<" cycles"<< endl;


void main() {
	SPEED_START_CONSOLE

	int mas[25000];

	for (int i = 0; i <= 24999; i++)
	{
		mas[i] = i * 10;
	}

	SPEED_FINISH_CONSOLE
	system("pause");
}