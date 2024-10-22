#include<iostream>
using namespace std;
int main(){
    
    int weather;
    cout<<"Weather conditions"<<endl;
    cout<<"1.Sunny"<<endl;
    cout<<"2.Cloudy"<<endl;
    cout<<"3.Rainy"<<endl;
    cout<<"4.Windy"<<endl;
    cout<<""<<endl;
    cout<<"Select Weather Condition"<<endl;
    cin>>weather;

    if(weather==1){
        cout<<"In Sunny weather you can wear :-"<<endl;
        cout<<"Lightweight tops :- T-Shirts , Tank Top"<<endl;
        cout<<"Sunglasses :- UV Protection"<<endl;
        cout<<"Footwear :- Sandals , sneakers"<<endl;
    }
    else if(weather==2){
        cout<<"In Cloudy weather you can wear :-"<<endl;
        cout<<"Lightweight tops :- Tunics , sweaters"<<endl;
        cout<<"Leggings :- Denim , Joggers"<<endl;
        cout<<"Footwear :- Sneakers , Boots"<<endl;
    }
    else if(weather==3){
        cout<<"In Rainy weather you can wear or carry :-"<<endl;
        cout<<"Waterproof jacket/coat"<<endl;
        cout<<"Umbrella or rain poncho"<<endl;
        cout<<"Waterproof Shoes/Boots"<<endl;
    }
    else if(weather==4){
        cout<<"In Windy weather you can wear or carry"<<endl;
        cout<<"Windbreaker/windproof jacket"<<endl;
        cout<<"Scarves or neck warmers"<<endl;
        cout<<"Sturdy pants :- Denim or thick cotton"<<endl;
    }
    else{
        cout<<"Select From the given Conditions"<<endl;
    }
    cout<<"____THANKYOU____"<<endl;
}