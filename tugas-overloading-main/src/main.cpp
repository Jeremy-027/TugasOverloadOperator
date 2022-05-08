#include <iostream>
#include <string>
#include "include/rectangular.hpp"

using namespace std;

void endProgram();
void clear();
int optionthis();

float length, 
    width,
    midpoint_x, 
    midpoint_y;

int main(){
    while(1){
        string option_str;
        int option_int;
        cout << "INPUTKAN DATA PERSEGI ATAU PERSEGI PANJANG" << endl;
        cout << "Persegi panjang 1" << endl;
        persegiPanjang obj1(midpoint_x, midpoint_y, length, width);

        cout << "Persegi panjang 2" << endl;
        persegiPanjang obj2(midpoint_x, midpoint_y, length, width);
        persegiPanjang obj3(0,0,0,0);

        cout << "DATA SEMENTARA ADALAH" << endl;
        cout << "Persegi panjang 1" << endl; 
            obj1.output();
            cout << endl;
        cout << "Persegi panjang 2" << endl;
            obj2.output();
            cout << endl;
        cout << "Data yang dimasukan sesuai (y/n) : ";
            cin >> option_str;
                if(option_str == "n" || option_str == "N"){
                    main();
                }
        
        while(1){
            cout << endl;
            cout << endl;
            switch (option_int){
                case 0:
                    {
                        cout << "OPERATOR +" << endl;
                        obj3 = obj1 + obj2;
                        if (obj1==obj2){
                            obj3.output();
                        }
                    }
                    break;
                case 1:
                    {
                        cout << "OPERATOR -" << endl;
                        obj3 = obj1 - obj2;
                        if (obj1==obj2){
                            obj3.output();
                        }
                    }
                    break;
                case 2:
                    {
                        cout << "OP ++ PP1" << endl;
                        ++obj1;
                        obj1.output();
                        --obj1;
                    }
                    break;
                case 3:
                    {
                        cout << "OP -- PP1" << endl;
                        ++obj2;
                        obj1.output();
                        --obj2;
                    }
                    break;
                case 4:
                    {
                        cout << "OP ++ PP2" << endl;
                        --obj1;
                        obj1.output();
                        ++obj1;
                    }
                    break;
                case 5:
                    {
                        cout << "OP -- PP2" << endl;
                        --obj2;
                        obj1.output();
                        ++obj2;
                    }
                    break;
                case 6:
                    {
                        cout << "OPERATOR [] PERBANDINGAN" <<  endl;
                        cout << "Nilai X Maks obj1 : " << obj1[2] <<  endl;
                        cout << "Nilai X Maks obj2 : " << obj2[2] <<  endl;
                        if (obj1[2] > obj2[2]){
                            cout << "X Maks Objek 1 lebih besar dari X Maks Objek 2";
                        }
                        else if(obj2[2] > obj1[2]){
                            cout << "X Maks Objek 2 lebih besar dari X Maks Objek 1";
                        }
                        else{
                            cout << "Kedua X Maks sama";
                        }
                    }
                    break;
                case 7:
                    {
                        cout << endl << endl;
                        cout << "==================== OPERATOR == ====================" << endl;
                        if (obj1==obj2){
                            cout << "BERIRISAN" << endl;
                        }else{
                            cout << "TIDAK BERIRISAN" << endl;
                        }
                    }
                    break;
                }
            cout << endl<< endl;
            cout << "Coba Operator Lain (y/n) : ";
            cin >> option_str;
            if(option_str == "N" || option_str == "n"){
                break;
            }
        }
    cout << endl;
    cout << "Coba Objek Baru (y/n) :";
        cin >> option_str;
        if(option_str == "N" || option_str == "n"){
            break;
        }
}
return 0;
}



void input(){
    cout << "Panjang        : "; cin >> length;      
    cout << "Lebar          : "; cin >> width;       
    cout << "Titik tengah x : "; cin >> midpoint_x;  
    cout << "Titik tengah y : "; cin >> midpoint_y;  
    cout << endl;
}

void endProgram(){
    cout <<  endl;
    cout << "Apakah anda ingin melakukan operasi lagi (y/n)...";
    cout << "Tekan Enter untuk melanjutkan...";
    cin.get();
}
void clear(){
    system("CLS");
}
int optionthis(){
    int option_fungsi;
    cout << "Pilihlah Operasi yang ingin anda lakukan \n 0. Operator + \n 1. Operator - \n 2. Operator ++ Objek 1 \n 3. Operator -- Objek 1 \n 4. Operator ++ Objek 2 \n 5. Operator -- Objek 2 \n 6. Operator []  \n 7. Operator == \n Masukan pilihan anda : ";
    cin >> option_fungsi;
    return option_fungsi;}
