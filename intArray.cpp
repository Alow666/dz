#include "intArray.h"

intArray::intArray() = default;

intArray::intArray(int size) : _size(size)
{
	if (_size < 2)
	{
		throw bad_length();
	}

	_array = new int[_size] {};

	for (int i = 0; i < _size; i++)
	{
		_array[i] = 0;
	}
}

intArray::intArray(const intArray& other)
{
	this->_size = other._size;

	this->_array = new int[this->_size];

	for (int i = 0; i < this->_size; i++)
	{
		this->_array[i] = other._array[i];
	}

}

intArray::~intArray()
{
	delete[] _array;
	delete[] newArray
}

void intArray::setElement(int index, int value)
{
	if (index<0 || index>_size)
	{
		throw bad_range();
	}
	_array[index] = value;
}

int intArray::getElement(int index) const
{
	if (index<0 || index>_size)
	{
		throw bad_range();
	}
	return _array[index];
}

void intArray::setSizeArray(int newSize)
{
	int* newArray = new int[newSize];

	for (int i = 0; i < newSize; i++)
	{
		if (i < _size)
		{
			newArray[i] = _array[i];
		}
		else {
			newArray[i] = 0;
		}
	}
	delete[]_array;
	_array = newArray;
	_size = newSize;
}

void intArray::infoArray() const
{
	for (int i = 0; i < _size; i++)
	{
		std::cout << _array[i] << std::endl;
	}
}

int intArray::getSizeArray() const
{
	return _size;
}

void intArray::FindValue(int value) const
{
	bool too = false;

	for (int i = 0; i < _size; i++)
	{
		if (_array[i] == value)
		{
			too = true;
			std::cout << "Элемент " << value << " находится в ячейке под индексом: " << i << std::endl;
		}

	}
	if (too == false)
	{
		std::cout << "Данного элемента нету в контейнере!" << std::endl;
	}
}

void intArray::deleteElement(int index)
{
	if (index<0 || index>_size)
	{
		throw bad_range();
	}
	_array[index] = 0;
}
