/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:46:24 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/02 11:00:41 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* tmp2;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp2 = tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(1, *bob);
	me->use(1, *bob);

	me->unequip(0);
	me->use(0, *bob);
	me->equip(tmp2);
	me->use(0, *bob);

	std::cout<<tmp2->getType()<<" have "<<tmp2->getXP()<<" XP"<<std::endl;
	std::cout<<tmp->getType()<<" have "<<tmp->getXP()<<" XP"<<std::endl;
	
	*(static_cast<Character *>(me)) = *(static_cast<Character *>(bob));
	delete bob;
	me->use(0, *me);
	delete me;
	delete src;
	while(1){}
	return 0;
}