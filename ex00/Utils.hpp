/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:45:57 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 10:47:31 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include <limits>
#include <cmath>

bool		ft_isdigit(char c);
void		print_help( void );
bool		canConvertToInt( double number );
bool		canConvertToFloat( double number );
const char	*printDotZero( double number );

#endif
