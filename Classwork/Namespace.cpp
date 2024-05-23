#include <cstdio>
#include <string>

// Program : 3
namespace ns1
{
    int Num1 = 100;
    void show()
    {
        printf("NS1 show : %d\n", Num1);
    }
}

namespace ns2
{
    int Num1 = 200;
    void show()
    {
        printf("NS2 show : %d\n", Num1);
    }
}

namespace ns3
{
    int Num1 = 300;
    void show()
    {
        printf("NS3 show : %d\n", Num1);
    }
}

namespace ns4
{
    int Num1 = 400;
    void show()
    {
        printf("NS4 show : %d\n", Num1);
    }
}

// Method 1 to print / show
int main1()
{
    ns1::show();
    ns2::show();
    ns3::show();
    ns4::show();
}

// Method 2 to print / show
using namespace ns3;
int main()
{
    show();
    return 0;
}



// // program 2
// namespace ns1{
//     int Num1 = 100;
// }
// namespace ns2{
//     int Num1 = 200;
// }

// int Num1 = 300;     // Global variable, will get space in BSS

// int main(){
//     int Num1 = 500;     // :ocal variable
//     printf("Value of Num1 in ns1 : %d\n",ns1::Num1);
//     printf("Value of Num1 in ns2 : %d\n",ns2::Num1);
//     printf("Value of Num1 in stack : %d\n",Num1);

// }

// Program 1
// int Num1 = 500;
// int main(){
//     int Num1 = 100;
//     printf("value of Num : %d\n", Num1);
//     return 0;
// }

// void show(){
//     printf("Value of Num1 by Show ",Num1);
// };