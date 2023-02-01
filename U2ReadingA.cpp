/*
purpose: to calculate total cost of GME share price + commission for today and
compare the difference in holdings from yesterday
*/

#include <iostream>  // allows the compiler to properly compile cout objects
#include <string>   // allows for the use of string data-types
using namespace std;

int main() {
	double sharePrice = 234.98; // floating-point variable declaring current stock price
	string stockName = "GameStop"; // string variable declaring stock name
	int numShares = 18; // integer variable declaring number of shares
	const double COMMISSION = 2.; // floating-point variable declaring commission percentage

	double stockCost;
	double commissionCost;
	double totalCostToday, totalCostYesterday;
	double difference;
    // declaring floating-point variables that haven't been assigned values yet,for future use

	cout << "Today: " << endl; // terminal display (console output)
	stockCost = numShares * sharePrice; // assigning value to variable
	commissionCost = stockCost * COMMISSION / 100.; // assigning value to variable
	totalCostToday = stockCost + commissionCost; // assigning value to variable

	cout << numShares << " shares of " << stockName << " at $" << sharePrice << " per share." << endl; // terminal display (console output)
	cout << "Cost:       $" << stockCost << endl; // terminal display (console output)
	cout << "Commission: $" << commissionCost << endl; // terminal display (console output)
	cout << "Total:      $" << totalCostToday << endl; // terminal display (console output)

	cout << "Yesterday: " << endl; // terminal display (console output)
	sharePrice = 314.74;
	stockCost = numShares * sharePrice;
	commissionCost = stockCost * COMMISSION / 100.;
	totalCostYesterday = stockCost + commissionCost;
    // same as above set but for previous day

	cout << numShares << " shares of " << stockName << " at $" << sharePrice << " per share." << endl;
	cout << "Cost:       $" << stockCost << endl;
	cout << "Commission: $" << commissionCost << endl;
	cout << "Total:      $" << totalCostYesterday << endl;
    // same as above set but for previous day

	difference = totalCostToday - totalCostYesterday; // assigning value to the difference
	cout << "The difference is $" << difference << endl;  // terminal display (console output) of difference value
	return 0;
}