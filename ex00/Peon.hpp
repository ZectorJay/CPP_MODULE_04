/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 19:05:10 by hmickey           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/26 10:32:43 by hmickey          ###   ########.fr       */
=======
/*   Updated: 2021/06/11 14:05:06 by hmickey          ###   ########.fr       */
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Sorcerer.hpp"

class Peon : public Victim {
	
public:

	Peon( std::string name );
<<<<<<< HEAD
	virtual ~Peon();

	void	getPolymorphed() const;

=======
	~Peon();

	void	getPolymorphed() const;

protected:

	Peon(){};

>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
};

#endif