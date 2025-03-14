#include<string>
using namespace std;

class Account
{
	public:
	static int ctr;
	int accountno;
	string name;
	float balance;
	string bank;

	Account();
	Account(int accountno, string name, float balance, string bank);

        void Accept();
        void Display() const;
};
