#include <iostream>
#include "intArray.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	try
	{
		intArray array(10);

		array.setElement(0, 20);
		array.setElement(1, 55);
		array.setElement(2, 100);
		array.setElement(3, 17);
		array.setElement(4, 55);
		array.setSizeArray(100);
	}

	catch (const bad_range& e)
	{
		std::cout << e.what() << std::endl;
	}

	catch (const bad_length& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}