void plusMinus(vector<int> arr) {
    float total = arr.size(), p=0.0, n=0.0, z=0.0;
    for(int c : arr) {
        if(c > 0) p++;
        if(c == 0) z++;
        if(c < 0) n++;
    }
    cout << fixed << setprecision(5) << p / total << "\n";
    cout << fixed << setprecision(5) << n / total << "\n";
    cout << fixed << setprecision(5) << z / total << "\n";
}