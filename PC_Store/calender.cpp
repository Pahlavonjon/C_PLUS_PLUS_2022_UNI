#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
     
void Calender_Calculator(int start_day, int start_month, int payment_day, double payment, int current_year, int length_years){
        int payment_period = payment_day-1;
        int start_year = current_year;
        start_day--;
        start_month--;
        int total_number_of_payments = 0;
        double payment_total_yearly = 0;
        double payment_total = 0;
        int payment_initialisation = 0;

        int end_year = current_year+length_years;

        cout<<"\n\n\n\n\n\n\n\n\n\n\n FUNCTION START \n\n\n\n\n\n\n";
    for (current_year = current_year; current_year < end_year; current_year++){
        cout<<" NEW YEAR     "<<current_year<<"\n";
            for (int M = 0; M < 12; M++){

            if (payment_initialisation == 0){
            if (M == start_month && current_year == start_year){
                if (start_month == 0|| start_month == 2 || start_month == 4 || start_month == 6 || start_month == 7 || start_month == 9 || start_month == 11){
                    for (int D = start_day; D < 31; D++){
                    payment_period++;
                    if (payment_period == payment_day){
                        cout<<"\n\n The date of the payment is:  "<<D+1<<"/"<<M+1<<"/"<<current_year;
                        payment_period = 0;
                        total_number_of_payments++;
                        payment_initialisation = 1;
                    }
                }
                }
                else if (start_month == 1 && (current_year%4 == 0)){
                    for (int D = start_day; D < 29; D++){
                    payment_period++;
                    if (payment_period == payment_day){
                        cout<<"\n\n The date of the payment is:  "<<D+1<<"/"<<M+1<<"/"<<current_year;
                        payment_period = 0;
                        total_number_of_payments++;                                                                         
                        payment_initialisation = 1;
                    }
                }
                }
                else if (start_month == 1){
                    for (int D = start_day; D < 28; D++){
                    payment_period++;
                    if (payment_period == payment_day){
                        cout<<"\n\n The date of the payment is:  "<<D+1<<"/"<<M+1<<"/"<<current_year;
                        payment_period = 0;
                        total_number_of_payments++;
                        payment_initialisation = 1;
                    }
                }
                }
                else {
                    for (int D = start_day; D < 30; D++){
                    payment_period++;
                    if (payment_period == payment_day){
                        cout<<"\n\n The date of the payment is:  "<<D+1<<"/"<<M+1<<"/"<<current_year;
                        payment_period = 0;
                        total_number_of_payments++;
                        payment_initialisation = 1;
                    }
                }
                }
                }              
            }
            if ((payment_initialisation == 1 && M > start_month) || current_year != start_year){
            if (M == 0 || M == 2 || M == 4 || M == 6 || M == 7 || M == 9 || M == 11){
                for (int D = 0; D < 31; D++){
                    payment_period++;
                    if (payment_period == payment_day){
                        cout<<"\n\n The date of the payment is:  "<<D+1<<"/"<<M+1<<"/"<<current_year;
                        payment_period = 0;
                        total_number_of_payments++;
                    }
                }
            }
            else if (M == 1 && (current_year%4 == 0)){
                for (int D = 0; D < 29; D++){
                    payment_period++;
                    if (payment_period == payment_day){
                        cout<<"\n\n The date of the payment is:  "<<D+1<<"/"<<M+1<<"/"<<current_year;
                        payment_period = 0;
                        total_number_of_payments++;
                    }
                }
            }
            else if (M == 1){
                for (int D = 0; D < 28; D++){
                    payment_period++;
                    if (payment_period == payment_day){
                        cout<<"\n\n The date of the payment is:  "<<D+1<<"/"<<M+1<<"/"<<current_year;
                        payment_period = 0;
                        total_number_of_payments++;
                    }
                }
            }
            else {
                for (int D = 0; D < 30; D++){
                    payment_period++;
                    if (payment_period == payment_day){
                        cout<<"\n\n The date of the payment is:  "<<D+1<<"/"<<M+1<<"/"<<current_year;
                        payment_period = 0;
                        total_number_of_payments++;
                    }
                }
            }
            }
            }
            cout<<"\n\n";
            payment_total_yearly = (payment)*(total_number_of_payments);
            cout<<" The Yearly Payment is: $"<<fixed<<setprecision(2)<<payment_total_yearly<<" there were "<<total_number_of_payments<<" number of payments for "<<current_year<<"\n\n\n\n\n\n\n\n\n";
            payment_total += payment_total_yearly;
            total_number_of_payments = 0;
    }
            cout<<"\n\n Total Payment for the chosen time frame is: $"<<fixed<<setprecision(2)<<payment_total<< " from " <<start_year<< " to " <<current_year-1<<"\n\n\n";
    
}

int main(){

    int start_day = 0;
    int start_month = 0;
    // int start_year = 0;
    // int days_until_payment = 0;
    // double payment = 0;
    int time_frame_years = 0;
    
    cout<<"\n What is the first day of the payment?\n ";
    cin>>start_day;
    cout<<"\n What is the month of the start payment?\n ";
    cin>> start_month;
    // printf("\n What is the start year?\n ");
    // scanf("%d",&start_year);
    // printf("\n What is the number of days until payment?\n ");
    // scanf("%d",&days_until_payment);
    // printf("\n What is the $$$ amount?\n ");
    // scanf("%lf",&payment);
    cout<<"\n How many years should it calculate?\n ";
    cin>>time_frame_years;
    Calender_Calculator(start_day, start_month, 14, 370, 2021, time_frame_years);
}

// rework the other pc store