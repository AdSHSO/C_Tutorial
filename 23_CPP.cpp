#include <iostream> 
#include <cstdio>
#include <cstring>

using namespace std;

    class Auto{
        public:
            char marke[20];
            long int kennzeichen;
            
            void hupen(){
                cout << "Tuttut....!\n";
            }; 
        
    };

int main(void) {
    class Auto a1;
    strncpy(a1.marke, "Motorollo", 20);
    a1.kennzeichen= 123456;
    a1.hupen();
    printf("Ich bin ein %s", a1.marke);
}
