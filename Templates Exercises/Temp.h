#pragma once
/*Min
DESCRIPTION : Returns the lower of two values.
	INPUT : Two template arguments(a, b).
	OUTPUT : The lower of the two values a and b.*/

template<typename T>
T Min(T a, T b)
{
	return a < b;
}

/*Max
DESCRIPTION : Returns the higher of two values.
	INPUT : Two template arguments(a, b).
	OUTPUT : The higher of the two values a and b.*/

template<typename T>
T Max(T a, T b)
{
	return a > b;
}

/*Clamp
DESCRIPTION : Constrains a value within the range of two other values.
	INPUT : Three template arguments(min, max, val).
	OUTPUT : The value of the val constrained between min and max.*/

 template<typename T>
 T Clamp(T min, T max, T val)
 {
	 if (val < max && val > min)
	 {
		 return val;
	 }
	 if (val > max )
	 {
		 return max;
	 }
	 if (val < min)
	 {
		 return min;
	 }
	 return ;
 }

/* Min(specialised for char)
	 DESCRIPTION: As above but first checks if a and b represent alphabetical characters.If so,
	 the function will return the value that is alphabetically lower.
	 INPUT : Two template arguments(a, b).
	 OUTPUT : The alphabetically lower of the two values a and b.*/

 template<typename T>
 T Min(T a, T b)
 {

	 return b;
 }

 /*Max(specialised for char)
	 DESCRIPTION: As above but first checks if a and b represent alphabetical characters.If so,
	 the function will return the value that is alphabetically higher.
	 INPUT : Two template arguments(a, b).
	 OUTPUT : The alphabetically higher of the two values a and b.*/

 template<typename T>
 T Max(T a, T b)
 {
	 return a;
 }

/* Create a template class for storing any data - type.The data itself should be stored as a private
	 pointer to an array on the heap.*/

 template<class temp>
 class T
 {
 private:
	 temp* temptr;
	 int index ;
	 int size ;
 public:

	/* Creates an array on the heap of the specified capacity.The new heap
		 memory should be zeroed using memset.You should store the value of
		 capacity and size for later use(size should start at 0).
		 INPUT : A single integer specifying the capacity for the data array.*/

	 T Constructor(int a)
	 {
		 index = 0;
		 size = 2;
		 temptr = new temp[size]
			 return 0;
	 }

	 /*Deletes the data pointed to on the heap.*/

	 T Deconstructor()
	 {
		 delete T;
	 }
	 
	/*Adds an item to the next empty array location(you should be able to use the
		 size value as an index to the next free location).Before adding the new item
		 to the array, we should check if there is room and call Expand if not.
		 INPUT: One template arguments(item).*/	 T add()	 {

	 }
 };

