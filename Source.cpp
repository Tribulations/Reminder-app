#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

class Company
{
	public:
		string getName()
		{
			return mName;
		}

		void setName(string name)
		{
			mName = name;
		}

		void printInfo()
		{
			cout << mName << " ";
		}

		bool getIsAgDone()
		{
			return mIsAgDone;
		}
		bool getIsMomsDone()
		{
			return mIsMomsDone;
		}

	private:
		string mName;

		bool mIsAgDone = false;
		bool mIsMomsDone = false;

};

int main()
{
	Company companies[10];
	bool isRunning = true;
	int choice;
	int numberOfCompanies = 0; // total companies 
	string newCompanyName;

	while (isRunning)
	{
		//print menu
		cout << "[1]New company" << endl 
			 << "[2]Print companies" << endl 
			 << "[3]Print companies left" << endl;
		cin >> choice;
		//add new company
		if (choice == 1)
		{
			cout << "Enter the company name" << endl;
			cin.ignore();
			getline(cin, newCompanyName);
			companies[numberOfCompanies].setName(newCompanyName);
			numberOfCompanies++;
		}
		//print compnay list
		else if (choice == 2)
		{
			cout << "Company Name" << "Moms" << "AG" << endl << endl;

			for (int i = 0; i < numberOfCompanies; i++)
			{
				companies[i].printInfo();
				if (companies[i].getIsAgDone) // if ag is marked as done
				{
					cout << "X" << endl;
				}
			}
		}
		//print remaining companies
		else if (choice == 3)
		{

		}
		else
		{
			isRunning = false;
		}
	}

	getchar();
	return 0;
}
