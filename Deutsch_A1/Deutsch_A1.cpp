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
void About(){
    cout << "\n\n This program is only intended for German practise . . .\n";
}
void A1_Course_Outline(){}

void Year_2022(){}
void Semester_1(){}
void Term_1(){}
void Kaffee_oder_Tee(){} // chapter 1
void Sprache_im_Kurs(){} // chapter 2
void Staede_Laender_Sprachen(){} // chapter 3
void Menschen_und_Haeuser(){} // chapter 4
void Termine(){} // chapter 5
void Orientierung(){} // chapter 6

void Term_2(){}
void Berufe(){} // chapter 7
void Berlin_sehen(){} // chapter 8
void Ab_in_den_Urlaub(){} // chapter 9
void Essen_und_Trinken(){} // chapter 10
void Kleidung_und_Wetter(){} // chapter 11
void Koerper_und_Gesundheit(){ // chapter 12
    string A1_Week_12_Vocab[2][82] = {
        {
        "der Körper, ", "der Körperteil, e", "die Gesundheit", "Ski fahren", "der Volleyball", "das Tauchen", "tanzen, er tanzt, er hat getanzt",  
        "die Gymnastik", "Fußball spielen", "Tennis spielen", "schwimmen, er schwimmt, er ist geschwommen", "der Yoga", "der Kopf, Köpfe", "der Fuß, Fuße", 
        "laufen, er läuft, er ist gelaufen", "der Volkssport", "sich erholen, er erholt sich, er hat sich erholt", "die Runde, n", "der Stadtpark, s", "den Kopf freimachen", "Das Auge, n", 
        "das Ohr, en", "ein bisschen", "schaffen, er schafft, er hat geschafft", "das Bein, e", "das Herz, en", "die Lunge, n", "trainieren, er trainiert, er hat trainiert", "zusammengehören", "das Bodybuilding", "der Sportler", "brauchen, er braucht, er hat gebraucht", "stark", "der Muskel, n", "der Arm, e", "die Schulter, n", 
        "der Bauch, Bäuche", "der Rücken, ", "verbrauchen, er verbraucht, er hat verbraucht", "die Kalorie, n", "der Bodybuilder", "der Bargfan, s", "der Bergsport", "ungefährlich", "der Bergsteiger", "der Fall, Fälle", "vergessen, er vergisst, er hat vergessen", "hart", "das Glück", "langsam", "der Finger, ", 
        "strecken, er streckt, er hat gestreckt", "anwilkeln, er winkelt an, er hat angewinkelt", "die Ruhe", "das Tai Chi", "kombinieren, er kombiniert, er hat kombiniert", "die Entspannung", "die Konzentration", "überall", "die Senior, en", "die Fingerspitze, n", "die Sportart, en", "die Nase, n", "das Knie, -", "der Mund, Münder", "der Hals, Hälse", 
        "das Haar, -e", "küssen, er küsst, er hat geküsst", "die Yogafiger, -en", "die Kobra, -s", "der Baum, Bäume", "heben, er hebt, er hat gehoben", "regelmäßig", "das Bergsteigen", "die Ballsportart, -en", "die Gruppe, -n", "spannend", "die Kayakfahren", "das Wildwasser", "der Hai, -e", "furchbar" 
        },
        {
        "the body", "the body part", "health", "to ski", "the volleyball", "diving", "to dance",  
        "gymnastics", "to play football", "to play tennis", "to swim", "yoga", "the head", "the foot", 
        "to run", "national sport", "to rest", "round", "city park", "to clear your head", "the eye", 
        "the ear", "a bit of", "to manage something", "the leg", "the heart", "to train", "to go together", "bodybuilding", "the athlete", "to need", "strong", "the muscle", "the arm", "the shoulder",
        "the stomach", "the back", "to use", "the calorie", "the bodybuilder", "the mountain enthusiast", "the alpine sport", "nonhazardous", "mountain climber", "the case", "to forget", "hard", "the luck", "the finger",
        "to stretch", "to wave", "quiet", "tai chi", "to combine", "relaxation", "concentration", "everywhere", "the senior", "the fingertip", "type of sport", "the nose", "the knee", "the mouth", "the neck", 
        "the hair", "to kiss", "the yoga position", "the cobra", "the tree", "to lift or raise something", "regularly", "mountain climbing", "type of ball sport", "the group", "exciting", "kayaking", "the white water", "the shark", "terrible"
        }
        };
} 

void Practise_Quizzes(){}
void Deutsch_A1_Vocabulary(int The_Array){
    string A1_Infinitive[5] = {"fruhstucken","lernen","machen","kaufen","planen"};
    string A1_Past_Participle[5] = {"gefrühstückt","gelernt","gemacht","gekauft","geplant"};

    string A1_Week_12_Vocab[2][82] = {
        {
        "der Körper, ", "der Körperteil, e", "die Gesundheit", "Ski fahren", "der Volleyball", "das Tauchen", "tanzen, er tanzt, er hat getanzt",  
        "die Gymnastik", "Fußball spielen", "Tennis spielen", "schwimmen, er schwimmt, er ist geschwommen", "der Yoga", "der Kopf, Köpfe", "der Fuß, Fuße", 
        "laufen, er läuft, er ist gelaufen", "der Volkssport", "sich erholen, er erholt sich, er hat sich erholt", "die Runde, n", "der Stadtpark, s", "den Kopf freimachen", "Das Auge, n", 
        "das Ohr, en", "ein bisschen", "schaffen, er schafft, er hat geschafft", "das Bein, e", "das Herz, en", "die Lunge, n", "trainieren, er trainiert, er hat trainiert", "zusammengehören", "das Bodybuilding", "der Sportler", "brauchen, er braucht, er hat gebraucht", "stark", "der Muskel, n", "der Arm, e", "die Schulter, n", 
        "der Bauch, Bäuche", "der Rücken, ", "verbrauchen, er verbraucht, er hat verbraucht", "die Kalorie, n", "der Bodybuilder", "der Bargfan, s", "der Bergsport", "ungefährlich", "der Bergsteiger", "der Fall, Fälle", "vergessen, er vergisst, er hat vergessen", "hart", "das Glück", "langsam", "der Finger, ", 
        "strecken, er streckt, er hat gestreckt", "anwilkeln, er winkelt an, er hat angewinkelt", "die Ruhe", "das Tai Chi", "kombinieren, er kombiniert, er hat kombiniert", "die Entspannung", "die Konzentration", "überall", "die Senior, en", "die Fingerspitze, n", "die Sportart, en", "die Nase, n", "das Knie, -", "der Mund, Münder", "der Hals, Hälse", 
        "das Haar, -e", "küssen, er küsst, er hat geküsst", "die Yogafiger, -en", "die Kobra, -s", "der Baum, Bäume", "heben, er hebt, er hat gehoben", "regelmäßig", "das Bergsteigen", "die Ballsportart, -en", "die Gruppe, -n", "spannend", "die Kayakfahren", "das Wildwasser", "der Hai, -e", "furchbar" 
        },
        {
        "the body", "the body part", "health", "to ski", "the volleyball", "diving", "to dance",  
        "gymnastics", "to play football", "to play tennis", "to swim", "yoga", "the head", "the foot", 
        "to run", "national sport", "to rest", "round", "city park", "to clear your head", "the eye", 
        "the ear", "a bit of", "to manage something", "the leg", "the heart", "to train", "to go together", "bodybuilding", "the athlete", "to need", "strong", "the muscle", "the arm", "the shoulder",
        "the stomach", "the back", "to use", "the calorie", "the bodybuilder", "the mountain enthusiast", "the alpine sport", "nonhazardous", "mountain climber", "the case", "to forget", "hard", "the luck", "the finger",
        "to stretch", "to wave", "quiet", "tai chi", "to combine", "relaxation", "concentration", "everywhere", "the senior", "the fingertip", "type of sport", "the nose", "the knee", "the mouth", "the neck", 
        "the hair", "to kiss", "the yoga position", "the cobra", "the tree", "to lift or raise something", "regularly", "mountain climbing", "type of ball sport", "the group", "exciting", "kayaking", "white water", "the shark", "terrible"
        }
        };
    // switch (The_Array){
    //     case 1:
    //         return A1_Infinitive;
    //         break;
    //     case 2:
    //         return A1_Past_Participle;
    //         break;
    // }
    // return NULL;
}

void Test_Past_Participle(string A1_Infinitive[],string A1_Past_Participle[],int length){
    double correct_answers = 0;
    double test_percentage = 0;
    double total_vocab_questions = 0;
    for (int k = 0; k < length; k++){
            cout << "\n\n What is the past participle of "<< (A1_Infinitive[k])<< "? \n\n ";
            total_vocab_questions++;
            string user_input_past_participle = "";
            cin >> user_input_past_participle;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                user_input_past_participle = "";
            }
            if (user_input_past_participle != A1_Past_Participle[k]){
                cout << "\n Wrong . . . the correct answer was "<< A1_Past_Participle[k]<< "\n";
            }
            if (user_input_past_participle == A1_Past_Participle[k]){
                cout << "\ncorrect! \n";
                correct_answers++;
            }
        }
        test_percentage = ((correct_answers)/total_vocab_questions);
        cout << "\n\n You score is: "<<correct_answers<<" out of "<<total_vocab_questions<<"  "<<setprecision(2)<<test_percentage*100<< "% \n\n\n";
}

void Test_Vocab(string A1_Deutsch[],string A1_Translation[],int length){
    double correct_answers = 0;
    double test_percentage = 0;
    double total_vocab_questions = 0;
    for (int k = 0; k < length; k++){
            cout << "\n\n What is the definition of "<< (A1_Deutsch[k])<< "? \n\n ";
            total_vocab_questions++;
            string user_input_past_participle = "";
            cin >> user_input_past_participle;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                user_input_past_participle = "";
            }
            if (user_input_past_participle != A1_Translation[k]){
                cout << "\n Wrong . . . the correct answer was "<< A1_Translation[k]<< "\n";
            }
            if (user_input_past_participle == A1_Translation[k]){
                cout << "\ncorrect! \n";
                correct_answers++;
            }
        }
        test_percentage = ((correct_answers)/total_vocab_questions);
        cout << "\n\n You score is: "<<correct_answers<<" out of "<<total_vocab_questions<<"  "<<setprecision(2)<<test_percentage*100<< "% \n\n\n";
}

void Deutsch_Text_1(){}

void Semester_2(){}
void Term_3(){}
void Term_4(){}

void test_A1_Past_Tense_Vocab(){
     About();

    bool run_vocab_test = true;
    int vocab_test_score = 0;
    int total_vocab_questions = 0;
    int correct_answers = 0;
    double test_percentage = 0;
    string user_response = "";

    string A1_Infinitive[5] = {"fruhstucken","lernen","machen","kaufen","planen"}; 
    string A1_Past_Participle[5] = {"gefrühstückt","gelernt","gemacht","gekauft","geplant"};

    string A1_Infinitive_Seperable[3] = {"einfakufen","anschauen","aufräumen"};
    string A1_Past_Participle_Seperable[3] = {"eingekauft","angeschaut","aufgeräumt"};

    string A1_Infinitive_Inseperable[3] = {"besuchen","erreichen","besichtigen"};
    string A1_Past_Participle_Inseperable[3] = {"besucht","erreicht","besichtigt"};

    string A1_Infinitive_no_ge[4] = {"studieren","telefonieren","reparieren","fotografieren"};
    string A1_Past_Participle_no_ge[4] = {"studiert","telefoniert","repariert","fotografiert"};
    
    string A1_Infinitive_Irregular[5] = {"liegen","fahren","bleiben","gehen","schwimmen"};
    string A1_Past_Participle_Irregular[5] = {"gelegen","gefahren","geblieben","gegangen","geschwommen"};

    while (run_vocab_test == true){

        Test_Past_Participle(A1_Infinitive,A1_Past_Participle,5);

        Test_Past_Participle(A1_Infinitive_Seperable,A1_Past_Participle_Seperable,3);

        Test_Past_Participle(A1_Infinitive_Inseperable,A1_Past_Participle_Inseperable,3);

        Test_Past_Participle(A1_Infinitive_no_ge,A1_Past_Participle_no_ge,4);

        Test_Past_Participle(A1_Infinitive_Irregular,A1_Past_Participle_Irregular,5);

        cout << "\n\n You have completed the past participle test.. do you want to contenue?  y/n\n";
        cin >> user_response;
        if (user_response != "y"){
            run_vocab_test = false;
        }
    }
}

// void Ramdomiser____(int *array_index, bool *run_randomiser, int *the_random_array_order){
//     srand(time(0));
//     int *array_index_to_be_selected = new int[5];
//     the
//     bool repeated_word = false;
//     bool dont_stop = true;
//     while (dont_stop == true){
//         while (*run_randomiser == true){
//             for (int k = 0; k < 5; k++){
//                 *array_index = rand()%4;
//                 for (int j = 0; j < k; j++){
//                     if (array_index_to_be_selected[j] == *array_index){
//                         repeated_word = true;
//                     }   
//                 }
//                 while (repeated_word == true){
//                     *array_index = rand()%4;
//                     for (int j = 0; j < k; j++){
//                         if (array_index_to_be_selected[j] != *array_index){
//                             repeated_word = false;
//                         }   
//                     }
//                     repeated_word = false;
//                 }
//                 if (repeated_word == false){
//                     array_index_to_be_selected[k] = *array_index;
//                 }
//             }
//             *run_randomiser = false;
//             the_random_array_order = array_index_to_be_selected;
//             for (int k = 0; k < 5; k++){
//                 cout << "  "<<array_index_to_be_selected[k];
//             }
//             cout << "\n";
//         }
//     }
//     delete[] array_index_to_be_selected;
// }

int* Ramdomiser___(bool *run_randomiser, int * returned_random_array, int array_length){
    srand(time(0));
    bool dont_stop = true;
   
    int * the_random_array_order = new int[abs(array_length)];
    int * temp_numbers = new int[abs(array_length)];
    for (int k = 0; k < abs(array_length); k++){
        *(the_random_array_order+k) = -1;
    }
    for (int k = 0; k < abs(array_length); k++){
        *(temp_numbers+k) = -2;
    }
    // returned_random_array = new int[5];
    // while (dont_stop == true){
        bool while_inner = true;
        while (*run_randomiser == true){



            for (int k = 0; k < abs(array_length); k++){
                cout << " This is the "<<k+1<<" loop\n\n";
               
                
                
                // name = name.append("@gmail.com");

                while (while_inner == true){
                this_thread::sleep_for(chrono::milliseconds(170));
                *(the_random_array_order+k) = rand()%5;
                cout << " " << *(the_random_array_order+k)<<"\n\n";
                int distinct = 0;
                for (int j = 0; j < abs(array_length); j++){
                    if (*(the_random_array_order+k) != *(temp_numbers+j)){
                        distinct++;
                        cout << " distinct "<<distinct;
                        if (distinct == abs(array_length)){
                            *(temp_numbers+k) = *(the_random_array_order+k);
                            cout << "\n\n   selected "<<*(temp_numbers+k)<<"\n";
                            break;
                        }
                    }
                    // else{
                    //     *(the_random_array_order+k) = rand()%5;
                    // }
                }
                }
                

                
                // for (int j = 0; j < k+1; j++){
                //     if ((*(the_random_array_order+k) == *(the_random_array_order+j))){
                //         while ((distinct != k) && (k != j) && *(the_random_array_order+k) == *(the_random_array_order+j)){
                //             this_thread::sleep_for(chrono::milliseconds(170));
                //             *(the_random_array_order+k) = rand()%5;
                //             cout << " "<< *(the_random_array_order+k);
                //             for (int f = 0; f < k+1; f++){
                //                 if (*(the_random_array_order+k) != *(the_random_array_order+f)){
                //                     distinct++;
                //                     if (distinct == k){
                //                         break;
                //                     }
                //                 }
                //             }
                //         }
                //         cout << "\n";
                //     }
                //     else {
                //         distinct++;
                //     }
                // }
            }
            returned_random_array = the_random_array_order;
            cout << "\n\n";
            for (int k = 0; k < 5; k++){
                cout << " " <<*(returned_random_array+k);
            }
            // delete[] the_random_array_order;
            *run_randomiser = false;
        }
    // }
    return the_random_array_order;
}

void Sprechst_du_mir(bool *Gespraech_beenden){
    srand(time(0));
    int conversation_depth = 8;
    string Gespraech_first[] = {"Guten tag!", "Guten morgen!", "Gruß Gott!","Hallo!"};
    string Gespraech_second[] = {"Wie geht's es dir?","Wie heißen Sie?"};
    string Gespraech_third[] = {"Wo arbeiten Sie?","Wo wohnen Sie?","Woher kommen Sie?","Haben Sie eine Geschwister?",
                                "Wie ist das Wetter heute?","Welche Sprachen sprechen Sie?",""};
    string Gespraech_fourth[] = {"Was machen Sie gern am Wochenende?","Was sind Ihr Hobby?","Was machen Sie gern?"};
    string Gespraech_fifth[] = {"Haben Sie einen Job?","Wann stehen Sie auf?","Was machen Sie nicht gern?", "Wann frühstücken Sie?"};
    string Gespraech_sixth[] = {"Was haben Sie gestern getrunken?","Wann haben Sie eine Mittagspause?","Wann haben Sie gearbeitet?", "Was haben Sie gestern gemacht?"};
    string Gespraech_seventh[] = {"Was haben Sie gestern gegessen?","Wann sind Sie vorgestern aufgestanden?","Wann sind Sie zur Universtät gefahren?", "Waren Sie schon mal in Deutschland?"};
    string Gespraech_eighth[] = {"Wann sind Sie ins Bett gegangen?","Was ist Ihr Lieblingsessen?","Sind Sie in Ihr Klassenzimmer am großten?", "Wann frühstücken Sie?"};
    
    string** Gespraech_Alles_Array = new string*[conversation_depth];
    *(Gespraech_Alles_Array) = Gespraech_first;
    *(Gespraech_Alles_Array+1) = Gespraech_second;
    *(Gespraech_Alles_Array+2) = Gespraech_third;
    *(Gespraech_Alles_Array+3) = Gespraech_fourth;
    *(Gespraech_Alles_Array+4) = Gespraech_fifth;
    *(Gespraech_Alles_Array+5) = Gespraech_sixth;
    *(Gespraech_Alles_Array+6) = Gespraech_seventh;
    *(Gespraech_Alles_Array+7) = Gespraech_eighth;

    string deine_Antwort = "";
    int next_response = 0;

    while (*Gespraech_beenden == false){
        while (deine_Antwort == "" && *Gespraech_beenden == false){
            this_thread::sleep_for(chrono::milliseconds(250));
            cout << "\n\n " << *(*(Gespraech_Alles_Array+next_response)+(rand()%(sizeof(*Gespraech_Alles_Array+next_response)/sizeof((Gespraech_Alles_Array[next_response][0]))))  )<<"\n";
            cin >> deine_Antwort;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                deine_Antwort = "";
            }
            if (deine_Antwort == "auf weidersehen" || deine_Antwort == "bis bald" || deine_Antwort == "bis spater"){
                *(Gespraech_beenden) = true;
            }
            deine_Antwort = "";
            next_response++;
            if (next_response <= conversation_depth-2){
                next_response == 0;
            }
        }
    }

    // while (*Gespraech_beenden == false){
    //     this_thread::sleep_for(chrono::milliseconds(250));
    //     cout << Gespraech_first[(rand()%(sizeof(Gespraech_first)/sizeof(Gespraech_first[0])))];
    //     cout << Gespraech_second[(rand()%(sizeof(Gespraech_second)/sizeof(Gespraech_second[0])))];
    //     cout << Gespraech_third[(rand()%(sizeof(Gespraech_third)/sizeof(Gespraech_third[0])))];
    //     cout << Gespraech_fourth[(rand()%(sizeof(Gespraech_fourth)/sizeof(Gespraech_fourth[0])))];
    //     cout << Gespraech_fifth[(rand()%(sizeof(Gespraech_fifth)/sizeof(Gespraech_fifth[0])))];
    //     cout << Gespraech_sixth[(rand()%(sizeof(Gespraech_sixth)/sizeof(Gespraech_sixth[0])))];
    //     cout << Gespraech_seventh[(rand()%(sizeof(Gespraech_seventh)/sizeof(Gespraech_seventh[0])))];
    //     cout << Gespraech_eighth[(rand()%(sizeof(Gespraech_eighth)/sizeof(Gespraech_eighth[0])))];
    // }

}

int main(){ 
    // int array_length = 5;
    // int * Array = new int[array_length];
    // bool run_randomiser = true;
    // Array = Ramdomiser___(&run_randomiser, Array, array_length);
    // cout << "\n\n Main\n";
    // for (int k = 0; k < 5; k++){
    //     cout <<" " << *(Array+k);
    // }

    string countries[] = {"Afghanistan", "Albania", "Algeria", "American Samoa", "Andorra", "Angola", "Anguilla", "Antarctica", "Antigua and Barbuda", "Argentina", "Armenia", "Aruba", "Australia", "Austria", "Azerbaijan", "Bahamas", "Bahrain", "Bangladesh", "Barbados", "Belarus", "Belgium", "Belize", "Benin", "Bermuda", "Bhutan", "Bolivia", "Bosnia and Herzegowina", "Botswana", "Bouvet Island", "Brazil", "British Indian Ocean Territory", "Brunei Darussalam", "Bulgaria", "Burkina Faso", "Burundi", "Cambodia", "Cameroon", "Canada", "Cape Verde", "Cayman Islands", "Central African Republic", "Chad", "Chile", "China", "Christmas Island", "Cocos (Keeling) Islands", "Colombia", "Comoros", "Congo", "Congo, the Democratic Republic of the", "Cook Islands", "Costa Rica", "Cote d'Ivoire", "Croatia (Hrvatska)", "Cuba", "Cyprus", "Czech Republic", "Denmark", "Djibouti", "Dominica", "Dominican Republic", "East Timor", "Ecuador", "Egypt", "El Salvador", "Equatorial Guinea", "Eritrea", "Estonia", "Ethiopia", "Falkland Islands (Malvinas)", "Faroe Islands", "Fiji", "Finland", "France", "France Metropolitan", "French Guiana", "French Polynesia", "French Southern Territories", "Gabon", "Gambia", "Georgia", "Germany", "Ghana", "Gibraltar", "Greece", "Greenland", "Grenada", "Guadeloupe", "Guam", "Guatemala", "Guinea", "Guinea-Bissau", "Guyana", "Haiti", "Heard and Mc Donald Islands", "Holy See (Vatican City State)", "Honduras", "Hong Kong", "Hungary", "Iceland", "India", "Indonesia", "Iran (Islamic Republic of)", "Iraq", "Ireland", "Israel", "Italy", "Jamaica", "Japan", "Jordan", "Kazakhstan", "Kenya", "Kiribati", "Korea, Democratic People's Republic of", "Korea, Republic of", "Kuwait", "Kyrgyzstan", "Lao, People's Democratic Republic", "Latvia", "Lebanon", "Lesotho", "Liberia", "Libyan Arab Jamahiriya", "Liechtenstein", "Lithuania", "Luxembourg", "Macau", "Macedonia, The Former Yugoslav Republic of", "Madagascar", "Malawi", "Malaysia", "Maldives", "Mali", "Malta", "Marshall Islands", "Martinique", "Mauritania", "Mauritius", "Mayotte", "Mexico", "Micronesia, Federated States of", "Moldova, Republic of", "Monaco", "Mongolia", "Montserrat", "Morocco", "Mozambique", "Myanmar", "Namibia", "Nauru", "Nepal", "Netherlands", "Netherlands Antilles", "New Caledonia", "New Zealand", "Nicaragua", "Niger", "Nigeria", "Niue", "Norfolk Island", "Northern Mariana Islands", "Norway", "Oman", "Pakistan", "Palau", "Panama", "Papua New Guinea", "Paraguay", "Peru", "Philippines", "Pitcairn", "Poland", "Portugal", "Puerto Rico", "Qatar", "Reunion", "Romania", "Russian Federation", "Rwanda", "Saint Kitts and Nevis", "Saint Lucia", "Saint Vincent and the Grenadines", "Samoa", "San Marino", "Sao Tome and Principe", "Saudi Arabia", "Senegal", "Seychelles", "Sierra Leone", "Singapore", "Slovakia (Slovak Republic)", "Slovenia", "Solomon Islands", "Somalia", "South Africa", "South Georgia and the South Sandwich Islands", "Spain", "Sri Lanka", "St. Helena", "St. Pierre and Miquelon", "Sudan", "Suriname", "Svalbard and Jan Mayen Islands", "Swaziland", "Sweden", "Switzerland", "Syrian Arab Republic", "Taiwan, Province of China", "Tajikistan", "Tanzania, United Republic of", "Thailand", "Togo", "Tokelau", "Tonga", "Trinidad and Tobago", "Tunisia", "Turkey", "Turkmenistan", "Turks and Caicos Islands", "Tuvalu", "Uganda", "Ukraine", "United Arab Emirates", "United Kingdom", "United States", "United States Minor Outlying Islands", "Uruguay", "Uzbekistan", "Vanuatu", "Venezuela", "Vietnam", "Virgin Islands (British)", "Virgin Islands (U.S.)", "Wallis and Futuna Islands", "Western Sahara", "Yemen", "Yugoslavia", "Zambia", "Zimbabwe", "Palestine"};


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
        "to run", "the national sport", "to rest", "the round", "the city park", "to clear your head", "the eye", 
        "the ear", "a bit of", "to manage something", "the leg", "the heart", "the lung" ,"to train", "to go together", "bodybuilding", "the athlete", "to need", "strong", "the muscle", "the arm", "the shoulder",
        "the stomach", "the back", "to use", "the calorie", "the bodybuilder", "the mountain enthusiast", "the alpine sport", "nonhazardous", "the mountain climber", "the case", "to forget", "hard", "the luck", "slow", "the finger",
        "to stretch", "to wave", "quiet", "tai chi", "to combine", "relaxation", "concentration", "everywhere", "the senior", "the fingertip", "the type of sport", "the nose", "the knee", "the mouth", "the neck", 
        "the hair", "to kiss", "the yoga position", "the cobra", "the tree", "to lift or raise something", "regularly", "mountain climbing", "the type of ball sport", "the group", "exciting", "kayaking", "white water", "the shark", "terrible"
        }
        };
    cout << "\n\n";
    // for (int k = 0; k < 82; k++){
    //     cout << " " << *(*(A1_Week_12_Vocab+0)+k)<<"            "<<*(*(A1_Week_12_Vocab+1)+k)<<"\n\n";
    // }
    string user_word_guess = "";
    int user_week_12_vocab_score = 0;
    // for (int k = 0; k < 82; k++){
    //     cout << " " << *(*(A1_Week_12_Vocab+0)+k)<<"\n ";
    //     getline(cin,user_word_guess);
    //     if (cin.fail()){
    //         cin.clear();
    //         cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //         user_word_guess = "";
    //     }
    //     if (user_word_guess != *(*(A1_Week_12_Vocab+1)+k)){
    //         cout << "correct answer was  "<<*(*(A1_Week_12_Vocab+1)+k)<<"\n\n";
    //     }
    //     else {
    //         user_week_12_vocab_score++;
    //         cout << "\n\n";
    //     }
    // }
   
    // cout << "\n\n\n You got "<<user_week_12_vocab_score<<" out of 82   for week 12 test\n\n"; 
    cout << "\n\n";
    bool end_conversation = false;
    string Gespraech_first[] = {"Guten tag!", "Guten morgen!", "Gruß Gott!","Hallo!"};
    string Gespraech_second[] = {"Wie geht's es dir?","Wie heißen Sie?"};
    string Gespraech_third[] = {"Wo arbeiten Sie?","Wo wohnen Sie?","Woher kommen Sie?","Haben Sie eine Geschwister?",
                                "Wie ist das Wetter heute?","Welche Sprachen sprechen Sie?",""};
    string Gespraech_fourth[] = {"Was machen Sie gern am Wochenende?","Was sind Ihr Hobby?","Was machen Sie gern?"};
    string Gespraech_fifth[] = {"Haben Sie einen Job?","Wann stehen Sie auf?","Was machen Sie nicht gern?", "Wann frühstücken Sie?"};
    string Gespraech_sixth[] = {"Was haben Sie gestern getrunken?","Wann haben Sie eine Mittagspause?","Wann haben Sie gearbeitet?", "Was haben Sie gestern gemacht?"};
    string Gespraech_seventh[] = {"Was haben Sie gestern gegessen?","Wann sind Sie vorgestern aufgestanden?","Wann sind Sie zur Universtät gefahren?", "Waren Sie schon mal in Deutschland?"};
    string Gespraech_eighth[] = {"Wann sind Sie ins Bett gegangen?","Was ist Ihr Lieblingsessen?","Sind Sie in Ihr Klassenzimmer am großten?", "Wann frühstücken Sie?"};

    thread Anfang_Gespaech(Sprechst_du_mir,&end_conversation);
    Anfang_Gespaech.join();

    return 0;
}