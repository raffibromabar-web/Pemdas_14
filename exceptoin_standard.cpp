#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main()
{
cout << "Awal program" << endl;

try

{
    //deklarasi array data dengan panjang index 3

    array <int, 3> data = {1, 2, 3};
    cout << data.at(5) << endl;

}

//kondisi jika terjadi error didalam try

catch (exception& e)
{
    cout << e.what() << endl;

}
cout << "Baris program terakhir" << endl; //penanda 2

return 0;
}