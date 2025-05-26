/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:36:24 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/26 18:14:22 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template<typename Templ>
void iter(Templ* array, int lenght, void(*function)(Templ &))
{
    if (array == NULL || lenght <= 0 || function == NULL)
        return;
    for (int i = 0; i <= lenght; i++)
        function(array[i]);
}

template<typename Templ>
void cicle_printer(Templ &i)
{
    std::cout << i << std::endl;
}

template<typename Templ>
void cicle_increment(Templ &i)
{
    i += 3;
    cicle_printer(i);
}

#endif