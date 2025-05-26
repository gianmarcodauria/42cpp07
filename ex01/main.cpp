/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:59:07 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/26 18:12:39 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc > 1)
        return 1;


    
    std::string string_array[] = {"ciao", "bello", "come", "ti chiami"};
    iter(string_array, 3, cicle_printer);

    int integer_array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    iter(integer_array, 7, cicle_increment);
    
}