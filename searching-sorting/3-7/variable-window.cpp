unordered_map<int,int> cnt;
int l = 0, best = 0;
for (int r = 0; r < n; r++) {
    cnt[a[r]]++;
    while ((int)cnt.size() > k) {
        if (--cnt[a[l]] == 0) cnt.erase(a[l]);
        l++;
    }
    best = max(best, r - l + 1);
}