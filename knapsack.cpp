#include<iostream>
using namespace std;
int knapsack(int capacity, int weight[], int profit[], int n)
{
    if (n == 0 || capacity == 0)
        return 0;
    if (weight[n - 1] > capacity)
        return knapsack(capacity, weight, profit, n - 1);
    else
        return max(profit[n - 1] + knapsack(capacity - weight[n - 1], weight, profit, n - 1), knapsack(capacity, weight, profit, n - 1));

}
int main(int argc, char const *argv[])
{
 int n;
    cout<<"Enter the number of items: ";
    cin>>n;
    int weight[n], profit[n];
    cout<<"Enter the weights of items: ";
    for (int i = 0; i < n; i++)
    {
        cin>>weight[i];
    }
    cout<<"Enter the profits of the items: ";
    for (int i = 0; i < n; i++)
    {
        cin>>profit[i];
    }
    int capacity;
    cout<<"Enter the capacity of the knapsack: ";
    cin>>capacity;
    cout<<"The maximum profit is: "<<knapsack(capacity, weight, profit, n);
    return 0;
}

