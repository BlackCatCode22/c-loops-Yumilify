#include <iostream>
#include <string>
using namespace std;

int main()
{
   string phrase= "Giraffe Academy";
   string phrasesub;
   phrasesub = phrase.substr(8, 3);
   cout << phrasesub;

   string test1 = "abcdefghi";
   cout << test1 << endl;
   cout << "size:" << test1.size() << endl;
   cout << "test1[1]:" << test1[1] << endl;
   cout << "test1.at(3)" << test1.at(3) << endl;

   test1[2] = 'C';
   cout << test1 << endl;
   test1 = test1 + "jklmnop";

   cout << "length:" << test1.length() << endl;
   string test2 = "123";
   string test3;

   test3 = test1 + test2;
   cout << "test3:" << test3 << endl;

   if (test3.empty()) cout << "test3 is empty" << endl;

   test3.clear();
   cout << " test3:" << test3 << endl;

   if (test3.empty()) cout << "test3 is empty"<< endl;
   else cout << "test3 is not empty" << endl;

   string test4 = to_string(-10.5);
   cout << test4 << endl;

   string name;
       cout << "Enter name: ";
       cin >> name;
       cout << "Name: "<< name << endl;
       getline(cin, name);
   string myTestStr = " The quick brown fox jumped over the lazy dog";
   int myIndex = myTestStr.find("fox");
   cout << "The index of fox is: " << endl;

   int atIndexFour = myTestStr.at(4);
   cout << "This is at index four:" << atIndexFour << endl;




return 0;


}