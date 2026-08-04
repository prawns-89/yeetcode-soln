unique_ptr<int> ptr = make_unique<int>(10);
unique_ptr<int> other = move(ptr);
if (!ptr) {
    cout << *other << "\n";
}