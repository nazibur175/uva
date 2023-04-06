#include<stdio.h>
int n;
int max_number(int a[]);
int min_number(int a[]);
int main()
{
  printf("Please enter how many number you want to insert\n");
  scanf("%d",&n);
  int a[n];
  printf("Please enter those elements\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int m_number=max_number(a);
  printf("Max number = %d\n",m_number);
  int mi_number=min_number(a);
  printf("Min number = %d\n",mi_number);
  return 0;
}

int max_number(int a[n])
{
  int max_value=0;
  for(int i=0;i<n;i++)
    if(a[i]>max_value)
    {
      max_value=a[i];
    }
    return max_value ;


}

int min_number(int a[n])
{
  int min_value=1000000;
  for(int i=0;i<n;i++)
    if(a[i]<min_value)
    {
      min_value=a[i];
    }
    return min_value ;
    

}