/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:06:02 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 11:06:03 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include <iostream>
# include "Base.hpp"

class C: public Base
{

public:

	C( void );
	C( const C &src );
	~C( void );

	C	&operator=( const C &rhs );

private:

};

std::ostream	&operator<<( std::ostream &ostr, const C &instance );

#endif
