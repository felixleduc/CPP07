/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:58:44 by fleduc            #+#    #+#             */
/*   Updated: 2023/02/09 13:19:11 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void    swap(T &x, T &y)
{
    T   tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T   min(T x, T y)
{
    return ((y <= x)? y: x);
}

template <typename T>
T   max(T x, T y)
{
    return ((y >= x)? y: x);
}

#endif
