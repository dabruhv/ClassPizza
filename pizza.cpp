#include <iostream>

using namespace std;

class pizza {

private:
	int toppings;
	float price;
	bool isBaked = false;

public:
	void info();
	int addTop(int top);
	float calc(int top);
	bool bake();

	pizza(int top);





};

int main() {

	pizza freddy(2);
	freddy.info();
	pizza chica(20);
	chica.info();
	pizza bonnie(5);
	bonnie.info();
	pizza foxy(0);
	foxy.info();


}

float pizza::calc(int top) {
	top *= 2;
	top += 10;
	return top;

}

void pizza::info() {

	cout << "Price: $" << price << endl;
	cout << "Number of toppings: " << toppings << endl;
	cout << "Baked yet?: ";
	if (isBaked)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

int pizza::addTop(int top) {
	top++;
	return top;
}

bool pizza::bake() {
	
	return true;
}

pizza::pizza(int top) {
	toppings = 0;
	for (int i = 0; i < top; i++)
		toppings = addTop(toppings);
	price = calc(toppings);
	isBaked = bake();


}
