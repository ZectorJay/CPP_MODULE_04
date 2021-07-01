/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:11:03 by hmickey           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/26 10:11:46 by hmickey          ###   ########.fr       */
=======
/*   Updated: 2021/06/16 20:45:46 by hmickey          ###   ########.fr       */
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(){};

Enemy::~Enemy(){};

Enemy::Enemy( int hp, std::string const & type ) : _hp(hp), _type(type){}

std::string	Enemy::getType() const { return (_type); }

int			Enemy::getHP() const { return (_hp); }

Enemy & Enemy::operator=( Enemy const & src ){
	if (this != &src){
		_hp = src.getHP();
		_type = src.getType();
	}
	return (*this);
}

void	Enemy::takeDamage( int amount ){
	if (_hp - amount < 0){
		_hp = 0;
	}
	else{ 
	_hp -= amount;
	}
<<<<<<< HEAD
}

std::ostream & operator << (std::ostream & o, Enemy const & src){
	o << "\033[1;38;2;20;255;20m";
	o << src.getType() << " HP: " << src.getHP() << std::endl;
	o << "\033[0m";
	return (o);
=======
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
}