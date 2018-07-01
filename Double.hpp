//
// Created by PC on 01/07/2018.
//

#ifndef ABSTRACT_VM_DOUBLE_HPP
#define ABSTRACT_VM_DOUBLE_HPP


#include "IOperand.hpp"

class Double : public IOperand{

public:
	Double(std::string);

	Double(Double const &src);

	Double &operator=(Double const &rhs);

	virtual ~Double(void);

	virtual int getPrecision( void ) const = 0; // Precision of the type of the instance
	virtual eOperandType getType( void ) const = 0; // Type of the instance
	virtual IOperand const * operator+( IOperand const & rhs ) const = 0; // Sum
	virtual IOperand const * operator-( IOperand const & rhs ) const = 0; // Difference
	virtual IOperand const * operator*( IOperand const & rhs ) const = 0; // Product
	virtual IOperand const * operator/( IOperand const & rhs ) const = 0; // Quotient
	virtual IOperand const * operator%( IOperand const & rhs ) const = 0; // Modulo
	virtual std::string const & toString( void ) const = 0; // String representation of the instance

private:
	Double(void);
	eOperandType _type = eOperandType(Double);
	std::string _nbr;
};


#endif //ABSTRACT_VM_DOUBLE_HPP
