/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:19:47 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 10:49:19 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeAnalyst.hpp"
#include "Utils.hpp"

int	main( int argc, char **argv )
{
	TypeAnalyst typeAnalyst;

	try
	{
		if (argc == 1)
			throw (TypeAnalyst::EmptyInput());
		for (int i = 1; i < argc; i++)
		{
			typeAnalyst.analyseNewInput(argv[i]);
			typeAnalyst.printTypes();
			if (i + 1 < argc)
				std::cout << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		print_help();
	}
}
