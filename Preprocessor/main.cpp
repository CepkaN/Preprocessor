#include<iostream>
#include<Windows.h>
#include"H1.h"

#define _PI 3.14
//#define квакнуть std::cout
//#define прр ;
//#define тым <<

#define forever for(int fori=0;;fori++)   // while(true)
#define begin {
#define end }
#define A 440, 550

#define sum(a,b)a+b            // Работает в одной строчке кода.
#define print_arr(a,s)std::cout<<'[';\
for(int i=0;i<s;i++)\
std::cout<<a[i]<<", ";\
std::cout<<"\b\b ]\n"

#if 5<4 
#define var 666
#elif 5==4
#define var 0
#else
#define show(p)std::cout<<#p<<std::endl
#define var(name)std::cout<<#name<<" = "<<name<<std::endl
#define concat(a,b)a##b

#endif
#ifndef PI
void foo(){}
#endif

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// Простые объекты препроцессора.
	/*std::cout << "Pi = " << _PI << '\n';           // PI заменяется на 3.14 после обработки препроцессором.
	//квакнуть тым "Pi = " тым _PI тым '\n' прр         
	//  _PI = 3; // ОШИБКА!
	Beep(A);  // нота воспроизводится

	forever begin
		std::cout << '.';
		if (fori >= 20)
			break;
		end*/
			

	// Макросы препроцессора.
	/*std::cout << "Введите два числа : ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << '\n';
	std::cout << 'v' << " + " << 'f' << " = " << sum('f', 'v') << '\n';

	const int size = 5;
	int arr[size]{ 54,65,23,77,2};
	print_arr(arr,size);*/

	// Операторы препроцессора.
	show(I love C++);
	n = 7;
	var(n);
	double tmp = 1.25;
	var(tmp);
	std::string b = "xfgmsdnfkg";
	var(b);

	std::cout << "tmp = " << concat(t,mp) << '\n';

	std::cout << _PI << '\n';
#undef _PI

	//std::cout << _PI << '\n';  //ОШИБКА , так как PI не обнаружено
#define _PI 3
	std::cout << _PI << '\n';

	foo();



	return 0;
}