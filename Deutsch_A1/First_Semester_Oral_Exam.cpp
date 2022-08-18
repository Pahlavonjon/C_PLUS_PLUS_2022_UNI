#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;
void sleep_this_thread(){
    this_thread::sleep_for(chrono::milliseconds(250)); 
}
// void clear_therminal(){
//     cout << "\n\n\n\n\n\n";
// }

// bool my_questions(){
//     string my_Questions[1] = {
//         "Wie geht es dir?";
//     }
//     return false;
// }

int main(void){
    cout << "\n\n Semester 2 Oral Exam preparation:\n\n\n";

    cout << " Wie geht es dir?   (me)\n\n";

    cout << " Mir geht es gut.   (Avi)\n\n";

    cout << " Wie ist das Wetter heute?   (Avi)\n\n";

    cout << " Heute ist es bewölkt und sehr kalt.   (me)\n\n";

    cout << " Wie heißt du?     (Avi)\n\n";
    
    cout << " Ich heiße Pahlavon   (me)\n\n";

    cout << " Wie alt bist du?    (Avi)\n\n";

    cout << " Ich bin achtzehn jahre alt.   (me)\n\n";

        
        
    // "
    //     Wann hast du Geburtstag?
    //     Mein geburtstag ist am ersten Dezember

    //     Welche Sprachen sprichst du?
    //     Ich spreche Englisch  hindi und deutsch  

    //     Hast du Geschwister
    //     Ich habe eine Schwester. 

    //     Wo wohnst du und mit wem?
    //     Ich wohne in Adelaide. Mit meinem Bruder in einem Wohnheim. 

    //     Was hast du in deinem Zimmer
    //     Ich habe ein Bett, einen Schreibtisch, einen Kleiderschrank und einen Stuhl.

    //     Was machst du gern am Wochenende?
    //     Ich lese gern und spiele Fussball am Wochenende.

    //     Was sind deine Hobbys?  plurallllllll
    //     Mein Hobby ist programmieren

    //     Was machst du gern?
    //     Ich spiele gern Videospiele.

    //     Was machst du nicht gern?
    //     Ich studiere nicht so gern.

    //     Was studierst du
    //     Ich studiere Computer Science Informatik

    //     Was sind deine Lieblingsfächer
    //     Meine Lieblingsfächer sind Mathematik und Deutsch.

    //     Hast du einen Traumberuf
    //     Mein Traumberuf ist Programmierer

    //     Hast du einen Job?
    //     Ja ich arbeite bei Coles.


    //     Wann stehst du auf?
    //     Am Wochenende stehe ich um neun Uhr auf.
    //     Aber am Arbeitstag stehe ich um sechs Uhr auf.

    //     Wann frühstückst du?
    //     Ich habe um halb sieben Uhr Frühstück gegessen.

    //     Was hast du gestern gemacht?
    //     Ich bin zum Markt gegangen.
    //     Ich habe Banana gekauft.

    //     Wann hast du gestern gearbeitet?
    //     Ich bin student, und ich habe von neun bis elf Uhr gearbeitet.

    //     Wann machst du eine Mittagspause?
    //     Ich habe am Donnerstag um zwölf Uhr Mittagspause.

    //     Was hast du getrunken?
    //     Ich habe Bier getrunken 

    //     Was hast du zum Abendessen gegessen?
    //     Ich habe einen Burger gegessen.

    //     Wann bist du ins Bett gegangen?
    //     Ich bin um zehn Uhr ins Bett gegangen.

    //     Wann bist du zur Uni gefahren?
    //     Ich bin um sieben Uhr zur Uni gefahren.

    //     Wie bist du zur Uni gekommen?
    //     Ich bin mit dem Bus zur Uni gekommen.

    //     Wann bist du vorgestern aufgestanden?
    //     Vorgestern bin ich um halb acht Uhr aufgestanden

    //     Warst du schon mal in Deutschland?
    //     Ja, ich war schon mal in Deutschland.

    //     Was hast du dort gemacht?
    //     Ich habe das Stadtmuseum besichtigt.

    //     Ich bin neu in Adelaide, was kann man in Adelaide machen?
    //     Du kannst zum Rundle Einkaufszentrum gehen.

    //     Wie kann ich zum Rundle Einkaufszentrum gehen?
    //     Gehen sie geradeaus und die zweite Straße rechts.

    //     Was ist dein Lieblingsessen?
    //     Mein Lieblingsessen ist Türkischer Döner 

    //     Was trägst du heute?
    //     Heute trage ich eine schwarze Hose und eine schwarze Jacke und schwarze Schuhe.

    //     Wie spät ist es?
    //     Es ist zwei Uhr";


    
    // int *the_array_index;
    // int array_current_index = -1;
    // int next_word = 0;
    // bool run_randomiser = true;
    // thread Select___Random__Vocab(Ramdomiser____,&array_current_index,&run_randomiser,the_array_index);
    // Select___Random__Vocab.detach();
    // cout << "main array : ";
    // for (int k = 0; k < 5; k++){
    //     cout << "  "<<the_array_index[k];
    // }
    // cout << "\n\n";

    // string *Vocab_Pointer_Infinitive = A1_Infinitive;
    // string *Vocab_Pointer_Past_Participle = A1_Past_Participle;
    // while (run_vocab_test == true){
    //     this_thread::sleep_for(chrono::milliseconds(1000));
    //     array_current_index = the_array_index[next_word];
    //         cout << "\n\n What is the past participle of "<< (*((Vocab_Pointer_Infinitive+array_current_index)))<< "? \n\n ";
    //         total_vocab_questions++;
    //         string user_input_past_participle = "";
    //         cin >> user_input_past_participle;
    //         if (cin.fail()){
    //             cin.clear();
    //             cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //             user_input_past_participle = "";
    //         }
    //         if (user_input_past_participle != (*((Vocab_Pointer_Past_Participle)+(array_current_index)))){
    //             cout << "\n\n Wrong . . . the correct answer was "<< (*((Vocab_Pointer_Past_Participle)+(array_current_index)))<< "\n\n";
    //         }
    //         if (user_input_past_participle == (*((Vocab_Pointer_Past_Participle)+(array_current_index)))){
    //             cout << "\ncorrect! \n";
    //         }
    //     next_word++;
    //     if (next_word == 5){
    //         run_randomiser = true;
    //     }
    // }
    // return 0;


    // for (int k = 0; k < 5; k++){
    //         cout << "\n\n What is the past participle of "<< (A1_Infinitive[k])<< "? \n\n ";
    //         total_vocab_questions++;
    //         string user_input_past_participle = "";
    //         cin >> user_input_past_participle;
    //         if (cin.fail()){
    //             cin.clear();
    //             cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //             user_input_past_participle = "";
    //         }
    //         if (user_input_past_participle != A1_Past_Participle[k]){
    //             cout << "\n Wrong . . . the correct answer was "<< A1_Past_Participle[k]<< "\n";
    //         }
    //         if (user_input_past_participle == A1_Past_Participle[k]){
    //             cout << "\ncorrect! \n";
    //             correct_answers++;
    //         }
    //     }
    //     test_percentage = ((correct_answers)/total_vocab_questions)*(100);
    //     cout << "\n\n You score is: "<<correct_answers<<" out of "<<total_vocab_questions<<"  "<<setprecision(2)<<test_percentage<< "% \n\n\n";

}