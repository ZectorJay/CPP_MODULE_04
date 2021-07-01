/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:02:06 by hmickey           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/26 10:28:09 by hmickey          ###   ########.fr       */
=======
/*   Updated: 2021/06/16 20:50:53 by hmickey          ###   ########.fr       */
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
<<<<<<< HEAD
#include "Penetrator.hpp"
#include <unistd.h>

int main(){
	Character* me = new Character("me");
	std::cout<<*me<<"\n\n"<<std::endl;
	sleep(3);
	
	Enemy* b = new RadScorpion();
	sleep(2);
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* pn = new Penetrator();
	
	me->equip(pf);
	std::cout << *me;
	sleep(2);
	std::cout << *pf;
	sleep(2);
	me->attack(b);
	sleep(2);
	std::cout << *b;
	std::cout<<"\n\n\n"<<std::endl;
	sleep(3);
	me->equip(pr);
	std::cout << *me;
	sleep(2);
	std::cout << *pr;
	sleep(2);
	me->attack(b);
	sleep(2);
	std::cout << *b;
	std::cout<<"\n\n\n"<<std::endl;
	sleep(3);
	me->equip(pn);
	std::cout << *me;
	sleep(2);
	std::cout << *pn;
	sleep(2);
	me->attack(b);
	sleep(2);
	std::cout << *b;
	sleep(2);
	std::cout << "\n\n\n" << std::endl;

	b = new SuperMutant();
	
	std::cout << *me;
	sleep(2);
	me->attack(b);
	sleep(2);
	std::cout << *b;
	sleep(2);
	std::cout << "\n\n\n" << std::endl;
	std::cout << *me;
	sleep(2);
	me->attack(b);
	sleep(2);
	std::cout << *b;
	sleep(2);
	me->recoverAP();

	std::cout << "\n\n\n" << std::endl;
	
	std::cout << *me;
	sleep(2);
	me->attack(b);
	sleep(2);
	std::cout << *b;
	sleep(2);

	std::cout << "\n\n\n" << std::endl;
	
	me->recoverAP();
	std::cout << *me;
	sleep(2);
	me->attack(b);
	sleep(2);
	std::cout << *b;
	sleep(2);

	std::cout << "\n\n\n" << std::endl;
	
	me->recoverAP();
	std::cout << *me;
	sleep(2);
	me->attack(b);
	sleep(2);
	std::cout << *b;
	sleep(2);

=======

int main(){
	Character* me = new Character("me");
	std::cout<<*me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
	return 0;
}