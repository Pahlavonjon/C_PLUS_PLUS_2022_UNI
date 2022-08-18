#include <string>
#include <iostream>
using namespace std;
// Class definition for an Animal
class Animal
    {
    public:
        Animal();
            Animal(string pname, string pfav_food, string ptype, string pspecies);
            void eat(string food_type,int quantity);
            void treat(int fav_food_quantity);
            void sleep(int time);
            void make_sound(int time);
            ~Animal();
            static int id;
            int myid ;
            string name;
            string species;
            string type;
            string fav_food;
    };
    // implementation of the static int
    int Animal::id = 0 ;
    // implementation of the default Animal constructor
    Animal::Animal()
    {
        myid = id++ ;
        name = "?";
        species = "?";
        type = "?";
        fav_food ="?";
        cout << "Created an Animal of species " << species << " with ID: " << myid <<
        endl;
    }
    // implementation of a Animal constructor taking a name and food type
    Animal::Animal(string pname, string pfav_food, string ptype, string pspecies)
    {
        myid = id++ ;
        name = pname ;
        species = pspecies ;
        type = ptype ;
        fav_food = pfav_food;
        cout << "Created an Animal of species " << species << " with ID: " << myid <<
        endl;
    }
    // implementation of the Animal eat function
    void Animal::eat(string food,int quantity)
        {
        cout << "Hi, I'm " << name << " and I'm a " << species << " munching " << 
        quantity << " grams of " << food <<  endl;
        }
    // implementation of the Animal treat function
    void Animal::treat(int fav_food_quantity)
        {
        cout << "Hi, I'm " << name << " and I'm a " << species << " munching " << 
        fav_food_quantity << " tons of " << fav_food << " my favorite food!" << endl;
        }
    // implementation of the Animal sleep function
    void Animal::sleep(int time)
        {
        cout << "Hi, I'm " << name << " and I'm a " << species << " sleeping for " <<
        time << " hours" << endl;
        }
    // implementation of the Animal make_sound function
    void Animal::make_sound(int time)
        {
        cout << "Hi, I'm " << name << " and I'm a " << species << " a sound for " << 
        time << " seconds" << endl;
        }





    // implementation of the default Panda destructor
    Animal::~Animal()
        {
                cout << "Destroyed an Animal of species " << species << " with ID: " << 
        myid << endl ;
        }
        
    // Class definition for a Panda
    class Panda : public Animal
    {
        public:
        Panda();
        Panda(string pname, string pfav_food);
        ~Panda();
    };
    // implementation of the default Panda constructor
    Panda::Panda() : Animal("?","bamboooo","herbivore","Panda")
        {
        cout << "Created a " << species << " with ID: " << myid << endl;
        }
    // implementation of a Panda constructor taking a name and food type
    Panda::Panda(string pname, string pfav_food) : 
    Animal(pname,pfav_food,"herbivore","Panda")
        {
        cout << "Created a " << species << " with ID: " << myid << endl;
        }
    // implementation of the default Panda destructor
    Panda::~Panda()
        {
                cout << "Destroyed a " << species << " with ID: " << myid << endl ;
        }
    // Class definition for a Tiger
    class Tiger : public Animal
    {
        public:
            Tiger();
            Tiger(string pname, string pfav_food);
            void hunt();
            ~Tiger();
            int prey_killed;
    };
    // implementation of the default Tiger constructor
    Tiger::Tiger() : Animal("?","furry animals","carnivore","Tiger")
        {
        prey_killed = 0 ;
        cout << "Created a " << species << " with ID: " << myid << endl;
        }
    // implementation of a Tiger constructor taking a name and food type
    Tiger::Tiger(string pname, string pfav_food) : 
    Animal(pname,pfav_food,"carnivore","Tiger")
        {
        prey_killed = 0 ;
        cout << "Created a " << species << " with ID: " << myid << endl;
        }
    // implementation of the Tiger hunt function
    void Tiger::hunt()
        {
        prey_killed++ ;
        cout << "Hi, I'm " << name << " and I'm a " << species << " and I have made my " << prey_killed << " kills" << endl;
        }
    // implementation of the default Tiger destructor
    Tiger::~Tiger()
        {
                cout << "Destroyed a " << species << " with ID: " << myid << endl ;
        }
    // main program
    int main()
    {
        string pandanames[] = { "Wao","Dao","Ninja" } ;
        string tigernames[] = { "Bob","Suzie","Henry" } ;
        for ( int i = 0 ; i < 3 ; i++ )
        {
        Panda p(pandanames[i],"Jelly Babies");  // initialised
            p.eat("Chili Bamboo",i+2) ;
            p.treat(i+2) ;
            p.sleep(16) ;
            p.make_sound(12) ;
        Tiger t(tigernames[i],"Salad");   // initialised
            t.eat("Meerkat Burgers",i+3) ;
            t.treat(i+4) ;
            t.sleep(7) ;
            t.make_sound(50) ;
            t.hunt() ;
            }
}