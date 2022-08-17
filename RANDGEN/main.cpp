#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <ctime>
using namespace std;

string RandomString(int len)
{
   string str = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   string newstr;
   int pos;
   while(newstr.size() != len) {
    pos = ((rand() % (str.size() - 1)));
    newstr += str.substr(pos,1);
   }
   return newstr;
}

int main(int argc,char* argv[])
{
  if(argc > 2){
        cout<<"Too many Agruments!!"<<endl <<" only Numaric value allowed with no upper limit Like: randgen 1000."<<endl;
  }
  else{
int lnth;
 if(atoi(argv[1]) <= 0){
        lnth=1000;
}else{
    lnth=atoi(argv[1]);
}
   srand(time(0));
   string random_str = RandomString(lnth);
   cout  << random_str << endl;
}
}
