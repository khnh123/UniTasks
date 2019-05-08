
//#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <chrono>
#include <ctime>
#include <string>
#include <iomanip>
#include <vector>
#include <iterator>
#include <algorithm>

#include<fstream>
using namespace std;

template<typename T>
   T StringToNumber(const std::string& numberAsString)
   {
      T valor;

      std::stringstream stream(numberAsString);
      stream >> valor;
      if (stream.fail()) {
         return 0; cout <<endl;
      }
      return valor;
   }
void time ()
{
time_t seconds = time(NULL);
tm* timeinfo = localtime(&seconds);
cout<<"Current Date and Time: "<<asctime(timeinfo);
}

/////////////
struct person
{
string Name; string Surname;  string IDnumber; string Bithday;  string Date; double Salary; string Hometown; string Country; string Workplace;
};

//////////////////////////////////////////////
int main(){
//////////
time_t seconds = time(NULL);
tm* timeinfo = localtime(&seconds);
//cout<<"Current Date and Time: "<<
asctime(timeinfo);
//<<endl;
/////////////
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
cout << "---------------------------------Input----------------------------------" << endl;
cout <<  "Enter Number of Persons: ";
cin >> size;
cout << "------------------------------------------------------------------------" << endl;

	for(i=0; i<size; i++){                   		//taking values from user
		cout << "Person " << i + 1 << endl;
//		cout << "Enter roll no" << endl;
//		cin >> info[i].roll_no;
		cout << "Enter Name: "; cin >> info[i].Name;
		cout << "Enter Surname: " ;cin >> info[i].Surname;
    cout << "Enter ID number: " ;cin >> info[i].IDnumber;


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
string a;
string date = asctime(timeinfo);
cout << "Enter Date: " << "Use Currrent date (Type:Yes)"; cin >> a;
    if(a=="Yes"){
a=date;
info[i].Date=a;
time(); }
else  a=info[i].Date ;
cout << "Enter Salary: " ; cin >> info[i].Salary;
cout << "Enter Home town: " ; cin >> info[i].Hometown;
cout << "Enter Country: " ; cin >> info[i].Country;
cout << "Enter Work place: " ; cin >> info[i].Workplace;

    cout << "----------------------------" << endl;
	}


//cout << "---------------------------------Output---------------------------------" << endl;
	for(i=0; i<size; i++){							//printing values
		cout << "Person " << i + 1 << endl;
		cout << "Name : " << info[i].Name << endl;
		cout << "Surname : " << info[i].Surname << endl;
    cout << "ID number: " << info[i].IDnumber<< endl;
  	cout << "Bithday : " << info[i].Bithday << endl;
    cout << "Date: " << info[i].Date << endl;
    cout << "Salary: " << info[i].Salary<< endl;
    cout << "Home town: " <<info[i].Hometown<< endl;
    cout << "Country: " << info[i].Country<< endl;
    cout << "Work place: " << info[i].Workplace<< endl;
    cout << "----------------------------" << endl;
  	}

//////////////////
int s;
startagain:
cout << "Search (Type:1)"<< endl;
cout << "Remove (Type:2)"<< endl;
cout << "Skip (Type:3)"<< endl;
cout << "Type: "; cin >> s;

if (s==1) {
///Search
string search;
cout << "----------------------------" << endl;
cout<< "Search: ";cin >> search;
double number= StringToNumber<double>(search); // so float Salary search would work
 for(int i = 0; i < size; i++) {
   if(info[i].Name == search ||  info[i].IDnumber == search || info[i].Bithday==search  || info[i].Country== search || info[i].Salary== number || info[i].Workplace== search) {
cout << "----------------------------" << endl;
cout << "Person " << i + 1 << endl;
cout << "Name : " << info[i].Name << endl;
cout << "Surname : " << info[i].Surname << endl;
cout << "ID number: " << info[i].IDnumber<< endl;
cout << "Bithday : " << info[i].Bithday << endl;
cout << "Date: " << info[i].Date << endl;
cout << "Salary: " << info[i].Salary<< endl;
cout << "Home town: " <<info[i].Hometown<< endl;
cout << "Country: " << info[i].Country<< endl;
cout << "Work place: " << info[i].Workplace<< endl;
cout << "----------------------------" << endl;
}break; }
;}
if (s==2) {

///Remove
string b;
cout<< "Remove Surname or ID number: "<< endl;
cout<< "Remove: ";cin >> b;
 for(int i = 0; i < int(info[i].Name.size()); i++) {
   if(info[i].Surname == b || info[i].IDnumber == b) {
      if(info[i].Surname == b){info[i].Surname.erase(info[i].Surname.begin(),info[i].Surname.end());}
      if(info[i].IDnumber == b){info[i].IDnumber.erase(info[i].IDnumber.begin(),info[i].IDnumber.end());}
      else if (info[i].Surname != b && info[i].IDnumber != b) {cout<<"--->>>Move on"<< endl;}
break;
  }}
;}
if (s==3) {goto startagain1;}

goto startagain;


startagain1:

cout << "---------------------------------Output---------------------------------" << endl;
	for(i=0; i<size; i++){							//printing values
		cout << "Person " << i + 1 << endl;
		cout << "Name : " << info[i].Name << endl;
		cout << "Surname : " << info[i].Surname << endl;
    cout << "ID number: " << info[i].IDnumber<< endl;
  	cout << "Bithday : " << info[i].Bithday << endl;
    cout << "Date: " << info[i].Date << endl;
    cout << "Salary: " << info[i].Salary<< endl;
    cout << "Home town: " <<info[i].Hometown<< endl;
    cout << "Country: " << info[i].Country<< endl;
    cout << "Work place: " << info[i].Workplace<< endl;
    cout << "----------------------------" << endl;
  	}

///Write to file


  ofstream file("example.txt");
    if (file.good()) {
for(i=0; i<size; i++){							//printing values
  file << "Person " << i + 1 << endl;
  file << "Name : " << info[i].Name << endl;
  file << "Surname : " << info[i].Surname << endl;
  file << "ID number: " << info[i].IDnumber<< endl;
  file << "Bithday : " << info[i].Bithday << endl;
  file << "Date: " << info[i].Date << endl;
  file << "Salary: " << info[i].Salary<< endl;
  file << "Home town: " <<info[i].Hometown<< endl;
  file << "Country: " << info[i].Country<< endl;
  file << "Work place: " << info[i].Workplace<< endl;
  file << "----------------------------" << endl;
  }
        cout << "Wrote to file: example.txt.\n";
    }
    file.close();


	return 0;
}
