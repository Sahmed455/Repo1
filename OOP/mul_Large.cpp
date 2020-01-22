
#include<bits/stdc++.h>


using namespace std; 

string str1,str2;  

string multiply() 
{ 
    int l1 = str1.size(); 
    int l2 = str2.size(); 
    if (l1 == 0 || l2 == 0) 
    return "0"; 
    vector<int> mult(l1 + l2, 0); 
    int ind1 = 0;  
    int ind2 = 0;  
    for (int i=l1-1; i>=0; i--) 
    { 
        int carry = 0; 
        ind2 = 0;              
        for (int j=l2-1; j>=0; j--) 
        { 
            int sum = ((str1[i] - '0')*(str2[j] - '0'))+ mult[ind1 + ind2] + carry; 
            carry = sum/10; 
            mult[ind1+ind2] = sum % 10; 
	    ind2++; 
        } 
        if (carry > 0) 
            mult[ind1+ind2] += carry;
        ind1++; 
    }
    int i = mult.size() - 1; 
    while (i>=0 && mult[i] == 0) 
    	i--;
    if (i == -1) 
    	return "0"; 
    string result_String = ""; 
    while (i >= 0) 
        result_String.push_back(mult[i--]+'0'); 
    return result_String; 
}

int main() 
{ 
    cout<<"Enter first number:\t";
    cin>>str1;
    cout<<"Enter second number:\t";
    cin>>str2; 
    if((str1[0] == '-' || str2[0] == '-') &&  
        (str1[0] != '-' || str2[0] != '-' )) 
        cout<<"-"; 
  
  
    if(str1[0] == '-' && str2[0]!='-') 
        { 
            str1 = str1.substr(1); 
        } 
        else if(str1[0] != '-' && str2[0] == '-') 
        { 
            str2 = str2.substr(1); 
        } 
        else if(str1[0] == '-' && str2[0] == '-') 
        { 
            str1 = str1.substr(1); 
            str2 = str2.substr(1); 
        } 
    cout << multiply()<<endl; 
  return 0;
}
