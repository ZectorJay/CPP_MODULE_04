/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:21:20 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 12:37:51 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria ( std::string const & type) : _xp(0), _type(type) {}

AMateria::AMateria ( AMateria const & src) { this->operator=(src); }

AMateria &			AMateria::operator= ( AMateria const & src ){
	if (this != & src){
		_xp = src.getXP();
		_type = src.getType();
	}
	return (*this);
}

std::string const &	AMateria::getType() const { return (_type); }

unsigned int		AMateria::getXP() const { return (_xp); }

void				AMateria::use ( ICharacter & target ){
	useMessage(target);
	this->_xp += 10;
}