// переделанная работа.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<string>
#include<iostream>
#include<fstream> 

using namespace std;

class Employee {
private:
	string name;
	int phone;
	string time;
	string procedur;
	int money;
public:
	Employee() { cout << " Hi, Client" << endl; };

	~Employee() { cout << endl << " GoodBye, Client" << endl; };

	void Client(string name, int phone, string time, string procedur, int money) {
		this->name = name;
		this->phone = phone;
		this->time = time;
		this->procedur = procedur;
		this->money = money;
		cout << endl;
	}
	void show_emp_details() {
		cout << "\n\n****Details of Client****" << endl;
		cout << "Client name  :  " << name << endl;
		cout << "Client phone  :  " << phone << endl;
		cout << "Time  :  " << time << endl;
		cout << "Name of procedur  : " << procedur << endl;
		cout << "How much  :  " << money << endl;
		cout << "\n-------------------------------\n\n" << endl;
	}
};


int main() {
	Employee emp1;
	emp1.Client("Dasha", 432567, "12:30", "massage", 2000);
	emp1.show_emp_details();

	Employee emp2;
	emp2.Client("Katya", 89734565, "14:45", "kosmetolog", 5000);
	emp2.show_emp_details();

	Employee emp3;
	emp3.Client("Nastya", 89023567, "17:00", "nails", 1600);
	emp3.show_emp_details();

	return 0;
}