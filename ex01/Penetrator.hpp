/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Penetrator.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 05:19:17 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/26 09:11:32 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PENETRATOR_HPP
# define PENETRATOR_HPP
# include "AWeapon.hpp"

class Penetrator : public AWeapon {
	
public:

	Penetrator();
	virtual ~Penetrator(){};

	void attack() const;
};

#endif