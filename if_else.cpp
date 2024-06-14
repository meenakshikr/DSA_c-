#include<iostream>
using namespace std;
/*int main(){
    int savings;
    cin>> savings;

    if(savings>5000){
        
        if(savings>1000){
            cout<<"go on a trip";
        } else{
            cout<<"go for a movie";
        }

    }else if(savings>2500){
        cout<<"go on a date with rashmi\n";
    }
    else{
        cout<<"go out with friends";
    }



    return 0;

} */

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"a is the biggest number";
        }
        else{
            cout<<" c is biggest number";
        }

    } else{
        cout<<"b is the biggest number";
    }
    return 0;
}
