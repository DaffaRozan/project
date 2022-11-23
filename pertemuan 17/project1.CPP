#include <iostream>

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

    return 0;
}
