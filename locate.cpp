    #include <iostream>
    #include <map>
    
    #define MP make_pair
    #define MAX 1005
    #define MAX2 2005
    using namespace std;

    typedef pair<int, int> p;
    typedef map<pair<int, int>, int> m;
    typedef long long ll;
    int main()
    {
        std::ios::sync_with_stdio(false);
        ll T;
        cin >> T;
        for (int i = 0; i < T; ++i)
        {
            m M1, M2;
            ll ans[MAX2 + 5][MAX2 + 5] = {};
            int L, C;
            cin >> L >> C;
            for (int i = 0; i < L; ++i)
            {
                for (int j = 0; j < C; ++j)
                {
                    int tmp;
                    cin >> tmp;
                    if (tmp == 1)
                    {
                        M1[MP(i, j)] = 1;
                    }
                }
            }


            for (int i = 0; i < L; ++i)
            {
                for (int j = 0; j < C; ++j)
                {
                    int tmp;
                    cin >> tmp;
                    if (tmp == 1)
                    {
                        M2[MP(i, j)] = 1;
                    }
                }
            }


            for (auto& [k1, v1] : M1)
            {
                for (auto& [k2, v2] : M2)
                {
                    int fst = k1.first - k2.first + 1005;
                    int sec = k1.second - k2.second +1005;
                    ans[fst][sec]++;
                }
            }
            ll rec = 0;
            for (int i = 0; i < MAX2 + 5; i++)
            {
                for (int j = 0; j < MAX2 + 5; j++)
                {
                    rec = ans[i][j] > rec ? ans[i][j] : rec;
                }
            }
            cout << rec << '\n';
        }
    }
