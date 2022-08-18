#ifndef A1_Class_H
#define A1_Class_H
#include <iostream>
#include <fstream>
#include <stack>
#include <vector>
#include <limits>
#include <thread>
#include <chrono>
#include <ctime>
#include <random>
#include <cstdlib>
#include <iomanip>
using namespace std;
class A1_Class{
    private:  
    
    public:
        void About(){
            cout << "\n\n This program is only intended for German practise . . .\n";
        }
        void A1_Course_Outline(){}

        void Year_2022(){}
        void Semester_1(){}
        void Term_1(){}
        void Kaffee_oder_Tee(){ // chapter 1
            string Coffee_or_Tea[23];
        }
        void Sprache_im_Kurs(){} // chapter 2
        void Staede_Laender_Sprachen(){} // chapter 3
        void Menschen_und_Haeuser(){} // chapter 4
        void Termine(){} // chapter 5
        void Orientierung(){} // chapter 6
        
        void Term_2(){}
        void Berufe(){ // chapter 7
            string A1_Week_7_Vocab[2][82] = {{""},{""}};
        }
        void Berlin_sehen(){ // chapter 8
            string A1_Week_8_Vocab[2][82] = {{""},{""}};
        }
        void Ab_in_den_Urlaub(){ // chapter 9
            string A1_Week_9_Vocab[2][82] = {{""},{""}};
        }
        void Essen_und_Trinken(){ // chapter 10
            string A1_Week_10_Vocab[2][82] = {{""},{""}};
        }
        void Kleidung_und_Wetter(){ // chapter 11
            string A1_Week_11_Vocab[2][82] = {
            {"die Kleidung","die Fabre, -n","hellblau","rosa","pink","grün","orange","weiß","gelb","grau","schwarz","rot","braun","blau","die Wärme","die Natur","Lust auf etwas akk haben","die Mode, n","wieder","der Trend s"
            ,"kommen und gehen","die Jeans ","die Jacke n","das T-Shirt s","eng","dunkelblau","tragen, er hat getragen","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","","",
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""},

            {"the clothing","the colour","light blue","pink","pink","green","orange","white","yellow","grey","black","red","brown","blue","the warmth, heat","the nature","to feel like doing something","the fashion","again, once more","the trend"
            ,"to come and go","pair of jeans","the jacket","the t-shirt","tight, narrow","dark blue","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            ,"","","","","","","","","","","","","","","","","","",""
            }};
        }
        void Koerper_und_Gesundheit(){ // chapter 12
            string A1_Week_12_Vocab[2][82] = {
        {
        "der Körper ", "der Körperteil e", "die Gesundheit", "Ski fahren", "der Volleyball", "das Tauchen", "tanzen er tanzt er hat getanzt",  
        "die Gymnastik", "Fußball spielen", "Tennis spielen", "schwimmen er schwimmt er ist geschwommen", "der Yoga", "der Kopf Köpfe", "der Fuß Fuße",
        "laufen er läuft er ist gelaufen", "der Volkssport", "sich erholen er erholt sich er hat sich erholt", "die Runde n", "der Stadtpark s", "den Kopf freimachen", "Das Auge n", 
        "das Ohr en", "ein bisschen", "schaffen er schafft er hat geschafft", "das Bein e", "das Herz en", "die Lunge n", "trainieren er trainiert er hat trainiert", "zusammengehören", "das Bodybuilding", "der Sportler", "brauchen er braucht er hat gebraucht", "stark", "der Muskel n", "der Arm e", "die Schulter n", 
        "der Bauch Bäuche", "der Rücken, ", "verbrauchen er verbraucht er hat verbraucht", "die Kalorie n", "der Bodybuilder", "der Bargfan s", "der Bergsport", "ungefährlich", "der Bergsteiger", "der Fall Fälle", "vergessen er vergisst er hat vergessen", "hart", "das Glück", "langsam", "der Finger ", 
        "strecken er streckt er hat gestreckt", "anwilkeln er winkelt an er hat angewinkelt", "die Ruhe", "das Tai Chi", "kombinieren er kombiniert er hat kombiniert", "die Entspannung", "die Konzentration", "überall", "die Senior en", "die Fingerspitze n", "die Sportart en", "die Nase n", "das Knie ", "der Mund Münder", "der Hals Hälse", 
        "das Haar e", "küssen er küsst er hat geküsst", "die Yogafiger en", "die Kobra s", "der Baum Bäume", "heben er hebt er hat gehoben", "regelmäßig", "das Bergsteigen", "die Ballsportart en", "die Gruppe n", "spannend", "die Kayakfahren", "das Wildwasser", "der Hai e", "furchbar" 
        },
        {
        "the body", "the body part", "the health", "to ski", "the volleyball", "diving", "to dance", 
        "gymnastics", "to play soccer", "to play tennis", "to swim", "the yoga", "the head", "the foot", 
        "to run", "the national sport", "to rest", "round", "city park", "to clear your head", "the eye", 
        "the ear", "a bit of", "to manage something", "the leg", "the heart", "the lung" ,"to train", "to go together", "bodybuilding", "the athlete", "to need", "strong", "the muscle", "the arm", "the shoulder",
        "the stomach", "the back", "to use", "the calorie", "the bodybuilder", "the mountain enthusiast", "the alpine sport", "nonhazardous", "the mountain climber", "the case", "to forget", "hard", "the luck", "slow", "the finger",
        "to stretch", "to wave", "quiet", "tai chi", "to combine", "relaxation", "concentration", "everywhere", "the senior", "the fingertip", "type of sport", "the nose", "the knee", "the mouth", "the neck", 
        "the hair", "to kiss", "the yoga position", "the cobra", "the tree", "to lift or raise something", "regularly", "mountain climbing", "type of ball sport", "the group", "exciting", "kayaking", "white water", "the shark", "terrible"
        }
        };
        }
};
#endif