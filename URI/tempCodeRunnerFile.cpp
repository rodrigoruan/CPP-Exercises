else {
      vector<int> arra = {0, 0};
      for(int j = 0; j < 2; j++) {
        for(int k = 0; k < 3; k++) {
          if(arr[j][k] != y[k]) arra[j]++;
        }
      }
      if(arra[0] > arra[1]) cout << arra[1] << "\n";
      else cout << arra[0] << "\n";
    }