#include "Controller.h"

bool Controller::addCoatToRepository(const std::string& sizee, const std::string& color, double price, int quantity, const std::string& source)
{
	Coat t{ sizee, color, price ,quantity, source };
	return this->repo.addCoat(t);
}

bool Controller::removeCoatFromRepository(const std::string & sizee, const std::string & color,double price, int flag)
{
	return this->repo.removeCoat(sizee, color, price, flag);
}

bool Controller::updateCoatFromRepository(const std::string & sizee, const std::string & color, double price, double newPrice, int newQuantity, const std::string & newLink, const std::string newSizee, const std::string newColor, int flag)
{
	Coat t = this->repo.findBySizeAndColorAndPrice(sizee, color, price);
	if (t.getSize() == "" || t.getColor() == "" || t.getPrice() == 0)
		return false;
	Coat newT = this->repo.findBySizeAndColorAndPrice(newSizee, newColor, newPrice);
	this->removeCoatFromRepository(sizee, color, price, flag);
	this->addCoatToRepository(newSizee, newColor, newPrice, newQuantity, newLink);
	return true;
}

bool Controller::deleteFromBasket(const Coat & coat)
{
    return this->basket.removeCoat(coat.getSize(),coat.getColor(),coat.getPrice(),1);
}

bool Controller::checkSizee(const std::string &sizee)
{
    return this->repo.checkSize(sizee);
}

void Controller::addCoatToBasket(const Coat & coat)
{
	this->basket.addCoat(coat);
}

int Controller::validSize(const std::string &sizee)
{
    return this->repo.numberSize(sizee);
}

Coat Controller::getCurrentCoat()
{
	return this->coatsIter.getCurrentCoat();
}

void Controller::next()
{
	this->coatsIter.next();
}

