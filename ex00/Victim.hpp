/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:53:23 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/11 14:03:33 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include "Sorcerer.hpp"

class Victim{
	
public:

	Victim( std::string name );
	virtual ~Victim();
	Victim ( Victim & src );

	Victim &			operator = ( Victim & src );
	std::string const	get_name() const;
	virtual void		getPolymorphed() const;

protected:

	Victim(){};
	std::string	_name;

};

std::ostream & operator << ( std::ostream & o, Victim & i );

#endif