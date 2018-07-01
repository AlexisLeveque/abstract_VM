//
// Created by PC on 01/07/2018.
//

#include "Int16.hpp"

Int16::Int16(void) {}

Int16::Int16(std::string str) : _nbr(str) {
}

Int16::Int16(Int16 const &src) {
	this->_nbr = src.toString();
}

Int16 &Int16::operator=(Int16 const &rhs) {
	this->_nbr = rhs.toString();
	return *this;
}

Int16::~Int16(void) {}

int Int16::getPrecision() const {
	return _type;
}

eOperandType Int16::getType() const {
	return eOperandType(Int16);
}

std::string const& Int16::toString() const {
	return _nbr;
}

IOperand const* Int16::operator+(IOperand const &rhs) const {}

IOperand const* Int16::operator-(IOperand const &rhs) const {}

IOperand const* Int16::operator*(IOperand const &rhs) const {}

IOperand const* Int16::operator/(IOperand const &rhs) const {}

IOperand const* Int16::operator%(IOperand const &rhs) const {}