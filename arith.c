long plus(long x, long y)
{
    // TODO: Try changing these to ints, to shorts, to unsigned chars
    return x+y;
}

long mult12(long x)
{
    // TODO: Change the type here, or try other constants like 36, 42, ...
    return 12*x;
}


long scale(long x, long y, long z)
{
    // TODO: What if the 8 and 4 are not tidy powers of two?
    return x+ 8*y + 4;
}

long arith(long x, long y, long z)
{
    // TODO: What happens if you don't use t2's value anywhere?
    long t1 = x+y;
    long t2 = z+t1;
    long t3 = x+4;
    long t4 = y * 48;
    long t5 = t3 + t4;
    long rval = t2 * t5;
    return rval;
}

