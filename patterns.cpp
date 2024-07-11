#include<iostream>
using namespace std;
int main(){
    /* RECTANGULAR PATTERN
    int row ,col;
    cin>> row>> col;
    for(int i=1; i<= row;i++){
        for(int j = 1; j<= col; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    */
   /* HOLLOW RECTANGULAR PATTERN
   int row,col;
   cin>> row>>col;
   for(int i =1 ; i<= row;i++){
        for(int j = 1; j<= col; j++){
            if(i=1||i==row||j==1||j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            cout<<endl;
        }
     }
   
   
   */
    /* INVERTED TRIANGLE
    int n;
    cin >>n;
    for(int i = n; i>= 1; i--){
        for(int j =1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;

    }
    */
   /* HALF PYRAMID 180 DEGREES
   int n;
    cin >>n;
    for (int i =1 ; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
      cout<<endl;  
    }
    */
   /* FLOYDS TRIANGLE
   1
   2 3
   4 5 6 
   7 8 9 10


   int n;
   cin>>n;
   int count=1;
   for(int i =1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
   }
   return 0;
}*/
/*      BUTTERFLY PATTERN

 *      *
 **    **
 ***  ***
 ********
 ***  ***
 **    **
 *      *
int n;
cin>>n;
for(int i=1; i<=n;i++){
    for(int j= 1; j<= i; j++){
        cout<<"*";
    }
    int space = 2*n - 2*i;
    for(int j=1; j<=space; j++){
        cout<<" ";

    }
    for(int j=1; j<= i; j++){
        cout<<"*";
        

    }cout<<endl;
}
    
for(int i=n; i>=1;i--){
    for(int j= 1; j<= i; j++){
        cout<<"*";
    }
    int space = 2*n - 2*i;
    for(int j=1; j<=space; j++){
        cout<<" ";

    }
    for(int j=1; j<= i; j++){
        cout<<"*";
        
    }cout<<endl;
    }
  return 0;
}
*/
 /*INVERTED PATTERN*/

int n;
cin>>n;


for(int i=1; i<= n; i++){
    for(int j=1; j<=n+1-i; j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
return 0;
}