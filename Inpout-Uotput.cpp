
#include <iostream>

using namespace std;

int sum(int CountFirst, int CountSecond)//функция суммы чисел
{
    return CountFirst + CountSecond;
}

int dif(int CountFirst, int CountSecond)//функция разности чисел
{
    return CountFirst - CountSecond;
}

int ArithMean(int CountFirst, int CountSecond)//функция нахождения Среднеарифмитического
{
    if (CountFirst < 0)
    {
        CountFirst = CountFirst * -1;
    }
    if (CountSecond < 0)
    {
        CountSecond = CountSecond * -1;
    }
    return (CountFirst + CountSecond) / 2;
}

int main()
{
    int CountFirst;
    int CountSecond;
    cout<<"Введите 1-ое число: "<<endl;
    cin>>CountFirst;
    cout<<"Введите 2-ое число: "<<endl;
    cin>>CountSecond;
    cout<< "Cумма чисел = "<<sum(CountFirst,CountSecond)<<endl;
    cout<<"Разность чисел = "<<dif(CountFirst,CountSecond)<<endl;
    cout<<"Среднеарифмитическое = "<<ArithMean(CountFirst,CountSecond)<<endl;
    

    return 0;
}
