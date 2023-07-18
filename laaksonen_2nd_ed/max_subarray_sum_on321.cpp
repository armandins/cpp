	/* O(n^3) Time solution for maximum subarray sum prob. */


	int best {0};

	for (int i = 0; i < n; i++){
		for (int j = i; j < n; j++){
			int sum {0};
			for (int k = i; k <= j; k++){
				sum += array[k];
			}

			best = max(best, sum);

		}
	}

	cout << best << "\n";

	// O(n^2) Sol.
	
	int best = 0;
	
	for (int a = 0; a < n; a++) {
	int sum = 0;
		for (int b = a; b < n; b++) {
			sum += array[b];
			best = max(best,sum);
		}
	}
	
	cout << best << "\n";


	// O(n) time sol. 
	// The idea is to calculate for each array position the maximum sum of a subarray that ends at that position. After this,
	// the answer to the problem is the maximum of those sums.

	int best = 0, sum = 0;
	for (int k = 0; k < n; k++) {
		sum = max(array[k],sum+array[k]);
		best = max(best,sum);
	}
	cout << best << "\n";