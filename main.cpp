#include <iostream>
#include <chrono>


using namespace std;
using namespace std::chrono;


extern "C" int funk_asm(int a, int b);
extern "C" void print(const char* str);

int funk_cpp(int a, int b)
{
    return a+b;
}

int main()
{   
    // int a = 10, b = 5, w_asm = 0, w_cpp = 0;

    // auto start1 = high_resolution_clock::now();
    // w_cpp = funk_cpp(a,b);
    // auto end1 = high_resolution_clock::now();
    // duration<double, nano> czascpp = end1 - start1;


    // auto start = high_resolution_clock::now();
    // w_asm = funk_asm(a,b);
    // auto end = high_resolution_clock::now();
    // duration<double, nano> czasasm = end - start;

    
    
    // cout<<"wynik fukncji i czas asm: "<<w_asm<<", "<<czasasm.count()<<endl;
    // cout<<"wynik fukncji i czas cpp: "<<w_cpp<<", "<<czascpp.count()<<endl;


    const char* message = "aha okok\n";
    const char* message1 = "aha okok\n";


    auto start = high_resolution_clock::now();
    print(message);
    auto end = high_resolution_clock::now();
    duration<double, nano> czasasm = end - start;



    auto start1 = high_resolution_clock::now();
    printf(message1);
    auto end1 = high_resolution_clock::now();
    duration<double, nano> czascpp = end1 - start1;
    
    cout<<"czas asm: "<<czasasm.count()<<endl;
    cout<<"czas cpp: "<<czascpp.count()<<endl;
    return 0;
}