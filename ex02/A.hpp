/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:05:13 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 11:06:54 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>
# include "Base.hpp"

class A: public Base
{

public:

	A( void );
	A( const A &src );
	~A( void );

	A	&operator=( const A &rhs );

private:

};

std::ostream	&operator<<( std::ostream &ostr, const A &instance );

#endif
