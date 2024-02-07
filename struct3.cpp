#include<iostream>
#include<string>
using namespace std;
struct Menu
{
	string name;
	float amnt;
	int quantity;
	float price;
};
void PrintCheck(Menu Arr[],int size) {
	float tax = 0, Amount_due = 0;
	for (size_t i = 0; i < 10; i++){
		if (Arr[i].quantity>0){
			Arr[i].price = Arr[i].quantity * Arr[i].amnt;
		}
	}
	cout << "   Thank you for eating as FAST'S Cafe"<<endl;
	cout << "Reciept		Quantity		Amount" << endl;
	for (size_t i = 0; i < 10; i++){
		if (Arr[i].price > 0) {
			cout << Arr[i].name << "	    " << Arr[i].quantity << "		  " << Arr[i].price<<endl;
			Amount_due = Amount_due + Arr[i].price;
		}
	}
	tax = Amount_due * 0.05;
	Amount_due = Amount_due + tax;
	cout << "tax		" << tax<<endl;
	cout << "Amount due		" << Amount_due;

}
void GetData(Menu arr[]) {
	bool Order=true;
	int item_no,quant,index;
	char choice;
	while (Order)
	{
		cout << "Enter Item number between 1 to 10: ";
		cin >> item_no;
		if (item_no>10)
		{
			cout << "Enter correct item no ";
		}
		else
		{
			index = item_no - 1;
			cout << "Enter Quantity : ";
			cin >> quant;
			arr[index].quantity = quant;
			cout << "Select another item? (y/n): ";
			cin >> choice;
			if (choice == 'y')
			{
				Order = true;
			}
			else
			{
				Order = false;
			}
		}
		
	}
}
void show() {
	cout << "                                          Welcome to FAST's Cafe" << endl;
	cout << "----------Today's Menu----------" << endl;
	cout << "1: Egg (cooked to order) $1.99" << endl;
	cout<<"2: Golden-Brown Pancake $1.99" << endl;
	cout << "3: French Toast $2.99" << endl;
	cout << "4: Muffin $0.99" << endl;
	cout << "5: Bagel w/ Spread $1.20" << endl;
	cout << "6: Fresh Fruit $3.49" << endl;
	cout << "7: Steel-Cut Irish Oatmeal $4.69" << endl;
	cout << "8: Coffee $1.50" << endl;
	cout << "9: Pot of Assorted Tea $1.75" << endl;
	cout << "10: Hot Chocolate $1.75" << endl;
}
void Data(Menu arr[]) {
	arr[0].name = "Egg";
	arr[0].amnt = 1.99;
	arr[1].name = "Golden-Brown Pancake";
	arr[1].amnt = 1.99;
	arr[2].name = "French Toast";
	arr[2].amnt = 2.99;
	arr[3].name = "Muffin";
	arr[3].amnt = 0.99;
	arr[4].name = "Bagel w/ Spread";
	arr[4].amnt = 1.20;
	arr[5].name = "Fresh Fruit";
	arr[5].amnt = 3.49; 
	arr[6].name = "Steel-Cut Irish Oatmeal";
	arr[6].amnt = 4.69;
	arr[7].name = "Coffee";
	arr[7].amnt = 1.50;
	arr[8].name = "Pot of Assorted Tea";
	arr[8].amnt = 1.75;
	arr[9].name = "Hot Chocolate";
	arr[9].amnt = 1.75;
}
int main() {
	Menu arr[10];
	Data(arr);
	show();
	cout << endl << endl;
	GetData(arr);
	cout << endl << endl;
	PrintCheck(arr, 10);

}