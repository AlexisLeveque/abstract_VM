//
// Created by PC on 01/07/2018.
//

#include "Int32.hpp"

Int32::Int32(void) {}

Int32::Int32(std::string str) : _nbr(str) {
}

Int32::Int32(Int32 const &src) {
	this->_nbr = src.toString();
}

Int32 &Int32::operator=(Int32 const &rhs) {
	this->_nbr = rhs.toString();
	return *this;
}

Int32::~Int32(void) {}

int Int32::getPrecision() const {
	return _type;
}

eOperandType Int32::getType() const {
	return eOperandType(Int32);
}

std::string const& Int32::toString() const {
	return _nbr;
}

IOperand const* Int32::operator+(IOperand const &rhs) const {}

IOperand const* Int32::operator-(IOperand const &rhs) const {}

IOperand const* Int32::operator*(IOperand const &rhs) const {}

IOperand const* Int32::operator/(IOperand const &rhs) const {}

IOperand const* Int32::operator%(IOperand const &rhs) const {}
