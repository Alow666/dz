#pragma once
#include <iostream>
#include <exception>

class bad_range : public std::exception //выход ха предел массива 
{
public:
	virtual const char* what() const noexcept override
	{
		return "Index is out of range";
	}
};

class bad_length : public std::exception//Недопустимая длина
{
public:
	virtual const char* what() const noexcept override
	{
		return "Provided length is invalid";
	}
};

class intArray
{
private:

	int _size;//Размер массива 
	int* _array;//Ссылка на массив

public:

	intArray();

	intArray(int size);

	intArray(const intArray& other);

	~intArray();

	void setElement(int index, int value);

	int getElement(int index) const;

	void setSizeArray(int newSize);

	void infoArray() const;

	int getSizeArray() const;

	void FindValue(int value) const;

	void deleteElement(int index);
};