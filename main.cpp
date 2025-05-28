#include <iostream>

using namespace std;

    class Print{
public :

   void  Print_array(int[], int );

    };
    void Print::Print_array(int arg[], int length){

    for(int n = 0 ; n<length; n++){
        cout<<arg[n]<< ".";

    }
    cout<<endl;
    }
int main()
{

    /*Print pir;
    Print pur;
    int firstarray[]={23, 56,78};
    int secondarray[]=[67,34,26,27,90};

    pir.Print_array(firstarray,3);*/
    Print pur;
    int firstarray[]={34,56,90,19};
    int secondarray[]={45,22,12};
    int thirdarray[]= {78,23,56,20,36};
    pur.Print_array(firstarray,4);
    pur.Print_array(secondarray,3);
    pur.Print_array(thirdarray,5);
    return 0;
}
