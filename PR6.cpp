#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <stdlib.h>




// CAse 1
void find_frequency(char s[], int count[])
{
   int c = 0;

   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z' )
         count[s[c]-'a']++;
      c++;
   }
}


int C1()
{
   char string[1000];
   int c, count[26] = {0};

   printf("Input a string\n");
   gets(string);
cin >> string;


   find_frequency(string, count);

   printf("Character Count\n");

   for (c = 0 ; c < 26 ; c++)
      printf("%c \t  %d\n", c + 'a', count[c]);

return 0;
}

// CAse 2
 int C2()
{
	string str = "Today, let's drop into a world you can reach out and touch. In this article, we'll compose a first-person exploration from scratch, quickly and without difficult math, using a technique called raycasting. You may have seen it before in games like Daggerfall and Duke Nukem 3D, or more recently in Notch Persson's ludum dare entries. If it's good enough for Notch, it's good enough for me! [Demo (arrow keys / touch)] [Source] Raycasting feels like cheating, and as a lazy programmer, I love it. You get the immersion of a 3D environment without many of the complexities of real 3D to slow you down. For example, raycasts run in constant time, so you can load up a massive world and it will just work, without optimization, as quickly as a tiny world. Levels are defined as simple grids rather than as trees of polygon meshes, so you can dive right in without a 3D modeling background or mathematics PhD. It's one of those techniques that blows you away with simplicity. In fifteen minutes you'll be taking photos of your office walls and checking your HR documents for rules against building workplace gunfight simulations";

	unordered_map<char, int> freq;
	for_each(begin(str),
				end(str),
				[&freq](const char& c) {
					freq[c]++;
				});

	for(auto& pair: freq) {
		cout << '{' << pair.first << ": " << pair.second
				<< '}' << '\n';
	}

return 0;
}

// CAse 3
int C3()
{
    char string[1500] = "Today, let's drop into a world you can reach out and touch. In this article, we'll compose a first-person exploration from scratch, quickly and without difficult math, using a technique called raycasting. You may have seen it before in games like Daggerfall and Duke Nukem 3D, or more recently in Notch Persson's ludum dare entries. If it's good enough for Notch, it's good enough for me! [Demo (arrow keys / touch)] [Source] Raycasting feels like cheating, and as a lazy programmer, I love it. You get the immersion of a 3D environment without many of the complexities of real 3D to slow you down. For example, raycasts run in constant time, so you can load up a massive world and it will just work, without optimization, as quickly as a tiny world. Levels are defined as simple grids rather than as trees of polygon meshes, so you can dive right in without a 3D modeling background or mathematics PhD. It's one of those techniques that blows you away with simplicity. In fifteen minutes you'll be taking photos of your office walls and checking your HR documents for rules against building workplace gunfight simulations";
    int i, j;
    printf("Enter a string: ");

    for(i = 0; string[i] != '\0'; ++i)
    {
        while (!( (string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z') || string[i] == '\0') )
        {
            for(j = i; string[j] != '\0'; ++j)
            {
                string[j] = string[j+1];
            }
            string[j] = '\0';
        }
    }
    printf("Output String: ");
  cout << string;
    return 0;
}

char *replaceWord(const char *s, const char *oldW,
                                 const char *newW)
{
    char *result;
    int i, cnt = 0;
    int newWlen = strlen(newW);
    int oldWlen = strlen(oldW);

    // Counting the number of times old word
    // occur in the string
    for (i = 0; s[i] != '\0'; i++)
    {
        if (strstr(&s[i], oldW) == &s[i])
        {
            cnt++;

            // Jumping to index after the old word.
            i += oldWlen - 1;
        }
    }

    // Making new string of enough length
    result = (char *)malloc(i + cnt * (newWlen - oldWlen) + 1);

    i = 0;
    while (*s)
    {
        // compare the substring with the result
        if (strstr(s, oldW) == s)
        {
            strcpy(&result[i], newW);
            i += newWlen;
            s += oldWlen;
        }
        else
            result[i++] = *s++;
    }

    result[i] = '\0';
    return result;
}

// Driver Program
int C4()
{
    char str[] = "Today, let's drop into a world you can reach out and touch. In this article, we'll compose a first-person exploration from scratch, quickly and without difficult math, using a technique called raycasting. You may have seen it before in games like Daggerfall and Duke Nukem 3D, or more recently in Notch Persson's ludum dare entries. If it's good enough for Notch, it's good enough for me! [Demo (arrow keys / touch)] [Source] Raycasting feels like cheating, and as a lazy programmer, I love it. You get the immersion of a 3D environment without many of the complexities of real 3D to slow you down. For example, raycasts run in constant time, so you can load up a massive world and it will just work, without optimization, as quickly as a tiny world. Levels are defined as simple grids rather than as trees of polygon meshes, so you can dive right in without a 3D modeling background or mathematics PhD. It's one of those techniques that blows you away with simplicity. In fifteen minutes you'll be taking photos of your office walls and checking your HR documents for rules against building workplace gunfight simulations";
  char c[] = "3D";
  char d[] = "3-dimension";

    char *result = NULL;

    // oldW string
    printf("Old string: %s", str) ;
cout << "" << endl;

    result = replaceWord(str, c, d);
    printf("New String: %s", result);

    free(result);
    return 0;
}


// Main Function
int main () {

   int action;

cout << "Choose Action" << endl;
cout << "1 -Find Frequency of Characters in a C-style String" << endl;
cout << "2 - Find Frequency of Characters of a String Object;"<< endl;
cout << "3 - Remove all Characters in a String Except Alphabets"<< endl;
cout << "4 - Replace C-Strings 3D to 3-dimension " << endl;
cin >> action;

   switch(action) {
      case 1 :
         C1();
break;
      case 2 :
        C2();
      cout << "Fot this text [resource: http://www.playfuljs.com/a-first-person-engine-in-265-lines/]:";
break;
      case 3 :
        C3();
break;
      case 4 :
       C4();
break;
      default:
        cout << "Invalid Action" << endl;
        break;
    }
   return 0;
}
