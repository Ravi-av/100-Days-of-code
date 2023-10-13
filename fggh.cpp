#include<iostream>
using namespace std;
int main()
{
    int i,num,count_p=0,count_n=0,count_z=0;
    int arr[100];
 cin>>num;
 cout<<"enter numbers";
 
 for (int i = 0; i < num; i++)
 {
    cout<<arr[i];
 }
 for (int i = 0; i < num; i++)
 {
    //checks for postive numbers
    if(arr[i]>0){
        count_p++;
    }
    else if(arr[i]<0){
         count_n++;
    }
    else if(arr[i]==0){
        count_z++;
    }
    else{
        cout<<"wrong entry";;
        break;
    }
 }
 cout<<"postive number is"<<count_p<<endl;
  cout<<"negative number is"<<count_n<<endl;
   cout<<"zeros number is"<<count_z<<endl;

 
 return 0;
}