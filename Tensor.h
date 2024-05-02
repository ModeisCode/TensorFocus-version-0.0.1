#pragma once
#include "TensorUtils.h"
#include <iostream>
#include <vector>

template<typename T>
class Tensor
{

public:

	Tensor(Size size) {
		this->size = size;
	}

	Size getSize() { return this->size; }

	std::vector<std::vector<T>> getData() { return this->data; }

	Tensor operator+(const Tensor& other) const {
		if (this->size == other->size) {
		
		}
		Tensor<T> total(this->size);
		
		for (int i = 0; i < this->size.x; i++)
		{
			for (int i = 0; i < this->size.x; i++)
			{
				
			}
		}

		return Tensor();
	}

private:
	Size size;
	std::string dataType;
	std::vector<std::vector<T>> data;
	//void generateTensor();

protected:

};

