#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<vector<string>> x(3, vector<string> (4));
    vector<vector<string>> s(3, vector<string> (4));

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
            cin>>x[i][j];
    }

    int f = 0;
    vector<vector<int>> vis(4, vector<int> (4));

    auto Fill = [&](vector<string> &t, int x, int y, int p, int q)
    {
        for(int i=0, r, c; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                if(t[i][j]=='#')
                {
                    r = i - p + x;
                    c = j - q + y;

                    if(r<0 || r>3 || c<0 || c>3 || vis[r][c])     return 0;

                    vis[r][c] = 1;
                }
            }
        }

        return 1;
    };

    auto check = [&](vector<string> &a, vector<string> &b, vector<string> &c)
    {
        int ok = 1;
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
                vis[i][j] = 0;
        }

        ///a
        {
            int p=-1, q;
            for(int i=0; i<4 && p==-1; i++)
            {
                for(int j=0; j<4; j++)
                {
                    if(a[i][j]=='#')
                    {
                        p=i, q=j;
                        break;
                    }
                }
            }

            ok &= Fill(a, 0, 0, p, q);
        }

        ///b
        {
            int i1=-1, j1;
            for(int i=0; i<4 && i1==-1; i++)
            {
                for(int j=0; j<4; j++)
                {
                    if(!vis[i][j])
                    {
                        i1=i, j1=j;
                        break;
                    }
                }
            }
            int p=-1, q;
            for(int i=0; i<4 && p==-1; i++)
            {
                for(int j=0; j<4; j++)
                {
                    if(b[i][j]=='#')
                    {
                        p=i, q=j;
                        break;
                    }
                }
            }

            ok &= Fill(b, i1, j1, p, q);
        }

        ///c
        {
            int i1=-1, j1;
            for(int i=0; i<4 && i1==-1; i++)
            {
                for(int j=0; j<4; j++)
                {
                    if(!vis[i][j])
                    {
                        i1=i, j1=j;
                        break;
                    }
                }
            }
            int p=-1, q;
            for(int i=0; i<4 && p==-1; i++)
            {
                for(int j=0; j<4; j++)
                {
                    if(c[i][j]=='#')
                    {
                        p=i, q=j;
                        break;
                    }
                }
            }

            ok &= Fill(c, i1, j1, p, q);
        }

        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
                ok &= vis[i][j];
        }

        return ok;
    };

    auto Rotate = [&](vector<string> &t)
    {
        for(int i=0; i<2; i++)
        {
            for(int j=i; j <4-i-1; j++)
            {
                int temp = t[i][j];
                t[i][j] = t[4 - 1 - j][i];
                t[4 - 1 - j][i] = t[4 - 1 - i][4 - 1 - j];
                t[4 - 1 - i][4 - 1 - j] = t[j][4 - 1 - i];
                t[j][4 - 1 - i] = temp;
            }
        }
    };

    for(int i=0; i<4 && !f; i++)
    {
        for(int j=0; j<4 && !f; j++)
        {
            for(int k=0; k<4 && !f; k++)
            {
                s = x;

                sort(s.begin(), s.end());

                do{
                   f |= check(s[0], s[1], s[2]);
                }while(!f && next_permutation(s.begin(), s.end()));

                Rotate(x[2]);
            }
            Rotate(x[1]);
        }
        Rotate(x[0]);
    }

    if(f)       cout<<"Yes\n";
    else        cout<<"No\n";
}
