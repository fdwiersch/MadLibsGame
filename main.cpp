//Author:
#include <iostream>
#include <string>
using namespace std;

int main()
{
  // I. Variable declaration
string exclame ;
int wholenumber ;
string adj ;
  // II. Prompt the user for input and get their responses
cout << "enter an exclamation: ";
cin >> exclame;

cout << "enter a whole number (>1): ";
cin >> wholenumber;

cout << "enter an adjective: ";
cin >> adj;
  // III. Display the mad lib story
cout << "'" << exclame << "!', I said on my way home when I suddenly saw " << wholenumber << " ladybugs. I had never seen such " << adj << " ones before." ;
  return 0;
}
