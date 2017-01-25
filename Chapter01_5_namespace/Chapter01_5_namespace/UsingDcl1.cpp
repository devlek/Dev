#include<iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc; // 해당 함수를 지정 namespace에서 찾아라.
	HybFunc();
	return 0;
}