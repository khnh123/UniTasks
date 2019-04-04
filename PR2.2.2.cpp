#include <iostream>
#include <cstring>
#include <chrono>
#include <ctime>
#include <iostream>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
using namespace std;

/////////////
struct person
{
string Name; string Surname; string CityofBirth; string Bithday;
};

//////////////////////////////////////////////
int main(){
int Year;
int Month;
int Day;
int d,y;
static char a;

int n=2;
static char m_months[13][10] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string month(m_months[n]);

	struct person info[5];
  	int i,size;

cout << "------------------------------------------------------------------------" << endl;
cout << "---------------------------------Input---------------------------------" << endl;
cout <<  "Enter Number of Persons";
cin >> size;
cout << "------------------------------------------------------------------------" << endl;

	for(i=0; i<size; i++){                   		//taking values from user
		cout << "Person " << i + 1 << endl;
//		cout << "Enter roll no" << endl;
//		cin >> info[i].roll_no;
		cout << "Enter Name" << endl;
		cin >> info[i].Name;
		cout << "Enter Surname" << endl;
		cin >> info[i].Surname;
    cout << "Enter City of Birth" << endl;
    cin >> info[i].CityofBirth;
  //    Bithday Input
cout << "Enter your birthday (Year): " ; cin >> Year;
if (Year<0) {
cout << "Date invalid (Year)" << std::endl; return 0;
}
if (Year>2019) {
cout << "Date invalid (Year)" << std::endl; return 0;
}
//Month Input
cout << "Enter your birthday (Month): " ; cin >> Month;
if (Month>12) {
cout << "Date invalid (Month)" << std::endl; return 0;
}
if (Month<0) {
cout << "Date invalid (Month)" << std::endl; return 0;
}
//Day Input
cout << "Enter your birthday (Day): " ; cin >> Day;
 if (Day>31)  {
cout << "Date invalid (Day)" << std::endl; return 0;
}
if (Day<0) {
cout << "Date invalid (Day)" << std::endl; return 0;
 }
n = Month;
//cout << Year << "-" << m_months[n] << "-"<< Day << endl;
string str1 = to_string(Year);
string str3 = to_string(Day);
string s = str1 + "-" + m_months[n] + "-" + str3;
info[i].Bithday = s;
	}


cout << "------------------------------------------------------------------------" << endl;
cout << "---------------------------------Output---------------------------------" << endl;
	for(i=0; i<size; i++){							//printing values
		cout << "Person " << i + 1 << endl;
		cout << "Name : " << info[i].Name << endl;
		cout << "Surname : " << info[i].Surname << endl;
  	cout << "City of Birth : " << info[i].CityofBirth << endl;
  	cout << "Bithday : " << info[i].Bithday << endl;
    cout << "----------------------------" << endl;
  	}

	return 0;
}
