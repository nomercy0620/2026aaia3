#include <iostream>
int main()
{

	int N;
	std::cin >> N;
	int b = N ,ans = 0;
	while (N>0){
		ans = ans-10+N%10;
		N = N / 10;
	}
	std::cout << b << ans << b+ans;
}
