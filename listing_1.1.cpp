#include <iostream>
#include <thread> //1

void hello()  //2
{
    std::cout<<"Hello Concurrent World\n";
}

int main()
{
    std::thread t(hello); //3
    t.join(); //4
}
