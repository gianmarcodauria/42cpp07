/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:43:15 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/30 17:54:01 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    
    if (argc > 1)
        return 1;
    
    try
    {
        //defining an array -> test
        Array<int> _array(6);
        for (unsigned int i = 0; i < _array.size(); ++i)
            _array[i] = i * 10;
        
        for (unsigned int i = 0; i < _array.size(); ++i)
            std::cout << "a[" << i << "] = " << _array[i] << std::endl;


        //copying an array -> test
        Array<int> _b = _array;
        //after copying let's modify _b
        _b[0] = 1000;

        std::cout << "a[0] = " << _array[0] << " should not change" << std::endl;
        std::cout << "b[0] = " << _b[0] << " changed" << std::endl;


        //testing out of range -> will launch an exception!
        std::cout << _array[10] << std::endl;

        
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
