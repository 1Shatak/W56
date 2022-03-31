
#include "Coat.h"
#include <Windows.h>
#include <shellapi.h>

Coat::Coat() : sizee(""), color(""), price(0), quantity(0), source(""){
}

Coat::Coat(const std::string& sizee, const std::string& color, const double& price , const int& quantity, const std::string& source)
{
	this->sizee = sizee;
	this->color = color;
	this->price = price;
	this->quantity = quantity;
	this->source = source;
}
