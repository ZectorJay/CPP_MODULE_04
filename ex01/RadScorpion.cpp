/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:08:40 by hmickey           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/26 09:54:52 by hmickey          ###   ########.fr       */
=======
/*   Updated: 2021/06/16 18:42:31 by hmickey          ###   ########.fr       */
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() {
	_hp = 80;
	_type = "RadScorpion";
<<<<<<< HEAD
	std::cout<<RED<<"* click click click *"<<RESET<<std::endl;
=======
	std::cout<<"* click click click *"<<std::endl;
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
}

RadScorpion::~RadScorpion(){ std::cout<<"* SPROTCH *"<<std::endl; }