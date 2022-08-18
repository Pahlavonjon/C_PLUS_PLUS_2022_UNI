#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void Australian_tax_calculator_2021_2022(double user_income){
          double tax_percentage = 0;
          double income_tax;
          double user_savings;
          if( user_income >= 0 && user_income < 18200)
          {
             income_tax = 0;
             user_savings = user_income;
                   
             cout <<" \n You will not be taxed!\n\n";
             cout <<" Your annual savings will be: $"<<fixed<<setprecision(2)<<user_savings;
        
          }
          else if ( user_income >= 18200 && user_income < 45000)
          { 
             income_tax = ( user_income - 18200)*(0.19);
             cout<<" Your taxble income is $"<<fixed<<setprecision(2)<< income_tax;
             tax_percentage = 100*(income_tax / user_income);
             cout<<"   which is: "<<fixed<<setprecision(2)<<tax_percentage<<"% of your total salary\n\n";
             user_savings = user_income - income_tax;
             cout<<" Your annual savings will be: $"<<fixed<<setprecision(2)<<user_savings;
             
          }
          else if ( user_income >= 45000 && user_income < 120000)
          {
             income_tax = ( user_income - 45000)*(0.325) + 5092;
             cout<<" Your taxble income is $"<<fixed<<setprecision(2)<< income_tax;
             user_savings = user_income - income_tax;
             tax_percentage = 100*(income_tax / user_income);
             cout<<"   which is: "<<fixed<<setprecision(2)<<tax_percentage<<"% of your total salary\n\n";
             cout<<" Your annual savings will be: $"<<fixed<<setprecision(2)<< user_savings;
       
          }
          else if (user_income >= 120000 && user_income < 180000)
          {
             income_tax = (user_income - 120000)*(0.37) + 29467;
             cout<<" Your taxble income is $"<<fixed<<setprecision(2)<< income_tax;
             user_savings = user_income - income_tax;
             tax_percentage = 100*(income_tax / user_income);
             cout<<"   which is: "<<fixed<<setprecision(2)<<tax_percentage<<"% of your total salary\n\n";
             cout<<" Your annual savings will be: $"<<fixed<<setprecision(2)<< user_savings;
          
          } 
          else if ( user_income >= 180000)
          {
             income_tax = (user_income - 180000)*(0.45) + 51667;
             cout<<" Your taxble income is $"<<fixed<<setprecision(2)<< income_tax;
             user_savings = user_income - income_tax;
             tax_percentage = 100*(income_tax / user_income);
             cout<<"   which is: "<<fixed<<setprecision(2)<<tax_percentage<<"% of your total salary\n\n";
             cout<<" Your annual savings will be: $"<<fixed<<setprecision(2)<< user_savings;
           
          } 
          else {
            cout<<"\n Enter a positive number!\n\n";
          }   
          
}

int main(){
    double salary = 0;
    cout <<"\n Enter salary: $";
    cin >> salary;
    cout<<"\n";
    Australian_tax_calculator_2021_2022(salary);
    cout<<"\n\n";
}