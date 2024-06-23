/* ---------------------- ��������� std::ve�tor -------------------------
��������� ��������� �������� � ������ � ��������� ��������, � ������� ��������� ������� 
������������ �����.
�	������ ������ ����� ���������� ��������<��������<<>>
�	������ - ���������� ����� � "������" ��������� �������
�	������ - ���������� ����� ��������� (���������� "�� ������") �������.
���� ���� ���� ������ ���� ���-�� ���������� � ������� �� �������, � ��������, 
�.�. � ����� ���� ������ ������� (� ��������� ���� ������) ������.
*/
#include <iostream>
#include <vector>using std::vector;
using namespace std;
// �������� �� ������  ����������� �� �������� :
void out(const vector<vector<vector<int>>> & v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            for (int k = 0; k < v[i][j].size(); ++k)
                cout << v[i][j][k] << " ";
            cout << endl;
        }
        cout << endl;
    }
}
int main()
{
    int n1 = 2, n2 = 3, n3 = 5;
    vector<vector<vector<int>>> Vec(n1, vector<vector<int>>(n2, vector<int>(n3, 0)));

    for (int i = 0; i < n1; ++i)
        for (int j = 0; j < n2; ++j)
            for (int k = 0; k < n3; ++k)
                Vec[i][j][k] = (i + 1) * 100 + (j + 1) * 10 + k + 1;
    out(Vec);

}