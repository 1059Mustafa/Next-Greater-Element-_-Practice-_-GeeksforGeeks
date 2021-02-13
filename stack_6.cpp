vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    vector<long long>v;
    stack<long long>s;
    long long k=-1;
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            v.push_back(k);
        }
        else if(s.size()>0&&s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.top()<=arr[i]&&s.size()>0)
        {
            while(s.top()<=arr[i]&&s.size()>0)
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(k);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}
