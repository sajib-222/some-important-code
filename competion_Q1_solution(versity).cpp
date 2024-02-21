#include<bits/stdc++.h>
using namespace std;


//r throwing a error message and exiting the program


void error(int c){
    std::cout<<"enter a valid length of string in pos : "<<c;
    exit(EXIT_FAILURE);


}

int main(){

    vector<string> st;
    int t;
    cin>>t;
    string arr[t];
    int c;


    //for input with specified element length if exceeded it will throw a error message


    for(int i=0;i<t&&t<=1000;i++){
        int n=0;
        cin>>n;
        cin>>arr[i];
        if(arr[i].length()>n){
            error(c=i+1);
        }



    }


    // printing output with specified condition

    for(int i=0;i<3;i++){
        int c=0;
        for(int j=0;j<arr[i].length();j++){
            for(int k=j+1;k<arr[i].length();k++){
                if(arr[i][j]==arr[i][k]){
                    c++;                            //if a char is repeated it increment
                }
            }
        }
        if(c>=2)                                   //if repeatness occured more then 2 time it print copied else he won
        {
            cout<<"copied"<<endl;
        }
        else
        {
            cout<<"he won"<<endl;
        }
    }


return 0;
}
