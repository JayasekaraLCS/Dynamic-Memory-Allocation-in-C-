// JAYASEKARA LCS  IM/2019/043 
/* question - Letter Frequency 
Write a function that will take a string and return a count of each letter in the string. For 
example, "my dog ate my homework" contains 3 m's, 3 o's, 2 e's, 2 y's and one each of d, g, 
a, t, h, w, r and k. 
Your function should take a single string argument and return a dynamically allocated array 
of 26 integers representing the count of each of the letters a - z respectively. Your function 
should be case insensitive, i.e., count ‘A’ and ‘a’ as the occurrence of the letter ‘a’. Do not 
count non-letter characters (i.e., spaces, punctuation, digits, etc.) Write a program that will 
take a string from the user using cin, call your letter frequency function and print out the 
frequency of each letter in the string. Do not list letters that do not occur at least once. 
Example: 
Enter a string: “my dog at my homework” 
Letter frequency 
a 1 
d 1 
e 1 
g 1 
h 1 
k 1 
m 3 
o 3 
r 1 
t 1 
w 1 
y 2 

*/

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int * letterFrequency(char s[]);

int main()

{

  int *freq_letters;

  char *s = new char[100];

  freq_letters = new int[26];
  cout << "Enter a string: ";

  cin.getline(s, ' ');
  freq_letters = letterFrequency(s);

  //Display the count of string entered

  cout << "Letter Frequency " << endl;

  for (int i = 0; i < 26; i++)

  {
      if (freq_letters[i] != 0)
      cout << " " << static_cast<char>(i + 'a') << " " << freq_letters[i] << endl;

  }

  system("pause");

  return 0;

}


int * letterFrequency(char s[])

{

  int *occurrence_array;

  occurrence_array = new int[26];



  int letter_count;


 

  for (int i = 0; i < 26; i++)

  {

      letter_count = 0;

      for (int j = 0; j < strlen(s); j++)

      {

          

          if (int('a') + i == int(tolower(s[j])))

              letter_count++;

      }

      occurrence_array[i] = letter_count;

  }

  return occurrence_array;

}
