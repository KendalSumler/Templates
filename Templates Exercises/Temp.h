#pragma once
/*Min
DESCRIPTION : Returns the lower of two values.
	INPUT : Two template arguments(a, b).
	OUTPUT : The lower of the two values a and b.*/
template<typename K>
K Min(K a, K b)
{
	return a < b;
}

/*Max
DESCRIPTION : Returns the higher of two values.
	INPUT : Two template arguments(a, b).
	OUTPUT : The higher of the two values a and b.*/

template<typename E>
E Max(E a, E b)
{
	return a > b;
}

/*Clamp
DESCRIPTION : Constrains a value within the range of two other values.
	INPUT : Three template arguments(min, max, val).
	OUTPUT : The value of the val constrained between min and max.*/

 template<typename N>
 N Clamp(N min, N max, N val)
 {
	 if (val < max && > min)
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

 template<typename D>
 D Min(D a, D b)
 {

	 return 0;
 }