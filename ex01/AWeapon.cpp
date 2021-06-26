/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:49:22 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/16 16:52:44 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(){};

AWeapon::AWeapon( std::string const & name, int apcost, int damage ) :
_name(name), _apcost(apcost), _damage(damage){}

AWeapon::~AWeapon(){};

AWeapon	&	AWeapon::operator=( AWeapon const & src ){
	if (this != &src){
		_name = src.getName();
		_damage = src.getDamage();
		_apcost = src.getAPCost();
	}
	return (*this);
}

AWeapon::AWeapon( AWeapon const & src) { *this = src; };

std::string	AWeapon::getName() const { return (_name); }

int			AWeapon::getAPCost() const { return (_apcost); }

int			AWeapon::getDamage() const { return (_damage); }

