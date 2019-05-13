#include<iostream>
#include<algorithm> // transform()
using namespace std;


int angka[100];
void RomantoArabic()
{
string input;
int n = 0,total=0,x=0,totals;
int i=0;
 cout<<"Input Roman Number: ";
 cin>>input;
	transform(input.begin(), input.end(), input.begin(), ::toupper);
	while(input[i]!=0)
	{
		if(input[i]== 'I')
		  angka[i]=1;

		  if(input[i]== 'V')
		  angka[i]=5;

		  if(input[i]== 'X')
		  angka[i]=10;

		  if(input[i]== 'L')
		  angka[i]=50;

		  if(input[i]== 'C')
		  angka[i]=100;

		  if(input[i]== 'D')
		  angka[i]=500;

		  if(input[i]== 'M')
		  angka[i]=1000;

		  i++;

	}
		while(angka[n]!=0)
		{
			 if(angka[n]>=angka[n+1])
			 {
				 total=total+angka[n];
			 }
			 else
			 if(angka[n]<angka[n+1])
				{
				  x=angka[n+1]-angka[n];
				  n++;
				}
				 totals=total+x;
				n++;
		}
cout << "-----"<< endl;
		cout<<totals<<endl;
cout << "-----"<< endl;

}

void ArabicToRoman()
{
int number;
cout<<"Input Arabic Number: ";cin>>number;
  const int count = 13;
  int arabic[count] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}, i, j;
  string roman[count] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"}, result = "";
  for (i = 0; i < count; i++)
  {
    for (j = 0; j < number / arabic[i]; j++)
      result += roman[i]; // stores the result
    number %= arabic[i]; // till numerator is less than 1; divides from arabic[0]till[13]
  }
cout << "-----"<< endl;
  cout << result<< endl;
cout << "-----"<< endl;
}

int main()
{int a;
start:
cout << "Roman To Arabic (Type: 1)"<< endl;
cout << "Arabic To Roman (Type: 2)" << endl;
cout << "Exit (Type: 3)" << endl;
cout << "Type: "; cin >>a;
switch (a){
case 1: RomantoArabic(); break;
case 2: ArabicToRoman();break;
case 3: goto end;
}
goto start;
end:
return 0;
}
