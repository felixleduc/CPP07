/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:26:02 by fleduc            #+#    #+#             */
/*   Updated: 2023/02/09 14:01:26 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void    iter(T *array, size_t len, void (func)(T &arg))
{
    for (size_t i = 0; i < len; i++)
        func(array[i]);
}

template <typename T>
void    increment(T &x)
{
    x += 1;
}

#endif
