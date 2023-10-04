#include <iostream>
using namespace std;
int main()
{
    double m_mid, m_final, m_total;
    cout << "m_mid=";
    cin >> m_mid; 
    cout << "m_final=";
    cin >> m_final;
    cout << "m_total=";
    m_total = m_mid * 0.4 + m_final * 0.6;
    cout << m_total << endl;
    if (m_total >= 4.0) {
        cout << "dau" << endl;
    } else {
         cout << "truot" << endl;
    }
    return 0;
}