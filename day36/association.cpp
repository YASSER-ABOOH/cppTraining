/*

(Association(Aggregation(Composition)))
====================
Association.......
Association is have-a relationship.
Ex. Accounts have-a-relationship with the Employee.
--in associ. we use pass by values..hence, there is no control over the lifetime of the other object.
-- we do not have control of the lifetime of one  object over the another
--hence, it is achieved by pass-by value.

====================
Aggregation........
--have an obj . which is borrowed from someone else,it doesn't change the lifetime of the borrowed obj.
-- that's why when the class dies the object may live on.
====================
Composition........
--controls the lifespan of the other object.
--owns the object for its lifetie.


*/

class Accounts 
{
public:
	//e is passed to calcSal as a copy of the Employee
	//and hence calcSal uses Employee class(pass by Accounts)
};