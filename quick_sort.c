#include<stdio.h>
int Partition(int a[],int low,int high)
{
  int pivotkey = a[low];
  while(low<high)
  {
    if(low<high && a[high]>=pivotkey) --high;
    a[low]=a[high];
    if(low<high && a[low]<=pivotkey) ++low;
    a[high]=a[low];
   }
  a[low]=pivotkey;
  return low;
}
  
void Quick_Sort(int a[],int low,int high)
{
  if(low<high) 
  {
    int position = Partition(a,low,high);
    Quick_Sort(a,low,position-1);
    Quick_Sort(a,position+1,high);
  }
}
  
void main()
{
  int a[4]={45,56,23,5};
  Quick_Sort(a,0,3);
  for (int i = 0; i < 4; i++) {
    printf("%d ", a[i]);
  }
}
