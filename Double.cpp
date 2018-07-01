//
// Created by PC on 01/07/2018.
//

#include "Double.hpp"

Double::Double(void) {}

Double::Double(std::string str) : _nbr(str) {
}

Double::Double(Double const &src) {
	this->_nbr = src.toString();
}

Double &Double::operator=(Double const &rhs) {
	this->_nbr = rhs.toString();
	return *this;
}

Double::~Double(void) {}

int Double::getPrecision() const {
	return _type;
}

eOperandType Double::getType() const {
	return eOperandType(Double);
}

std::string const& Double::toString() const {
	return _nbr;
}

IOperand const* Double::operator+(IOperand const &rhs) const {}

IOperand const* Double::operator-(IOperand const &rhs) const {}

IOperand const* Double::operator*(IOperand const &rhs) const {}

IOperand const* Double::operator/(IOperand const &rhs) const {}

IOperand const* Double::operator%(IOperand const &rhs) const {}
