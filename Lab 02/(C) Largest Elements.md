# <p align="center"> C. largest elements </p>

<p align="center">
  time limit per test: 1 second <br>
  memory limit per test: 256 megabytes <br>
input: standard input<br>
output: standard output
</p>

size of array is constant = 50 .

pass the number of elements received from user (array_size).

Take (k) The number of largest elements required to be printed.

Take an array of integers (positive or negative or both) (array)

show most largest elements in an array of integers.

using Function:

void k_largest_elements(int arr[], int array_size, int k)

range of number (number -500<x≤500).

## Input
enter array size then enter K then enter array

5

3

1 2 3 4 5

## Output
show most Largest elements (k) in an array of integers.

5 4 3

### Examples<br>
 ```input```<br>
5 3 1 2 3 4 5 <br>
 ```output```<br>
5 4 3 <br>
 ```input```<br>
5 2 1 2 3 4 5
<br>
 ```output```<br>
5 4 <br>
 ```input```<br>
6 3 1 2 3 4 5 6
<br>
 ```output```<br>
6 5 4 <br>
 ```input```<br>
1 2 1
<br>
 ```output```<br>
1 0 <br>

 ```input```<br>
3 4 1 2 3 <br>
 ```output```<br>
3 2 1 0 <br>
#### Note
All the elements in the given array are integers.

if K > size the remain values will be zeros.( see the last test case. )

you can use vectors or arrays.
