// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int l = 0;
  int r = size - 1;
  int mid;
  int count = 0;
  while (l <= r) {
    mid = (l + r) / 2;
    if (*(arr + mid) == value) {
      count++;
      break;
    }
    if (*(arr + mid) < value)
      l = mid - 1;
    if (*(arr + mid) > value)
      r = mid + 1;
  }
  if (count != 0) {
    for (int k = mid + 1; *(arr + k) == value; k++)
      count++;
    for (int k = mid - 1; *(arr + k) == value; k--)
      count++;
  }
  return count;
}
