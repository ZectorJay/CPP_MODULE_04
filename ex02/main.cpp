/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 03:16:43 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/02 10:56:21 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include <iostream>
#include <unistd.h>

void	test(){
	std::cout<<RED<<"first we create 2 Tactical Marine"<<RESET<<std::endl;
	sleep(2);
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* bob2 = new TacticalMarine;
	sleep(2);
	
	std::cout<<BROWN<<"Now we create 2 Assault Terminator"<<RESET<<std::endl;
	sleep(2);
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* jim2 = new AssaultTerminator;
	sleep(2);
	
	std::cout<<GREEN<<"let's create 2 different squads"<<RESET<<std::endl;
	sleep(2);
	ISquad*  destroyers = new Squad;
	ISquad* destroyers2 = new Squad;
	sleep(2);
	
	std::cout<<BLUE<<"Now we push 2 Tactical Marine into first squad"<<RESET<<std::endl;
	sleep(2);
	destroyers->push(bob);
	destroyers->push(bob2);
	sleep(2);

	std::cout<<BLUE<<"And 2 Assault Terminator to another one squad"<<RESET<<std::endl;
	sleep(2);
	destroyers2->push(jim);
	destroyers2->push(jim2);
	sleep(2);
	std::cout<<RED<<"Now let's try to deep copy from 2nd squad to the first"<<RESET<<std::endl;
	sleep(2);
	*(static_cast<Squad *>(destroyers)) = *(static_cast<Squad *>(destroyers2));
	sleep(2);
	std::cout<<GREEN<<"Old units were freed and units from 2nd squad were copied on their place";
	std::cout<<RESET<<std::endl;
	sleep(2);
	std::cout<<RED<<"Now we can free both our squads which containt same units"<<RESET<<std::endl;
	sleep(2);
	std::cout<<BROWN<<"delete first squad"<<RESET<<std::endl;
	sleep(2);
	delete destroyers;
	sleep(2);
	std::cout<<BROWN<<"delete second squad"<<RESET<<std::endl;
	sleep(2);
	delete destroyers2;
	sleep(2);
}

int main()
{
	std::cout<<"let's check Deep copy"<<std::endl;
	sleep(2);
	test();
	std::cout<<RED<<"WE CAN CHECK LEAKS NOW TO BE SURE THAT EVERYTHING DONE WELL";
	std::cout<<RESET<<std::endl;
	sleep(10);
	std::cout<<"\n\n\n\n";
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}