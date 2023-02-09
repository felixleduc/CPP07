/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:02:23 by fleduc            #+#    #+#             */
/*   Updated: 2023/02/09 14:51:05 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
  private:
    T             *_array;
    unsigned int  _size;
  public:
    Array(void);
    Array(unsigned int n);
    Array(const Array& cp);
    ~Array();

    Array&  operator=(const Array<T>& rhs);
    T&      operator[](unsigned int i);

    unsigned int  getSize(void);
};

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {

}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
  _array = new T[n];
  for (size_t i = 0; i < n; i++)
    _array[i] = 0;
}

template <typename T>
Array<T>::Array(const Array<T>& cp) {
  *this = cp;
}

template <typename T>
Array<T>::~Array() {
  delete [] _array;
}

template <typename T>
Array<T>&  Array<T>::operator=(const Array<T>& rhs) {
  this->_size = rhs._size;
  delete [] this->_array;
  this->_array = new T[rhs._size];
  for (size_t i = 0; i < this->_size; i++)
    this->_array[i] = rhs._array[i];
  return (*this);
}

template <typename T>
T&  Array<T>::operator[](unsigned int i) {
  if (i >= _size)
    throw std::out_of_range("Array: index is out of range");
  return (_array[i]);
}

template <typename T>
unsigned int  Array<T>::getSize(void) {
  return (_size);
}

#endif
