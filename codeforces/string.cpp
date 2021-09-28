#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string a, q, r, tags;
    getline(cin, a);
    vector<string> s(n), t(n), tag, tagq;
    vector<int> tnumber;
    int l, j, b, k, p, max;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
        // cout << s[i] << endl;
        j = 1;
        tags = "";
        while (s[i][j] != ' ' && s[i][j] != '>')
        {
            tags.push_back(s[i][j]);
            // cout << j << endl;
            j++;
        }
        tag.push_back(tags);
        // cout << tag[i] << endl;
        if (s[i][1] != '/')
        {
            tnumber.push_back(0);
        }
        else
        {
            k = 0;
            while (tag[i].substr(1, tag[i].size() - 1) != tag[k])
            {
                k++;
            }
            tnumber[k] = i;
            tnumber.push_back(k);
        }
    }
    for (auto x : tag)
    {
        // cout << x << endl;
    }
    for (auto x : tnumber)
    {
        // cout << x << endl;
    }
    for (int i = 0; i < m; i++)
    {
        getline(cin, q);
        tagq.clear();
        // cout << q << endl;
        l = 0;
        j = 0;
        p = 0;
        while (q[l] != '~')
        {
            tags = "";
            while (q[l] != '.' && q[l] != '~')
            {
                tags.push_back(q[l]);
                l++;
                p++;
            }
            tagq.push_back(tags);
            if (q[l] == '.')
            {
                l++;
                p++;
            }
        }
        // cout << p;
        // for (auto x : tagq)
        // {
        //     cout << x << endl;
        // }
        l = 0;
        j = 0;
        max = n - 1;
        while (l < tagq.size() && j < max)
        {
            // cout << l << " " << j << endl;
            if (tagq[l] == tag[j])
            {
                max = tnumber[j];
                j++;
                l++;
            }
            else
            {
                j = tnumber[j] + 1;
            }
        }

        if (l == tagq.size())
        {
            // cout << "Found!" << endl;
            // cout << tnumber[max] << endl;
            a = s[tnumber[max]];
            k = 0;
            b = 0;
            while (a[k] != '>')
            {
                // cout << a[k];
                if (a[k] == ' ')
                {
                    k++;
                    // cout<<a[k]<<endl;
                    if (a.substr(k, q.size() - p - 1) == q.substr(p + 1, q.size() - p - 1))
                    {
                        b = 1;
                        k += q.size() - p + 2;
                        r = "";
                        // cout<<k<<endl;
                        k++;
                        while (a[k] != '"')
                        {
                            r.push_back(a[k]);
                            k++;
                            // cout<<k<<endl;
                        }
                        k++;
                        // cout<<r<<endl;
                        break;
                    }
                    else
                    {
                        // cout<<"ah"<<endl;
                        while ((a[k] != ' ') && (a[k] != '>'))
                        {
                            k++;
                            // cout<<a[k]<<"nn"<<endl;
                        }
                    }
                }
                else
                {
                    // cout<<a[k]<<"yes"<<endl;
                    k++;
                }
            }
            if (b == 1)
            {
                cout << r << endl;
            }
            else
            {
                cout << "Not Found!" << endl;
            }
        }
        else
        {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}