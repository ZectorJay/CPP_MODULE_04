/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:35:27 by hmickey           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/26 05:20:34 by hmickey          ###   ########.fr       */
=======
/*   Updated: 2021/06/16 16:50:53 by hmickey          ###   ########.fr       */
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : public virtual AWeapon{

public:

	PowerFist();
<<<<<<< HEAD
	virtual ~PowerFist();
=======
	~PowerFist();
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3

	void attack() const;
};

#endif