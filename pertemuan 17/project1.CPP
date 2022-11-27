#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    /* soal 1
    int j = 100;
    for (int i=0 ; i<=100 ;i++ , j-- ){
        cout << "i= " << i << " Dan j= " << j << endl;
    }*/


  /* soal 2
    for (int i=1 ; i<=100 ; i++){
        if (i%2 == 1){
         continue;
        }
      cout << "nilai genap adalah " << i <<  endl;
    }*/


    /* soal 3
    for ( int i=100; i >=1; i--){
        if (i < 55){
            break;
        }
        cout << i << endl;
    }*/


    /*soal 4
    float total = 0;
    for(int i = 1; i<=20; i++){
        int hasil = i;

        total+=hasil;
        cout <<i<<endl;
    }

        cout << endl;
        cout << "Total= "<< total << endl;
        cout << "rata rata= "<< total/20<<endl;

    */


    /* soal 5
    int x;
    cout <<"masukan angka= ";
    cin >> x;
    while (x!=-99){
        cout << "masukan angka= ";
        cin >> x;
    }*/


    /* soal 6
    int x ;
    int max;
    int min;
    cout << "masukan angka= ";
    cin >> x;

        min = 99999999;
        max = -99999999;

        while (x != -99){
            if (x < min ){
                min = x;
            }
            if (x > max ){
                max = x;
            }
            cout << "masukan angka= ";
            cin >> x;
        }
        cout<<"Min = "<<min<<endl;
        cout<<"max = "<<max<<endl;
        */

    /*soal 7
         int sum=0;
    int x;
    cout<<"Input Bilangan = ";
    cin >>x;

        while (x != 9999){
            cout<<x<<endl;
            sum+=x;
            cout<<"Input Bilangan = ";
            cin >>x;

        }
        cout<<"Jumlah Angka = "<<sum<<endl;
        */


    /*soal 8
         int sum=0;
    int x;
    cout<<"Input Bilangan = ";
    cin >>x;

        while (x != 9999){
            cout<<x<<endl;
            sum+=1;
            cout<<"Input Bilangan = ";
            cin >>x;

        }
        cout<<"Jumlah Angka = "<<sum<<endl;
        */

    /*soal 9
        int sum=0;
    int cacah=0;
    int x;
    cout<<"Input Bilangan = ";
    cin >>x;

        while (x != 9999){
            cout<<x<<endl;
            sum+=x;
            cacah+=1;
            cout<<"Input Bilangan = ";
            cin >>x;

        }
        cout<<"Jumlah Angka = "<<sum<<endl;
        cout<<"Jumlah Cacah Angka = "<<cacah<<endl;
        */


    /*soal 10
          for(int x=1;x<=7;x++){

        cout<<endl;
        cout<<"Looping Yang Ke-"<<x<<endl;

    for(int y=1;y<=10;y++){

        cout<<"-Angka "<<y<<"-"<<endl;

    }
    }
*/

    /* soal 11
      int kali;

    cout<<"Input : ";
    cin>>kali;
    for(int x = 1 ; x <= 10 ; x++ ){
        cout<<x<<" x "<<kali<<" = "<<x*kali<<endl;
    }
    */

    /* soal 12
     cout<<"|  Celcius  |  Fahrenheit |"<<endl;
    cout<<"|-------------------------|"<<endl;
    for(float x = 0.00 ; x <= 100 ; x++ ){

        cout << fixed << setprecision(0) << "|    " <<x<< "     |      "
        << setprecision(1)<< x*1.8 + 32 << "    |" <<endl;
    }

    */

    /*soal 13

 string branch;
    cout<<"   Celcius      Fahrenheit      Keterangan                      "<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    for(float x = 100 ; x >= -40; x-- ){
        if(x!=-40 && x!=-18 && x!=0 && x!=10 && x!=21 && x!=30 && x!=37 && x!=40 && x!=100){
            continue;
        }
        else if(x==100){
            branch="Air Mendidih";
        }
        else if(x==40){
            branch="Air Mandi Panas";
        }
        else if(x==37){
            branch="Temperatur Tubuh ";
        }
        else if(x==30){
            branch="Cuaca Pantai";
        }
        else if(x==21){
            branch="Temperatur Ruangan";
        }
        else if(x==10){
            branch="Hari Yang Dingin";
        }
        else if(x==0){
            branch="Titik Beku Air";
        }
        else if(x==-18){
            branch="Cuaca Dingin Bersalju";
        }
        else if(x==-40){
            branch="Cuaca Sangat Dingin Bersalju";
        }

        cout << fixed << setprecision(0) << "    " <<x<< "            "
        << setprecision(1)<< x*1.8 + 32 << "        " <<branch<<endl;
    }


    */


    return 0;
}
