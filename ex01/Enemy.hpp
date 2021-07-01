/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:05:27 by hmickey           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/26 10:08:47 by hmickey          ###   ########.fr       */
=======
/*   Updated: 2021/06/16 18:37:26 by hmickey          ###   ########.fr       */
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
<<<<<<< HEAD
# include <iostream>
=======
#include <iostream>
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3

class Enemy
{

public:

	Enemy( int hp, std::string const & type );
	virtual ~Enemy();

	Enemy & operator = ( Enemy const & src );
	virtual std::string	getType() const;
	int 				getHP() const;
	virtual void		takeDamage(int amount);

protected:

	Enemy();
	int			_hp;
	std::string _type;

};

<<<<<<< HEAD
std::ostream & operator << (std::ostream & o, Enemy const & src);

=======
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
#endif