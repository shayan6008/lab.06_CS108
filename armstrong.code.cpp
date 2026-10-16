#include<iostream>
using namespace std ; 
#include<math.h>
int main (){
    int number = 0 , count = 1 , digits =0  , sum =0 ; 
    do{
    if ( number == -1){
        return 0 ; }
    cout <<"(Enter -1 to exit the program) : ";
    cout <<"Enter a number : ";
    cin>>number ; 
    
}while((number <1) || (number > 9999) ) ;
while  (!((number/count)<1 )){
    digits += 1 ; 
    count*= 10 ; 
} 
count = 1 ; 
for(int i = 1 ; i <= digits ; i++){
   sum = sum + pow((number/count)%10 , digits) ;
   count *= 10 ;
       
}
if (sum == number) { 
 
    cout <<"The number "<<number <<"is Armstrong number .";}

else{
  
    cout <<"NOt an armstrong .";
}
return 0 ; 
}
 
