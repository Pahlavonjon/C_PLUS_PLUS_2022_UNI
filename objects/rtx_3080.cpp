#include <iostream>
#include <string>

using namespace std;

class Umart{ // use a 3D array to store all the parts in an array
    private:
        string cpu; // coming soon 4080 4090
        string cpu_stock[6] = {"i5-12600k","i7-12700k","i9-1200k","r5-5600x","r7-5800x","r9-5900x"};
        string cpu_cooler;
        string cpu_cooler_stock[3] = {"NH-D15","Dark-Rock-Pro4","Kraken-280"};
        string gpu;
        string gpu_stock[4] = {"3060","3070","3080","3090"};
        string power_supply;
        string power_supply_stock[5] = {"600","750","850","1000","1200"}; // must correspond with suitable gpu
        string mother_board;
        string mother_board_stock[5] = {"MSI","Gigabyte","ASUS","Aouros","Strix"};
        string pc_case;
        string pc_case_stock[5] = {"Corsair","CoolerMaster","FD","NZXT","Phanteks"};
        string storage;
        string storage_stock[5] = {"Samsung","Crucial","WD","Seagate","Sabert"};
        string ram;
        string ram_stock[5] = {"Corsair","Kingston","Crucial","RipJaws","G-Skill"};
    public:
        void PC_Parts_initialisation(string Processor, string Processor_cooler, string Graphics_Card, string Motherboard, string PSU, string Case, string Storage, string Ram ){
            cpu = Processor;
            cpu_cooler = Processor_cooler;
            gpu = GPU;
            power_supply = PSU;
            mother_board =  Motherboard;
            pc_case = Case;
            storage = Storage;
            ram = Ram;
        }
        double Processor(){
            
        }
}

int main(){
    GPU()
}