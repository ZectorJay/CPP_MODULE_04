/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:04:49 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 17:09:20 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria {

public:

	Cure() : AMateria("cure"){};
	~Cure(){}
	AMateria*	clone() const;

protected:

	void		useMessage ( ICharacter & target );
	
};


#endif