/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:58:47 by fleduc            #+#    #+#             */
/*   Updated: 2023/02/09 13:25:04 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
    int     x = 2, y = 3;
    char    i = '1', j = '2';
    std::string one = "yo", two = "bro";

    std::cout << "Minimum between '1'(49) and '2'(50): " << std::endl << ::min<char>(i, j) << std::endl;
    std::cout << "Maximum between 2 and 3: " << std::endl << ::max<int>(x, y) << std::endl;
    std::cout << "Swap strings one and two: " << std::endl << "Before: one = '" << one << "' two = '" << two << "'" << std::endl;
    ::swap<std::string>(one, two);
    std::cout << "After: one = '" << one << "' two = '" << two << "'" << std::endl;

    // int a = 2;
    // int b = 3;
    // ::swap(a, b);
    // std::cout << "a = " << a << ", b = " << b << std::endl;
    // std::cout << "min(a, b) = " << ::min( a, b) << std::endl;
    // std::cout << "max(a, b) = " << ::max( a, b) << std::endl;
    // std::string c = "chaine1";
    // std::string d = "chaine2";
    // ::swap(c, d);
    // std::cout << "c = " << c << ", d = " << d << std::endl;
    // std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    // std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

    return 0;
}
