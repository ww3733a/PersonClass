#include<bits/stdc++.h>
using namespace std;

int main()
{
    auto now=chrono::system_clock::now();
    time_t now_time=chrono::system_clock::to_time_t(now);
    tm* local_time=localtime(&now_time);
    int year=local_time->tm_year+1900;

    ofstream fout("year.txt",ios::out);
    fout<<year;
    fout.close();
    return 0;
}