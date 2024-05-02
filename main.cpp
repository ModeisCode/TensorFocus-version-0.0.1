#include <iostream>
#include "Tensor.h"

int main()
{
	Size size;
	size.x = 3;
	size.y = 1;

	Tensor<int> tensor(size);
	std::cout << "Tensor_data:" << tensor.getData().at(0).at(0) << std::endl;
}
