#include<iostream>
using namespace std;

int main(){
    float operand1,operand2,result;
    string operatorr;
    cout<<"Enter first operand:";
    cin>>operand1;
    cout<<"Enter second operand:";
    cin>>operand2;
    cout<<"Enter operator:";
    cin>>operatorr;

    if(operatorr=="+"){
        result=operand1+operand2;
    }else if(operatorr=="-"){
        result=operand1-operand2;
    }else if(operatorr=="*"){
        result=operand1*operand2;
    }else if(operatorr=="/"){
        if(operand2==0){
            cout<<"Infinite\n";
        }else{
            result=operand1/operand2;
        }
    }else{
        cout<<"Invalid Operator\n";
    }
    cout<<"Answer:"<<result<<endl;
}