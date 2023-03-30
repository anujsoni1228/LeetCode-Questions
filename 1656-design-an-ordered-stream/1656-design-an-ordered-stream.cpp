class OrderedStream {
public:
    vector<string> arr;
    int p=0;
    OrderedStream(int n) {
        arr.resize(n);
    }
    
    vector<string> insert(int i, string v) {
        arr[i-1]=v;
        vector<string> r;
        while(p<arr.size() and arr[p]!="")
            r.push_back(arr[p]),p++;
        return r;            
    }
};