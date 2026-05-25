#include <iostream>

using namespace std;

int main(){    	
    int a, a1, b, b1, result, result2;
    cin >> a >> a1;
    cin >> b >> b1;

    if(a == a1){
        result =2*(a+a1);
    }
    else if(a1-1 == a || a-1 == a1){
        result = 3*(a+a1);
    }
    else{
        result = a+a1;
    }

    //segunda verificção
    if(b == b1){
        result2 =2*(b+b1);
    }
    else if(b1-1 == b || b-1 == b1){
        result2 = 3*(b+b1);
    }
    else{
        result2 = b+b1;
    }

    if(result == result2){
        cout<<"empate";
    }
    else if(result > result2){
        cout<<"Lia";
    }
    else{
        cout<<"Carolina";
    }
    

    return 0;
}

