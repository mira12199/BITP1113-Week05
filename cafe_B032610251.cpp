
// NAME       : NURUL AMIRAH BINTI MOHD NAZRI
// CLASS      : S2G1
// MATRIC NO. : B032610251
// LAB 5-6    : UTeM Café Order Kiosk


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char Choice;
	int Quantity;
	int TotalItems = 0;
	double TotalPrice = 0.0;

	cout << fixed << setprecision(2) << TotalPrice << endl;

	do
	{
		cout << "=== UTeM Cafe ===" << endl;
		cout << "[N] Nasi Lemak    RM5.50" << endl;
		cout << "[M] Mee Goreng    RM6.00" << endl;
		cout << "[T] Teh Tarik     RM2.50" << endl;
		cout << "[X] Checkout" << endl;
		cout << "Choice: ";
		cin >> Choice;

		double Price = 0.0;

		// r2
		switch (Choice) {
		case 'N' :
		case 'n' :
			Price = 5.50;
			break;

		case 'M' :
		case 'm' :
			Price = 6.00;
			break;

		case 'T' :
		case 't' :
			Price = 2.50;
			break;

		case 'X' :
		case 'x' :
			cout << "Checking out..." << endl;
			continue;

		default :
			cout << "invalid choice.Try again." << endl << endl;
			continue;			
		}

		//r3
		cout << "Quantity (1 - 10) : ";
		cin >> Quantity;
		while (Quantity < 1 || Quantity >10) {
			cout << "Quantity invalid. Enter 1-10 : ";
			cin >> Quantity;
		}

		// r4
		TotalItems += Quantity;
		TotalPrice += (Quantity * Price);


		cout << "Added. Current total : RM" << TotalPrice << endl << endl;

	} while (Choice != 'X' && Choice != 'x');

	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << endl;

	cout << "Total Items : " << TotalItems << endl;
	
	cout << "Total amount: RM" << TotalPrice << endl;

	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << endl;

	return 0;
}
