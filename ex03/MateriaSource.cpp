/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:29:10 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 17:04:05 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & src ){ this->operator=(src); }

MateriaSource &		MateriaSource::operator= (MateriaSource const & src){
	if (this != &src){
		for (int i = 0; i < 4 && src.getMateria(i) != NULL; i++)
			_inventory[i] = src.getMateria(i);
	}
	return (*this);
}

AMateria*			MateriaSource::getMateria( int idx ) const {	return (_inventory[idx]); }

void				MateriaSource::learnMateria( AMateria* m ){
	int		i = 0;
	while (i < 4 && _inventory[i] != NULL)
		i++;
	if (_inventory[i] != NULL)
		std::cout<<RED<<"MateriaSource slots are full"<<RESET<<std::endl;
	else
		_inventory[i] = m;
}

AMateria*			MateriaSource::createMateria( std::string const & type ){
	int i = 0;

	while (i < 4 && _inventory[i] != NULL){
		if (_inventory[i]->getType() == type)
			break;
		i++;
	}
	return (_inventory[i]->clone());
}