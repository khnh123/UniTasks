
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


#include <sstream>
#include <iomanip>
#include <locale>
#include <sstream>
#include <string> // this should be already included in <sstream>



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
struct Data
{
//ID
string po_number;string invoice_id;
string invoice_buyer_id;string invoice_batch_id;
//Invoice Date
string invoice_date; string invoice_due_date;
//Terms
string invoice_terms;
// Invoice Amount $$$
double estimated_price_of_product ;
double invoice_amount;
double invoice_handling_cost;
double invoice_sales_tax_amount;
double delivery_charge;

//Address
string ship_to_company ;string ship_to_country;string ship_to_region;string ship_to_city;string ship_to_postal;
string ship_to_address_1_Street_name;
string ship_to_address_1_Street_number;
string ship_to_address_2_Street_name;
string ship_to_address_2_Street_number;
//Status
string invoice_status;
//Stats
string invoice_batch_total;
///////
};
void Display(int size,struct Data info[]){
cout <<   "----------Display-----------" << endl;
for(int i=0; i<size; i++){							//printing values
  cout << "Invoice:  " << i + 1 << endl;
  cout << "Product Number: "<< info[i].po_number<< endl;
  cout << "Invoice ID: " << info[i].invoice_id<< endl;
  cout << "Buyer ID : " << info[i].invoice_buyer_id<< endl;
  cout << "Batch ID : "  << info[i].invoice_batch_id<< endl;

  cout << "Invoice Date : " << info[i].invoice_date<< endl;
  cout << "Invoice Due Date: "  << info[i].invoice_due_date<< endl;

  cout << "Invoice Terms: " << info[i].invoice_terms<< endl;

  cout << "Estimated price of product: " << info[i].estimated_price_of_product<< endl;
  cout << "Invoice Invoice Amount: " << info[i].invoice_amount<< endl;
  cout << "Invoice Handling Cost: " << info[i].invoice_handling_cost<< endl;
  cout << "Invoice Sales Tax Amount: " << info[i].invoice_sales_tax_amount<< endl;
  cout << "Delivery Charge: " << info[i].delivery_charge<< endl;

  cout << "Ship to company: " << info[i].ship_to_company<< endl;
  cout << "Ship to Country: " << info[i].ship_to_country<< endl;
  cout << "Ship to Region: " <<info[i].ship_to_region<< endl;
  cout << "Ship to City: " << info[i].ship_to_city<< endl;
  cout << "Ship to Postal: " << info[i].ship_to_postal<< endl;

  cout << "Ship to address 1 - Street Name: " << info[i].ship_to_address_1_Street_name<< endl;
  cout << "Ship to address 1 - House Number: " << info[i].ship_to_address_1_Street_number<< endl;
  cout << "Ship to address 2 - Street Name: " << info[i].ship_to_address_2_Street_name<< endl;
  cout << "Ship to address 2 - House Number: " << info[i].ship_to_address_2_Street_number<< endl;

  cout << "Invoice Status: " << info[i].invoice_status<< endl;
  cout << "Invoice Batch Total: " << info[i].invoice_batch_total << endl;
	cout << "---------------------" << endl;
}}





void Stats (int size,struct Data info[]){
  double sum = 0,sum1 = 0,sum2 = 0,sum3 = 0,sum4 = 0;
for(int i=0; i<size; i++){
  sum += info[i].invoice_amount;
  sum1 += info[i].invoice_handling_cost;
  sum2 += info[i].invoice_sales_tax_amount;
  sum3 += info[i].estimated_price_of_product;
  sum4 += info[i].delivery_charge;
	}


  cout << "Total invoices :  " << size << endl;
  cout << "Total invoice_amount"<< sum << endl;
  cout << "Total invoice_handling_cost: " << sum1 << endl;
  cout << "Total invoice sales tax amount: " << sum2 << endl;
  cout << "Total estimated price of products: " << sum3 << endl;
  cout << "Total Delivery charge: " << sum4 << endl;

  cout << "List of countries to ship: " << endl;
  for(int i=0; i<size; i++){
    cout << info[i].ship_to_country << endl;
  	}

}
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

int n02=2;
static char m_months[13][10] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string month(m_months[n02]);

	struct Data info[5];
  	int i,size;

cout << "------------------------------------------------------------------------" << endl;
cout << "---------------------------------Input----------------------------------" << endl;
cout <<  "Enter Number of Invoices: ";
cin >> size;
cout << "------------------------------------------------------------------------" << endl;

	for(i=0; i<size; i++){                   		//taking values from user
		cout << "Invoices " << i + 1 << endl;
//		cout << "Enter roll no" << endl;
//		cin >> info[i].roll_no;
		cout << "Enter Product Number: "; cin >> info[i].po_number;
		cout << "Enter Invoice ID: " ;cin >> info[i].invoice_id;
    cout << "Enter Buyer ID : " ;cin >> info[i].invoice_buyer_id;
    cout << "Enter Batch ID : " ;cin >> info[i].invoice_batch_id;

  //    Date Input
cout << "--Enter Invoice Date--" << endl;
string a;
string date = asctime(timeinfo);
cout << "Enter Date: " << "Use Currrent date (Type:Yes)"; cin >> a;
    if(a=="Yes"){
a=date;
info[i].invoice_date=a;
time();
}
else  {
cout << "Enter (Year): " ; cin >> Year;
if (Year<0) {
cout << "Date invalid (Year)" << std::endl; return 0;
}
if (Year>2019) {
cout << "Date invalid (Year)" << std::endl; return 0;
}
//Month Input
cout << "Enter (Month): " ; cin >> Month;
if (Month>12) {
cout << "Date invalid (Month)" << std::endl; return 0;
}
if (Month<0) {
cout << "Date invalid (Month)" << std::endl; return 0;
}
//Day Input
cout << "Enter (Day): " ; cin >> Day;
 if (Day>31)  {
cout << "Date invalid (Day)" << std::endl; return 0;
}
if (Day<0) {
cout << "Date invalid (Day)" << std::endl; return 0;
 }
n02 = Month;
//cout << Year << "-" << m_months[n] << "-"<< Day << endl;
string str01 = to_string(Year);
string str02 = to_string(Day);
string s01 = str01 + "-" + m_months[n02] + "-" + str02;
info[i].invoice_date = s01;
}

cout << "--Enter Invoice Due Date--" << endl;
cout << "Enter (Year): " ; cin >> Year;
if (Year<0) {
cout << "Date invalid (Year)" << std::endl; return 0;
}
if (Year>2019) {
cout << "Date invalid (Year)" << std::endl; return 0;
}
//Month Input
cout << "Enter (Month): " ; cin >> Month;
if (Month>12) {
cout << "Date invalid (Month)" << std::endl; return 0;
}
if (Month<0) {
cout << "Date invalid (Month)" << std::endl; return 0;
}
//Day Input
cout << "Enter (Day): " ; cin >> Day;
 if (Day>31)  {
cout << "Date invalid (Day)" << std::endl; return 0;
}
if (Day<0) {
cout << "Date invalid (Day)" << std::endl; return 0;
 }
n02 = Month;
//cout << Year << "-" << m_months[n] << "-"<< Day << endl;
string str03 = to_string(Year);
string str04 = to_string(Day);
string s02 = str03 + "-" + m_months[n02] + "-" + str04;
info[i].invoice_due_date = s02;
/////////////////////

cout << "Enter Invoice Terms: " ; cin >> info[i].invoice_terms;

cout << "Enter Estimated price of product: " ; cin >>  info[i].estimated_price_of_product;
cout << "Enter Invoice Amount: "; cin >> info[i].invoice_amount;
cout << "Enter Invoice Handling Cost: " ; cin >> info[i].invoice_handling_cost;
cout << "Enter Invoice Sales Tax Amount: " ; cin >> info[i].invoice_sales_tax_amount;
cout << "Enter Delivery Charge: " ; cin >> info[i].delivery_charge;

cout << "Enter ship to company: " ; cin >> info[i].ship_to_company;
cout << "Enter ship to Country: " ; cin >> info[i].ship_to_country;
cout << "Enter ship to Region: " ; cin >> info[i].ship_to_region;
cout << "Enter ship to City: " ; cin >> info[i].ship_to_city;
cout << "Enter ship to Postal: " ; cin >> info[i].ship_to_postal;

cout << "Enter Ship to address 1 - Street Name: " ; cin >> info[i].ship_to_address_1_Street_name;
cout << "Enter Ship to address 1 - House Number: " ; cin >> info[i].ship_to_address_1_Street_number;

cout << "Enter 2nd Adrress, if NO 2nd Adrress (Type:No): " ; cin >> info[i].ship_to_address_2_Street_name;

if (info[i].ship_to_address_2_Street_name=="No"){ goto skip1;
info[i].ship_to_address_2_Street_name="";info[i].ship_to_address_2_Street_number="";}

cout << "Enter Ship to address 2 - House Number: " ; cin >> info[i].ship_to_address_2_Street_number;

skip1:
cout << "Enter Invoice Status: " ; cin >> info[i].invoice_status;
cout << "Enter Invoice Batch Total: " ; cin >> info[i].invoice_batch_total;

cout << "----------End of Input-----------" << endl;
	}


//cout << "---------------------------------Output---------------------------------" << endl;
Display(size, info);
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
cout << "----------Search-----------" << endl;
cout<< "Search: ";cin >> search;
double number= StringToNumber<double>(search); // so float Salary search would work
 for(int i = 1; i < size+1; i++) {
   if(info[i].po_number== search
//ID
|| info[i].invoice_id== search || info[i].invoice_buyer_id== search || info[i].invoice_batch_id== search ||
//Invoice Date
info[i].invoice_date== search ||info[i].invoice_due_date== search ||
//Terms
info[i].invoice_terms == search ||
// Invoice Amount $$$
 info[i].invoice_amount== number || info[i].invoice_handling_cost == number || info[i].invoice_sales_tax_amount==number
|| info[i].estimated_price_of_product== number || info[i].delivery_charge== number
//Address
|| info[i].ship_to_company== search || info[i].ship_to_country== search || info[i].ship_to_region== search || info[i].ship_to_city== search || info[i].ship_to_postal== search || info[i].ship_to_address_1_Street_name== search || info[i].ship_to_address_2_Street_name== search ||
 info[i].ship_to_address_1_Street_number== search ||  info[i].ship_to_address_2_Street_number== search ||
//Stats
info[i].invoice_batch_total== search   ) {

  cout <<   "---------------------" << endl;
  						//printing values
    cout << "Invoice:  " << i + 1 << endl;
    cout << "Product Number: "<< info[i].po_number<< endl;
    cout << "Invoice ID: " << info[i].invoice_id<< endl;
    cout << "Buyer ID : " << info[i].invoice_buyer_id<< endl;
    cout << "Batch ID : "  << info[i].invoice_batch_id<< endl;

    cout << "Invoice Date : " << info[i].invoice_date<< endl;
    cout << "Invoice Due Date: "  << info[i].invoice_due_date<< endl;

    cout << "Invoice Terms: " << info[i].invoice_terms<< endl;

    cout << "Estimated price of product: " << info[i].estimated_price_of_product<< endl;
    cout << "Invoice Invoice Amount: " << info[i].invoice_amount<< endl;
    cout << "Invoice Handling Cost: " << info[i].invoice_handling_cost<< endl;
    cout << "Invoice Sales Tax Amount: " << info[i].invoice_sales_tax_amount<< endl;
    cout << "Delivery Charge: " << info[i].delivery_charge<< endl;

    cout << "Ship to company: " << info[i].ship_to_company<< endl;
    cout << "Ship to Country: " << info[i].ship_to_country<< endl;
    cout << "Ship to Region: " <<info[i].ship_to_region<< endl;
    cout << "Ship to City: " << info[i].ship_to_city<< endl;
    cout << "Ship to Postal: " << info[i].ship_to_postal<< endl;

    cout << "Ship to address 1 - Street Name: " << info[i].ship_to_address_1_Street_name<< endl;
    cout << "Ship to address 1 - House Number: " << info[i].ship_to_address_1_Street_number<< endl;
    cout << "Ship to address 2 - Street Name: " << info[i].ship_to_address_2_Street_name<< endl;
    cout << "Ship to address 2 - House Number: " << info[i].ship_to_address_2_Street_number<< endl;

    cout << "Invoice Status: " << info[i].invoice_status<< endl;
    cout << "Invoice Batch Total: " << info[i].invoice_batch_total << endl;

cout << "----------------------------" << endl;
}
}
}


if (s==2) {

///Remove
string search02;
cout << "----------Remove-----------" << endl;
cout<< "Remove: ";cin >> search02;
double number02= StringToNumber<double>(search02);
 for(int i = 0; i < int(info[i].invoice_terms.size()); i++) {
   if(info[i].invoice_terms == search02 || info[i].ship_to_company == search02 )
   {    if(info[i].po_number == search02){info[i].po_number.erase(info[i].po_number.begin(),info[i].po_number.end());}
       if(info[i].invoice_id == search02){info[i].invoice_id.erase(info[i].invoice_id.begin(),info[i].invoice_id.end());}
       if(info[i].invoice_buyer_id == search02){info[i].invoice_buyer_id.erase(info[i].invoice_buyer_id.begin(),info[i].invoice_buyer_id.end() );}
       if(info[i].invoice_batch_id == search02){info[i].invoice_batch_id.erase(info[i].invoice_batch_id.begin(),info[i].invoice_batch_id.end() );}

       if(info[i].invoice_date == search02){info[i].invoice_date.erase(info[i].invoice_date.begin(),info[i].invoice_date.end());}
       if(info[i].invoice_due_date == search02){info[i].invoice_due_date.erase(info[i].invoice_due_date.begin(),info[i].invoice_due_date.end());}
       if(info[i].invoice_terms == search02){info[i].invoice_terms.erase(info[i].invoice_terms.begin(),info[i].invoice_terms.end());}
//doesnt work
      // if(info[i].invoice_amount == number02){memset( v.data(), 0, sizeof(data) * v.size() );
  // if(info[i].invoice_handling_cost == number02){info[i].invoice_handling_cost.erase(info[i].invoice_handling_cost);}
    //   if(info[i].invoice_sales_tax_amount == number02){info[i].invoice_sales_tax_amount.erase(info[i].invoice_sales_tax_amount.begin(),info[i].invoice_sales_tax_amount.end());}


       if(info[i].ship_to_company == search02){info[i].ship_to_company.erase(info[i].ship_to_company.begin(),info[i].ship_to_company.end());}
       if(info[i].ship_to_country == search02){info[i].ship_to_country.erase(info[i].ship_to_country.begin(),info[i].ship_to_country.end());}
       if(info[i].ship_to_region == search02){info[i].ship_to_region.erase(info[i].ship_to_region.begin(),info[i].ship_to_region.end());}
       if(info[i].ship_to_city == search02){info[i].ship_to_city.erase(info[i].ship_to_city.begin(),info[i].ship_to_city.end());}
       if(info[i].ship_to_postal == search02){info[i].ship_to_postal.erase(info[i].ship_to_postal.begin(),info[i].ship_to_postal.end());}

       if(info[i].ship_to_address_1_Street_name == search02){info[i].ship_to_address_1_Street_name.erase(info[i].ship_to_address_1_Street_name.begin(),info[i].ship_to_address_1_Street_name.end());}
       if(info[i].ship_to_address_1_Street_number == search02){info[i].ship_to_address_1_Street_number.erase(info[i].ship_to_address_1_Street_number.begin(),info[i].ship_to_address_1_Street_number.end());}
       if(info[i].ship_to_address_2_Street_name == search02){info[i].ship_to_address_2_Street_name.erase(info[i].ship_to_address_2_Street_name.begin(),info[i].ship_to_address_2_Street_name.end());}
       if(info[i].ship_to_address_2_Street_number == search02){info[i].ship_to_address_2_Street_number.erase(info[i].ship_to_address_2_Street_number.begin(),info[i].ship_to_address_2_Street_number.end());}

       if(info[i].invoice_status == search02){info[i].invoice_status.erase(info[i].invoice_status.begin(),info[i].invoice_status.end());}
       if(info[i].invoice_batch_total == search02){info[i].invoice_batch_total.erase(info[i].invoice_batch_total.begin(),info[i].invoice_batch_total.end());}

}
      if  ( info[i].po_number != search02 && info[i].invoice_id != search02 &&
info[i].invoice_buyer_id  != search02 &&
info[i].invoice_batch_id  != search02 &&
info[i].invoice_date != search02 &&
info[i].invoice_due_date != search02 &&
info[i].invoice_terms != search02 &&
/*
info[i].invoice_amount != number02 &&
info[i].invoice_handling_cost  != number02 &&
info[i].invoice_sales_tax_amount != number02 &&
*/
info[i].ship_to_company != search02 &&
info[i].ship_to_country != search02 &&
info[i].ship_to_region != search02 &&
info[i].ship_to_city != search02 &&
info[i].ship_to_postal != search02 &&
info[i].ship_to_address_1_Street_name != search02 &&
info[i].ship_to_address_1_Street_number!= search02 &&
info[i].ship_to_address_2_Street_name != search02 &&
info[i].ship_to_address_2_Street_number!= search02 &&
info[i].invoice_status!= search02 &&
info[i].invoice_batch_total != search02 ) {cout<<"--->>>Not Found"<< endl;}



}//for
}//if==2



if (s==3) {goto startagain1;}

goto startagain;
startagain1:
Display(size, info);

///Stats


Stats(size, info);

///Write to file


  ofstream file("example.txt");
    if (file.good()) {
      for(int i=0; i<size; i++){							//printing values
        file << "Invoice: " << i + 1 << endl;
        file << "Product Number: "<< info[i].po_number<< endl;
        file << "Invoice ID: " << info[i].invoice_id<< endl;
        file << "Buyer ID : " << info[i].invoice_buyer_id<< endl;
        file << "Batch ID : "  << info[i].invoice_batch_id<< endl;

        file << "Invoice Date : " << info[i].invoice_date<< endl;
        file << "Invoice Due Date: "  << info[i].invoice_due_date<< endl;

        file << "Invoice Terms: " << info[i].invoice_terms<< endl;

        file << "Estimated price of product: " << info[i].estimated_price_of_product<< endl;
        file << "Invoice Invoice Amount: " << info[i].invoice_amount<< endl;
        file << "Invoice Handling Cost: " << info[i].invoice_handling_cost<< endl;
        file << "Invoice Sales Tax Amount: " << info[i].invoice_sales_tax_amount<< endl;
        file << "Delivery Charge: " << info[i].delivery_charge<< endl;

        file << "Ship to company: " << info[i].ship_to_company<< endl;
        file << "Ship to Country: " << info[i].ship_to_country<< endl;
        file << "Ship to Region: " <<info[i].ship_to_region<< endl;
        file << "Ship to City: " << info[i].ship_to_city<< endl;
        file << "Ship to Postal: " << info[i].ship_to_postal<< endl;

        file << "Ship to address 1 - Street Name: " << info[i].ship_to_address_1_Street_name<< endl;
        file << "Ship to address 1 - House Number: " << info[i].ship_to_address_1_Street_number<< endl;
        file << "Ship to address 2 - Street Name: " << info[i].ship_to_address_2_Street_name<< endl;
        file << "Ship to address 2 - House Number: " << info[i].ship_to_address_2_Street_number<< endl;

        file << "Invoice Status: " << info[i].invoice_status<< endl;
        file << "Invoice Batch Total: " << info[i].invoice_batch_total << endl;
      	file << "---------------------" << endl;


    }}
      cout << "Wrote to file: example.txt.\n";
    file.close();


	return 0;
}
