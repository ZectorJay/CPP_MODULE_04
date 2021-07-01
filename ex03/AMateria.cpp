/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:21:20 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 11:29:48 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria ( std::string const & type) : _xp(0), _type(type) {}

std::string const &	AMateria::getType() const { return (_type); }

unsigned int		AMateria::getXP() const { return (_xp); }