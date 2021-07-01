/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:03:05 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 13:39:26 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

public:

	explicit AMateria(std::string const & type);
	virtual ~AMateria() {};
	AMateria( AMateria const & src );

	AMateria & operator= ( AMateria const & src );

	std::string const & getType() const; //Returns the materia type
	unsigned int 		getXP() const; //Returns the Materia's XP

	virtual AMateria*	clone() const = 0;
	virtual void		use( ICharacter &	target );

protected:

	unsigned int	_xp;
	std::string		_type;

	AMateria() : _xp(0), _type("") {}
	virtual void		useMessage( ICharacter & target ) = 0;
	
};

#endif