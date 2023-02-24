#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define LOGICAL_TYPES
//#define DATA_TYPES
//#define DECLARITION_AND_INITIALISATION
//#define COFFEE
int main()
{

    setlocale(LC_ALL, "Rus");
    cout << "Привет DataTypes" << endl; // << endl тоже самое что и /n
#if defined LOGICAL_TYPES
    cout << true << endl;
    cout << false << endl;
    cout << (bool)-0.0000000001 << endl;
#endif // LOGICAL_TYPES

#if defined DATA_TYPES
    cout << "long long:\n";
    cout << sizeof(long long) << endl;
    cout << "signed long long:" << LLONG_MIN << "..." << LLONG_MAX << endl;
    cout << "unsigned long long:" << 0 << "..." << ULLONG_MAX << endl;
    cout << "\n----------------------------------\n";

    cout << "float:\n";
    cout << sizeof(float) << endl;
    cout << FLT_MIN << " ... " << FLT_MAX << endl;
    cout << "\n----------------------------------\n";

    cout << "double:\n";
    cout << sizeof(double) << endl;
    cout << DBL_MIN << " ... " << DBL_MAX << endl;
    cout << "\n----------------------------------\n";
#endif // DATA_TYPES
#if defined DECLARITION_AND_INITIALISATION
    double price_of_coffee;
    cout << price_of_coffee << endl;
    int a; //объявления переменной без инициалезации
    int b = 0; //инициалезация переменной при объявлении
    int c;
    c = 0;   //инициалезация переменной после объявления,при помощи присовения
#endif // DECLARITION_AND_INITIALISATION

#ifdef COFFEE
    double price_off_coffee;
    int number_of_cups;
    cout << "Введите стоимость кофе"; cin >> price_off_coffee;
    cout << "Введите количество чашек: "; cin >> number_of_cups;
    double total_price = price_off_coffee * number_of_cups;
    cout << "Общая стоимость: " << total_price << endl;

#endif // COFFEE

    int speed = 0;
    const int MAX_SPEED = 250; // КОНСТАНТЫ ВСЕГДА ИМЕННУЮТСЯ ЗАГЛАВНЫМИ БУКВАМИ.
    cout << .5 << endl; // 5 это числовая константа типа 'int'
    cout << sizeof(.5) << endl;
    cout << typeid(.5).name() << endl;
    //  5. это числовая константа типа 'double'
    //  .5 это числовая константа типа 'double'
    //  .5f это числовая константа типа 'float'
    //  .5ull это числовая константа типа 'unsigned long long'
    cout << sizeof('+') << endl;
    cout << sizeof("+") << endl;
