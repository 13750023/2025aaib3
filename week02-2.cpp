///week02-2.cpp C++
///�n��C++���r��ϰ_��
#include <iostream>///IO��y�~��
#include<string>///�r��~��
using namespace std;///�ϥΩR�W�Ŷ�std
int main()
{
    cout<<"�п�J�Ʀr: ";
    string a,ans;///C++���r��
    cin>>a;///��J�r��
    ///�˹L�Ӫ��j�� �r�ꪺ���ץsa.length()
    for(int i=a.length()-1;i>=0;i--){
        ans+=a[i];///��r���˹L�ӡA��J����
    }///�g��@�b�A�Ȯɥ𮧤@�U
    cout<<a<<ans;
}
