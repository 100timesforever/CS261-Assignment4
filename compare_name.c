#include <stdio.h>
#include <assert.h>
#include "bst.h"
#include "structs.h"

/*----------------------------------------------------------------------------
 very similar to the compareTo method in java or the strcmp function in c. it
 returns an integer to tell you if the left value is greater then, less then, or
 equal to the right value. you are comparing the number variable, letter is not
 used in the comparison.

 if left < right return -1
 if left > right return 1
 if left = right return 0
 */

 /*Define this function, type casting the value of void * to the desired type.
  The current definition of TYPE in bst.h is void*, which means that left and
  right are void pointers. To compare left and right, you should first cast
  left and right to the corresponding pointer type (struct data *), and then
  compare the values pointed by the casted pointers.

  DO NOT compare the addresses pointed by left and right, i.e. "if (left < right)",
  which is really wrong.
 */
int compare(TYPE l, TYPE r)
{
    /*FIXME: write this*/
	int i = 0;
	struct data * left = l;
	struct data * right = r;
	if(left != NULL && right != NULL) {
		if(left->name != NULL && right->name != NULL) {
			while(left->name[i]!='\0' || right->name[i]!='\0') {
				if(left->name[i] > 65 && left->name[i] < 90) {
					left->name[i] += 32;
				}
				if(right->name[i] > 65 && right->name[i] < 90) {
					right->name[i] += 32;
				}
				if(left->name[i] < right->name[i] || left->name[i] == '\0') {return(-1);}
				else if(right->name[i] < left->name[i] || right->name[i] == '\0') {return(1);}
				i++;
			}
			return(0);
		}
	}
	return(0);
}

/*Define this function, type casting the value of void * to the desired type*/
void print_type(TYPE curval)
{
	struct data * val = curval;
    /*FIXME: write this*/
	printf("current value: %s", val->name);

}


