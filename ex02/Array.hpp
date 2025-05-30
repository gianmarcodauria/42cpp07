/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:18:12 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/30 18:04:40 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <cstddef>


template<typename T>
class Array
{
    private:
        T* _elements_in_array;
        unsigned int _size;

    public:
        Array()
        {
            _elements_in_array = NULL;
            _size = 0;
            std::cout << "Default array created" << std::endl;
        }
        
        Array(unsigned int n)
        {
            _elements_in_array = new T[n];
            _size = n;
            std::cout << "Array with unisgned int n parameters created" << std::endl;
        }

        Array(const Array& copy)
        {
            *this = copy;
        }

        Array& operator=(const Array& copy)
        {
            if (this != &copy)
            {
                delete[] _elements_in_array;
                _size = copy._size;
                _elements_in_array = new T[_size];
                for (unsigned int i = 0; i < _size; ++i)
                    _elements_in_array[i] = copy._elements_in_array[i];
            }
            return *this;
        }

        ~Array()
        {
            std::cout << "DESTROYER CALLED" << std::endl;
            delete[] _elements_in_array;

        }

        T& operator[](unsigned int i) //versione modificabile
        {
            if (i >= _size)
                throw std::out_of_range("I out of bounds");
            return _elements_in_array[i];
        }

        const T& operator[](unsigned int i) const
        {
            if (i >= _size)
                throw std::out_of_range("I out of bounds");
            return _elements_in_array[i];
        }

        unsigned int size() const
        {
            return _size;
        }        
};

#endif
