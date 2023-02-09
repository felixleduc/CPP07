/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:01:55 by fleduc            #+#    #+#             */
/*   Updated: 2023/02/09 15:01:06 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> *stackArray = new Array<int>(5);
	Array<int> *stackArray2 = new Array<int>(3);
	std::cout << "creating array 1 & array 2 on stack:" << std::endl;
	std::cout << "array 1 size = " << stackArray->getSize() << std::endl;
	std::cout << "array 2 size = " << stackArray2->getSize() << std::endl;
	*stackArray = *stackArray2;
	std::cout << std::endl << "assign array 2 to array 1:" << std::endl;
	std::cout << "array 1 size = " << stackArray->getSize() << std::endl;
	std::cout << "array 2 size = " << stackArray2->getSize() << std::endl;
	delete stackArray;
	delete stackArray2;

	Array<int> myArray(4242);
	Array<int> emptyArray;
	std::cout << std::endl << "Accessing both arrays:" << std::endl;
	try
	{
		std::cout << "myArray[0]: " << myArray[0] << std::endl;
		std::cout << "emptyArray[0]: " << emptyArray[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "Assigning random numbers to array:" << std::endl;
	srand(time(NULL));
	try
	{
		for (int i = 0; i < 10; i++)
		{
			const int value = rand() % 100;
			myArray[i] = value;
			std::cout << "myArray[" << i << "]: " << myArray[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
