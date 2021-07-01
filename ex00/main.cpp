/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:32:57 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 10:53:17 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Ghoul.hpp"
#include <iostream>

int main(){
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	Ghoul jizz("Jizz");

	std::cout << robert << jim << joe << jizz;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jizz);
	return 0;
}