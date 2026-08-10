// optimised bubble sort code

#include <iostream>
#include <vector>
using namespace std;

vector <int> bubbleSort(vector <int> &arr){

    for(int i=arr.size()-1; i>=1;i--){
        int didSwap =0;
        for(int j=0;j<i; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didSwap =1;
            };
                }

            if(didSwap==0){
                break;
                //helps reduce time complexity
        }
    }
    
    return arr;
}



int main(){

vector<int> arr = {1,2,3,4,5};

    vector<int> sortedArr = bubbleSort(arr);

    for (int x : sortedArr) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}