/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:27:29 by hmickey           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/26 05:20:47 by hmickey          ###   ########.fr       */
=======
/*   Updated: 2021/06/16 16:15:45 by hmickey          ###   ########.fr       */
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy {

public:

	SuperMutant();
<<<<<<< HEAD
	virtual ~SuperMutant();
=======
	~SuperMutant();
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3

	void takeDamage( int amount );

};

#endif