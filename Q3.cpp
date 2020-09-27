#include <iostream>

using namespace std;

class Student
{
public:
    Student(const string& n) : m_name(n) { };
    const string& name() { return m_name; };
    void setKorean(int k) { Korean = k; }
    void setEnglish(int e) { English = e; }
    void setMath(int m) { Math = m; }
    int getTotal()
    {
        return Korean + English + Math;
    }
    int getAverage()
    {
        return getTotal() / 3;
    }

private:
    string m_name;
    int Korean;
    int English;
    int Math;
};

int main() {
    Student s1("tom");
    s1.setKorean(85);
    s1.setEnglish(80);
    s1.setMath(95);

    cout << "total: " << s1.getTotal() << endl;
    cout << "average: " << s1.getAverage() << endl;
}