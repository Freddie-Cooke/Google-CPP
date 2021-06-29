// books.cpp
#include <iostream>

using namespace std;

void welcome_message() {

	const char* message;
	message =	"-== Welcome to the book processing program ==-\n"
				"// Please enter your book information.\n"
				"**********************************************\n";
	cout << message;
}

void book_input(float &total_cost, float &profit) {

	int book_code;
	float book_price = 0.0;
	int num_book_avaliable;
	int num_enrollment;
	int num_requirement;
	int num_condition;

	char condition[][20] = {"new.", "used."};
	char requirement[][20] = {"required", "optional"};

	cout << "\nPlease enter the book code: "; cin >> book_code;
	cin.clear();
	cin.ignore();
	cout << "Enter the single copy price: "; cin >> book_price;
	cout << "Enter the number of books on hand: "; cin >> num_book_avaliable;
	cout << "Enter the number of prospective enrollment: "; cin >> num_enrollment;
	cout << "Required or optional? (0/1) "; cin >> num_requirement;
	cout << "New or used? (0/1) "; cin >> num_condition;

	cout << "\n**********************************************\n";
	cout << "\nBook: " << book_code;
	cout << "\nPrice: " << book_price;
	cout << "\nInventory: " << num_book_avaliable;
	cout << "\nEnrollment: " << num_enrollment;
	cout << "\nThis book is " << requirement[num_requirement] << " and " << condition[num_condition];

	float sell_percentage;

	if (num_requirement == 0) {
		if(num_condition == 0) {
			sell_percentage = 0.9;
		}
		else{
			sell_percentage = 0.65;
		}
	}
	else{
		if(num_condition == 0) {
			sell_percentage = 0.4;
		}
		else{
			sell_percentage = 0.2;
		}
	}

	int order_amount;
	order_amount = (int(num_enrollment * sell_percentage) - num_book_avaliable);
	total_cost += (order_amount * (book_price*0.8));
	profit += order_amount * (book_price*0.2);
	
	cout << "\nNeed to order: " << order_amount;
	cout << "\nTotal cost: " << order_amount * (book_price*0.8);

}

int main() {

	char continue_answer;
	float total_cost, profit;

	system("cls");
	welcome_message();

	while(true) {
		book_input(total_cost, profit);
		cout << "\n\n**********************************************";
		cout << "\n\nWould you like to add another book? (y/n) "; cin >> continue_answer;
		if (tolower(continue_answer) != 'y') { break; }
	}	

	cout << "Total for all orders: " << total_cost << endl;
	cout << "Profit: " << profit << endl; 

	system("pause");

	return 0;
}
