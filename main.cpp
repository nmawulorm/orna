// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    /*  
    Take the costs and sales a company made for each of
    the five working days of this week. Then create a 
    table of costs, sales and profit for each day then 
    for the whole week.
    */
    double cost1, cost2, cost3, cost4, cost5, totalCost;
    double sales1, sales2, sales3, sales4, sales5, totalSales;
    double profit1, profit2, profit3, profit4, profit5, totalProfit;
    
    cout<<"Enter the cost and sales for the following days:\n"; 
    cout<<"Monday:\t"; cin>>cost1; cin>>sales1;
    cout<<"Tuesday:\t"; cin>>cost2; cin>>sales2;
    cout<<"Wednesday:\t"; cin>>cost3; cin>>sales3;
    cout<<"Thursday:\t"; cin>>cost4; cin>>sales4;
    cout<<"Friday:\t"; cin>>cost5; cin>>sales5;
    
    totalCost = cost1 + cost2 + cost3 + cost4 + cost5;
    totalSales = sales1 + sales2 + sales3 + sales4 + sales5;
    
    cout<<"Day\tCost\tSales\tProfit\n";
    cout<<"---------------------------\n";
    cout<<"Mon\t"<<cost1<<"\t\t"<<sales1<<"\t\t"<<sales1-cost1<<endl;
    cout<<"Tue\t"<<cost2<<"\t\t"<<sales2<<"\t\t"<<sales2-cost2<<endl;
    cout<<"Wed\t"<<cost3<<"\t\t"<<sales3<<"\t\t"<<sales3-cost3<<endl;
    cout<<"Thu\t"<<cost4<<"\t\t"<<sales4<<"\t\t"<<sales4-cost4<<endl;
    cout<<"Fri\t"<<cost5<<"\t\t"<<sales5<<"\t\t"<<sales5-cost5<<endl;
    cout<<"---------------------------\n";
    cout<<"Total\t"<<totalCost<<"\t\t"<<totalSales<<"\t\t"<<totalSales-totalCost<<endl;
    
    
    return 0;
}