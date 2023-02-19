# include<iostream>

using namespace std;

int main(){
   
   int savings;
   cin>>savings;

   if(savings>5000){
       if(savings>10000){
           cout<<"road trip with gal gadot\n";
       }
       else{
           cout<<"party with gal gadot\n";
       }
   }
  else if (savings<5000){
        if(savings>3000 && savings<5000){
        
       cout<<"mia khalifa ke sath party\n";
        }
   else{
       cout<<"party with friends\n";
   }
    }
    return 0;
}