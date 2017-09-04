/*
 * Starter code for Assignment 1.  Finish the definition of the SimpleArray class and then build out
 * the implementation.
 * Make sure to use the provided test cases to properly understand what needs to be developed.
 */

#ifndef SIMPLE_ARRAY_H
#define SIMPLE_ARRAY_H

// Just include the special AllocationTracker class
#include "AllocationTracker.h"

class SimpleArray {
public:
    /*** Add some constructors/destructor goodness here ***/

    /**
     *  getReference is const and returns a non-const type in order to mimic
     *  dereferencing raw pointers through the subscript operator as closely
     *  as possible. A pointer-that-is-const is permitted to alter the data
     *  where it points, but may never be pointed to a different address; the
     *  same should be true of SimpleArrays-that-are-const.
     */
    AllocationTracker& getReference(const uint32_t i) const;

    /*** Need to add some things here ***/

private:
    /*** Maybe some things here ***/

    // Data members - make sure to use this
    AllocationTracker* mArray;
};

#endif
