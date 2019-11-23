/*#include <bits/stdc++.h> 
  
using namespace std; 
   
struct Item 
{ 
    int value, weight; 
  
    
    Item(int value, int weight) : value(value), weight(weight) 
    {} 
}; 
  

bool cmp(struct Item a, struct Item b) 
{ 
    double r1 = (double)a.value / a.weight; 
    double r2 = (double)b.value / b.weight; 
    return r1 > r2; 
} 
   
double fractionalKnapsack(int W, struct Item arr[], int n) 
{ 
    
    sort(arr, arr + n, cmp); 
    int curWeight = 0; 
    double finalvalue = 0.0;  
  
    for (int i = 0; i < n; i++) 
    { 
        
        if (curWeight + arr[i].weight <= W) 
        { 
            curWeight += arr[i].weight; 
            finalvalue += arr[i].value; 
        } 
  
        else
        { 
            int remain = W - curWeight; 
            finalvalue += arr[i].value * ((double) remain / arr[i].weight); 
            break; 
        } 
    } 
    return finalvalue; 
} 

int main() 
{ 
    int W,n;  
	cout<<"Enter the knapscak capacity\n";
	cin>>W;
	cout<<"Enter the number of items\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		
		
	}
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}}; 
  
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    cout << "Maximum value we can obtain = "
         << fractionalKnapsack(W, arr, n); 
    return 0; 
} */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef struct {
   int v;
   int w;
   float d;
} Item;
void input(Item items[],int sizeOfItems) {
   cout << "Enter total "<< sizeOfItems <<" item's values and weight" <<
   endl;
   for(int I = 0; I < sizeOfItems; I++) {
      cout << "Enter "<< I+1 << " V ";
      cin >> items[I].v;
      cout << "Enter "<< I+1 << " W";
      cin >> items[I].w;
   }
}
void display(Item items[], int sizeOfItems) {
   int i;
   cout << "values: ";
   for(i = 0; i < sizeOfItems; i++) {
      cout << items[i].v << "\t";
   }
   cout << endl << "weight: ";
   for (i = 0; i < sizeOfItems; i++) {
      cout << items[i].w << "\t";
   }
   cout << endl;
}
bool compare(Item i1, Item i2) {
   return (i1.d > i2.d);
}
float knapsack(Item items[], int sizeOfItems, int W) {
   int i, j, pos;
   Item mx, temp;
   float totalValue = 0, totalWeight = 0;
   for (i = 0; i < sizeOfItems; i++) {
      items[i].d = items[i].v / items[i].w;
   }
   sort(items, items+sizeOfItems, compare);
   for(i=0; i<sizeOfItems; i++) {
      if(totalWeight + items[i].w<= W) {
         totalValue += items[i].v ;
         totalWeight += items[i].w;
		 cout<<"Selectd item:"<<i+1<<"  value:"<<items[i].v<<"  Weight:"<<items[i].w<<endl;
      } else {
		  
         int wt = W-totalWeight;
         totalValue += (wt * items[i].d);
         totalWeight += wt;
		 if(wt!=0)
			 cout<<"Selectd item:"<<i+1<<"  value:"<<(wt * items[i].d)<<"  Weight:"<<wt<<endl;
         break;
      }
   }
   cout << "total weight in bag " << totalWeight<<endl;
   return totalValue;
}
int main() {
   int W,n;
   cout<<"Enter the number of items:\n";
   cin>>n;
   Item items[n];
   input(items, n);
   cout << "Entered data \n";
   display(items,n);
   cout<< "Enter Knapsack weight \n";
   cin >> W;
   float mxVal = knapsack(items, n, W);
   cout << "Max value for "<< W <<" weight is "<< mxVal;
}

