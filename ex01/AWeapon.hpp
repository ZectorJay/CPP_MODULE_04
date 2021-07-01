/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 14:46:50 by hmickey           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/26 10:06:12 by hmickey          ###   ########.fr       */
=======
/*   Updated: 2021/06/16 18:45:31 by hmickey          ###   ########.fr       */
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
<<<<<<< HEAD
# include <iostream>
# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */
# define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
# define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
# define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
# define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
# define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
# define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
=======
#include <iostream>
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3

class AWeapon{

public:

	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon( AWeapon const & src); 

	AWeapon & operator = (AWeapon const & src);

	std::string		getName() const;
	int				getAPCost() const;
	int 			getDamage() const;
	virtual void	attack() const = 0;
	void			equip( AWeapon * weapon );

protected:

	AWeapon();
	std::string _name;
	int			_apcost;
	int			_damage;

<<<<<<< HEAD
};

std::ostream &	operator<< (std::ostream & o, AWeapon const & src);
=======
private:


};
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3

#endif