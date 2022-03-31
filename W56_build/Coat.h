
#pragma once
#pragma once
#include <iostream>

class Coat
{
private:
	std::string sizee;
	std::string color;
	double price;
	int quantity;
	std::string source;
public:

	Coat();

	Coat(const std::string& sizee, const std::string& color, const double& price, const int& quantity, const std::string& source);

	std::string getSize() const { return sizee; }
	std::string getColor() const { return color; }
	double getPrice() const { return price; }
	std::string getSource() const { return source; }
	int getQuantity() const { return quantity; }
	void open();
};
