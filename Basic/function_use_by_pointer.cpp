#include<iostream>

void ComparePointers(int* a,int* b)
{
  if(a == b)
  std::cout<<"Pointers are the same!"<<std::endl;
  else
  std::cout<<"Pointers are different!"<<std::endl;
}

int main()
{
  int i, j;
  int& r = i;

  ComparePointers(&i,&i);
  ComparePointers(&i,&j);
  ComparePointers(&i,&r);
  ComparePointers(&j,&r);

  return 0;
}