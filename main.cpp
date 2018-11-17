#include <iostream>

using namespace std;
char func (char*arr , int start , int end){
    char temp ;
    if (start >= end){

        return 0;
    }
    else{
            temp= arr[start];
    arr[start]=arr[end ];
    arr[end]=temp;
    return func(arr,start+1,end-1);




    }



}

int main()
{

int size , start , end ;
cout<< "enter size "<<endl;
cin>>size;
cout<< " enter your boundary "<<endl;
cin>> start >>end ;
char * arr ;
arr= new char [size];
cout<< " enter char "<<endl;
for (int i=0 ; i <size; i++){
   cin >> arr[i];

}
func(arr , start , end);

for(int i =0 ; i<size ;i++){
    cout<<"  "<< arr[i]<< "  " ;
}

    return 0;

}
