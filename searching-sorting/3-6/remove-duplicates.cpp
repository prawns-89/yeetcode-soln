int w = 1;
for (int r = 1; r < n; r++) {
    if (a[r] != a[r-1]) a[w++] = a[r];
}