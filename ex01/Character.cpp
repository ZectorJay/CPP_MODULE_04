/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:08:37 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/16 20:49:49 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){}

Character::~Character(){}

Character::Character ( std::string const & name ) : _ap(40), _name(name), _weapon(NULL) {}

Character::Character ( Character const & src){	*this = src; }

AWeapon	*	Character::getWeapon() const { return (_weapon); }

std::string	Character::getName() const { return (_name); }

int			Character::getAp() const { return (_ap); }

Character & Character::operator= ( Character const & src){
	if (this != &src){
		_weapon = src.getWeapon();
		_name = src.getName();
		_ap = src.getAp();
	}
	return (*this);
}

void		Character::recoverAP(){
	if (_ap + 10 > 40)
		_ap = 40;
	else
		_ap += 10;
}

void		Character::equip( AWeapon * weapon ){ _weapon = weapon; }

void		Character::attack( Enemy * target ){
	if (_ap - _weapon->getAPCost() < 0){
		std::cout<<"\033[1;38;2;255;0;0m";
		std::cout<<"Not enough energy to attack\033[0m"<<std::endl;
	}
	else if (!_weapon){
		std::cout<<"\033[1;38;2;255;0;0m";
		std::cout<<"Can't attack without weapon\033[0m"<<std::endl;
	}
	else if (!target){
		std::cout<<"\033[1;38;2;255;0;0m";
		std::cout<<"target probably dead\033[0m";

	}
	else {
		std::cout<<_name<<" attacks "<<target->getType();
		std::cout<<" with a "<<_weapon->getName()<<std::endl;
		_weapon->attack();
		target->takeDamage(_weapon->getDamage());
		if (target->getHP() <= 0)
			delete target;
		_ap -= _weapon->getAPCost();
	}
}

std::ostream & operator << ( std::ostream & o, Character const & src ){
	if (!src.getWeapon())
		o<<src.getName()<<" has "<<src.getAp()<<" AP and unarmed"<<std::endl;
	else {
		o<<src.getName()<<" has "<<src.getAp()<<" AP and wields ";
		o<<src.getWeapon()->getName()<<std::endl;
	}
	return (o);
}