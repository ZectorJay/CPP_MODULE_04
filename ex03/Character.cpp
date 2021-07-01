/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:15:44 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 13:40:44 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const & name ) : _name(name) {
	for (int i = 0 ; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character (){
	for (int i = 0 ; _inventory[i] != NULL && i < 4; i++) {
		delete _inventory[i];
		_inventory[i] = NULL;
	}
 }

Character &			Character::operator= ( Character const & src ){
	if (this != &src){
		_name = src.getName();
		this->~Character();
		for (int i = 0; src.getMateria(i) != NULL; i++)
			this->_inventory[i] = _inventory[i]->clone();
	}
	return (*this);
}

AMateria*			Character::getMateria( int idx ) const {
	 return (_inventory[idx]);
}

std::string	const &	Character::getName() const { return (_name); }

void				Character::equip( AMateria* m ){
	int i = 0;
	while (_inventory[i] != NULL && i < 4)
		i++;
	if ( i < 4 && _inventory[i] == NULL)
		_inventory[i] = m;
	else {
		std::cout<<RED<<"Inventory is full"<<RESET<<std::endl;
	}
}

void				Character::unequip ( int idx ){
	if ( idx < 4 && idx >= 0 )
		_inventory[idx] = NULL;
	else {
		std::cout<<RED<<"Inventory have only 4 slots."<<std::endl;
		std::cout<<"You can't unequip from "<<idx<<"th slot"<<RESET<<std::endl;
	}
}

void				Character::use( int idx, ICharacter & target ){
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL )
		_inventory[idx]->use(target);
	else
		std::cout<<BROWN<<"You can't use materia in "<<idx<<" slot"<<RESET<<std::endl;
}