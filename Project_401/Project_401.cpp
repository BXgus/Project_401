#include <iostream>
#include <iterator>  // ��� ������������� ostream_iterator
#include <vector>
using namespace std;

int main() {
    setlocale(0, "");

    vector <int> v;       // ������� ���
    vector <int> answer;  // �������

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    answer.push_back(0);
    answer.push_back(10);
    answer.push_back(20);
    answer.push_back(30);
    answer.push_back(40);

    cout << "������ answer �� ������������� copy: ";
    copy(answer.begin(), answer.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    vector <int> ::iterator it = answer.begin(); // ������� �������� it �������
    it++;                                         // ��������� �� ������ answer

    copy(v.begin()+1, v.end()-1, it);   // �������� �������� 

    cout << "������ answer ����� ������������ ������� copy: ";
    copy(answer.begin(), answer.end(), ostream_iterator<int>(cout, " "));  // ������ ���
    // ��������
    system("pause");
    return 0;
}