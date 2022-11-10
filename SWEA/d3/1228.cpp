    #include <iostream>
    #include <list>
    using namespace std;

    int main()
    {
        int tc;
        int t = 10;
        for (int tc = 1; tc <= t; tc++)
        {
            list<int>arr;
            int n; cin >> n;

            for (int i =0; i < n; i++)
            {
                int temp; cin >> temp;
                arr.push_back(temp);
            }

            int order; cin >> order;

            while (order > 0)
            {
                list<int>b;
                char cmd; cin >> cmd;
                int x, y, s;
                cin >> x >> y;
                for (int i = 0; i < y; i++)
                {
                    int s; cin >> s;
                    b.push_back(s);
                }

                list<int> ::iterator tmp;
                tmp =arr.begin();
                while (x > 0)
                {
                    tmp++;
                    x--;
                }

                arr.splice(tmp,b);
                
                order--;
            }

            cout << "#" << tc << " ";
            
            for (int i = 0; i < 10; i++)
            {
                cout << arr.front() << " ";
                arr.pop_front();
            }
            cout << "\n";
            arr.clear();
            
        }
        return 0;
    }