#include <iostream>
using namespace std;

int main() {
    int times;
    cin>>times;
    int arr[times][100000];
    int x[times];
    int s[times]; 
    for(int i = 0; i<times; i++){
        cin>>s[i];
        for(int j = 0; j<s[i]; j++){
            cin>>arr[i][j];
        }
    }
    
    
    for(int i = 0; i<times; i++){
        x[i] = 0;
        for(int j = 0; j<s[i]; j++){
            if(j%2 == 0){
                x[i] = x[i] + (arr[i][s[i]-j-1] * arr[i][s[i]-j-1]);
            }else{
                x[i] = x[i] - (arr[i][s[i]-j-1] * arr[i][s[i]-j-1]);
            }
        }
    }
    
    for(int i = 0; i<times; i++){
	    cout<<x[i]<<"\n";
    }
	return 0;
}