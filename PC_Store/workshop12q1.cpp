#include <iostream>
#include <string>
using namespace std;
class animal{
    protected:
    string name ;              // the animal's name
        int animalID ;             // the animal's unique ID
        int volume ;               // the volume of the animal's body

        animal(string n, int v){
            this->name = n; 
            this->volume = v; 
            this->animalID = rand()%53483 + 39847547;
        }
        virtual string get_name() = 0;
        int get_animalID(){
            return this->animalID;
        }
        int get_volume(){
            return this->volume;
        }
        ~animal(){}
};
class hunter : protected animal{
    private:
        int kills;
        static int nextID;
    public:
        hunter(string n, int v){
            this->name = n;
            this->volume = v;
            this->kills = 0;
        }; 
}
int main(void){
    animal sheep("sheep",500);

}