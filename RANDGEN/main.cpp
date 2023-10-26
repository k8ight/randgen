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
    while (newstr.size() != len) {
        pos = ((rand() % (str.size() - 1)));
        newstr += str.substr(pos, 1);
    }
    return newstr;
}

int main(int argc, char* argv[])
{
    int lnth = 128;
    string random_str;
    int split = 1;
    if (argc > 3) {
        cout << "Too many Agruments!!" << endl << "Default out 128 bit only Numaric value allowed with no upper limit Like: randgen 1024 0." << endl;
    }else {
        if (argv[1] != NULL) {
            if (atoi(argv[1]) >= 1) {
                lnth = atoi(argv[1]);
            }
            if (argv[2] != NULL) {
                if (atoi(argv[2]) >= 1) {
                    split = atoi(argv[2]);
                }
            }
            else {
                split = 1;
            }
        }
        else {
            lnth = 128;
        }
        

        srand(time(0));

        for (int i = 1; i <= split; i++) {
            if (i > 1)
            {
                random_str += "-";
            }
            random_str += RandomString(lnth);
        }
        cout << random_str << endl;
    }
}
