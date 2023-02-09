/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:26:35 by fleduc            #+#    #+#             */
/*   Updated: 2023/02/09 14:00:28 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define ARR_LEN 4

int main(void)
{
    int     i_arr[5] = {1, 2, 3, 4};
    char    c_arr[5] = {'a', 'b', 'c', 'd'};

    std::cout << "int array before iter:" << std::endl;
    for (size_t i = 0; i_arr[i]; i++)
        std::cout << i_arr[i] << " ";
    std::cout << std::endl;
    iter<int>(i_arr, ARR_LEN, increment);
    std::cout << "int array after iter:" << std::endl;
    for (size_t i = 0; i_arr[i]; i++)
        std::cout << i_arr[i] << " ";
    std::cout << std::endl << std::endl;
    std::cout << "char array before iter:" << std::endl;
    for (size_t i = 0; c_arr[i]; i++)
        std::cout << c_arr[i] << " ";
    std::cout << std::endl;
    iter<char>(c_arr, ARR_LEN, increment);
    std::cout << "char array after iter:" << std::endl;
    for (size_t i = 0; c_arr[i]; i++)
        std::cout << c_arr[i] << " ";
    std::cout << std::endl;
    return 0;
}
