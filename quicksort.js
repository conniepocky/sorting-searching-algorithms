const quicksort = arr => {
	if (arr.length <= 1) {
		return arr;
	}

	let pivot = arr[0];
	let left = [];
	let right = [];

	for (var i =0; i < arr.length; i++) {
		if (arr[i] < pivot) {
			left.push(arr[i]);
		} else if (arr[i] > pivot) {
			right.push(arr[i]);
		}
	}

	return [...quicksort(left), pivot, ...quicksort(right)];

}
