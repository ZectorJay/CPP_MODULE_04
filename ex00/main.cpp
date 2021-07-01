/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:32:57 by hmickey           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/26 10:38:35 by hmickey          ###   ########.fr       */
=======
/*   Updated: 2021/06/11 13:56:29 by hmickey          ###   ########.fr       */
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
<<<<<<< HEAD
#include "Ghoul.hpp"
=======
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
#include <iostream>

int main(){
	Sorcerer robert("Robert", "the Magnificent");
<<<<<<< HEAD

	Victim jim("Jimmy");
	Peon joe("Joe");
	Ghoul jizz("Jizz");

	std::cout << robert << jim << joe << jizz;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jizz);
=======
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
	return 0;
}