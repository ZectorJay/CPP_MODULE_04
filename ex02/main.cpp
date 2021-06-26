/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 03:16:43 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/26 04:10:10 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include <iostream>

void	test(){
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* bob2 = new TacticalMarine;
	
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* jim2 = new AssaultTerminator;

	Squad*  destroyers = new Squad;
	Squad* destroyers2 = new Squad;
	
	destroyers->push(bob);
	destroyers->push(bob2);

	destroyers2->push(jim);
	destroyers2->push(jim2);

	*destroyers = *destroyers2;
	delete destroyers;
	delete destroyers2;
}

int main()
{
	test();
	// ISpaceMarine* bob = new TacticalMarine;
	// ISpaceMarine* jim = new AssaultTerminator;
	// ISquad* vlc = new Squad;
	// vlc->push(bob);
	// std::cout<<"currently "<<vlc->getCount()<<" units in squad"<<std::endl;
	// vlc->push(jim);
	// std::cout<<"currently "<<vlc->getCount()<<" units in squad"<<std::endl;
	// for (int i = 0; i < vlc->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// delete vlc;
	while (1){}
	// return 0;
}