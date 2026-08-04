vector<long long> pref(n + 1);
for (int i = 0; i < n; i++)
    pref[i+1] = pref[i] + a[i];
long long rangeSum = pref[r+1] - pref[l];