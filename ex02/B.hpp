/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:05:28 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 11:06:52 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <iostream>
# include "Base.hpp"

class B: public Base
{

public:

	B( void );
	B( const B &src );
	~B( void );

	B	&operator=( const B &rhs );

private:

};

std::ostream	&operator<<( std::ostream &ostr, const B &instance );

#endif
