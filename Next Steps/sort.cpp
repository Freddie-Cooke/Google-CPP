// sort.h
// bubble sort

void Bubble_sort(int* an_array, int size) {
	int store;
	int count = 1;

	while (count != size) {
		count++;
		for (int i = 0; i < size; i++) {
			if (*(an_array+i)<*(an_array+i+1)){
				store = *(an_array+i);
				*(an_array+i) = *(an_array+i+1);
				*(an_array+i+1) = store;
			}
		}
	}
}
