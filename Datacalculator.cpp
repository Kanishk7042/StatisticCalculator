#include<iostream>
#include<algorithm>
using namespace std;
float mean(int *a,int size);
float median(int *a,int size);
int mode(int *a,int size);
int max(int *a,int size);
int min(int *a,int size);
int main(){
int a[100],size,choice;
cout<<"Enter size"<<endl;
cin>>size;
if(size>100){
cout<<"Size cannot be more than 100"<<endl;
}
cout<<"Enter array elements"<<endl;
for(int i=0;i<size;i++){
    cin>>a[i];
}
cout<<"Enter your choice"<<endl;
cout<<"1. Mean"<<endl;
cout<<"2. Median"<<endl;
cout<<"3. Mode"<<endl;
cout<<"4. Max"<<endl;
cout<<"5. Min"<<endl;
cin>>choice;
switch(choice){

    case 1:  cout<<"Mean of the data is"<<endl;
            cout<<mean(a,size)<<endl;
            break;

    case 2: cout<<"Median of the data is"<<endl;
            cout<<median(a,size)<<endl;    
            break;   

    case 3:  cout<<"Mode of the data is"<<endl;   
        cout<<mode(a,size);   
        break;


    case 4:  cout<<"Maximum element is"<<endl;
    cout<<max(a,size);      
    break;

    case 5:  cout<<"Minimum element is"<<endl;
    cout<<min(a,size);      
    break;

    default: cout<<"Invalid choice"<<endl;
    break;

}
return 0;
}

float mean(int *a, int size){
float sum=0;
for(int i=0;i<size;i++){
    sum=sum+a[i];
}
float mean=(float)sum/size;
return mean;
}

float median(int *a,int size){
    sort(a,a+size);
    if(size%2!=0){
        int i=size/2;
        float median=(float)a[i];
        return median;
    }

    else{
        int i=size/2;
        int j=(size/2)-1;
        float median=(float)(a[i]+a[j])/2;
        return median;
            }
}

int mode(int *a,int size){
    int b[100],c[100];

    for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        if(a[i]!=b[j]){
            b[j]=a[i];
        }
        else{
           c[i]=1;

            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<c[i];
    }
    }



int max(int *a,int size){
    int max=a[0];
    for(int i=0;i<size;i++){
        if(max<=a[i]){
            max=a[i];
        }
    }
    return max;
}

int min(int *a,int size){
    int min=a[0];
    for(int i=0;i<size;i++){
        if(min>=a[i]){
            min=a[i];
        }
    }
    return min;
}

