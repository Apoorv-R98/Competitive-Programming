// Given an array of integers, sort its elements by the difference of their largest and smallest digits. In the case of a tie, 
// that with the larger index in the array should come first.

// Example

// For a = [152, 23, 7, 887, 243], the output should be
// digitDifferenceSort(a) = [7, 887, 23, 243, 152].

// Here are the differences of all the numbers:

// 152: difference = 5 - 1 = 4;
// 23: difference = 3 - 2 = 1;
// 7: difference = 7 - 7 = 0;
// 887: difference = 8 - 7 = 1;
// 243: difference = 4 - 2 = 2.
// 23 and 887 have the same difference, but 887 goes after 23 in a, so in the sorted array it comes first.


int difference(int a){
    int mn=INT_MAX,mx=INT_MIN;
    while(a!=0){
        int d = a % 10;
        mn = min(mn, d);
        mx = max(mx, d);
        a /= 10;
    }
    return mx-mn;
}
std::vector<int> digitDifferenceSort(std::vector<int> a) {
    vector<vector<int>> p;
    vector<int>v;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        p.push_back({a[i], i});
    }
    sort(p.begin(), p.end(), [&] (auto item1, auto item2) {
        int n1 = item1[0], idx1 = item1[1];
        int n2 = item2[0], idx2 = item2[1];
        int diff1 = difference(n1), diff2 = difference(n2);
        if (diff1 != diff2) {
            return diff1 < diff2;
        }
        return idx1 > idx2;
    });

    for(int i=0;i<n;i++){
        v.push_back(p[i][0]);
    }

    return v;
}
