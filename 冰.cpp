#include<iostream>
using namespace std;
const MAX=10;
class Set
{
public:
      Set(int n){
		  int x,i;
      cout<<"��������Ҫ��ӵ�Ԫ�أ�"<<endl;
	  number=n;
      for(i=0;i<n;i++)
      cin>>a[i];
      cout<<"��ͨ���캯��������"<<endl;
      }
	  Set(Set &s){ 
		      int i;
		     number=s.number;
            for(i=0;i<s.number;i++)
            {
                  a[i]=s.a[i];
            }
            
		  cout<<"�������캯��������"<<endl;
      }
	  Set(){
		  for(int i=0;i<MAX;i++)
			  a[MAX]=0;
		  number=3;
		  cout<<"Ĭ�Ϲ��캯��������"<<endl;
	  }
	  void show();



private:
	int number;
	int a[MAX];




};
void Set::show()
{

for(int i=0;i<number;i++)
  cout<<a[i]<<" ";
 cout<<endl;



}
void main()
{
  Set s1;
  s1.show();


}