int shift1(int x, int y) {
    // TODO: Try changing the distance of the shifts, from 2 to 3 for the left shift, from 1 to 2 for the right
    int z = x << 3;
    y >>= 1;
    return z + y;
}


long shift2(long a) {
    // TODO: What happens if you change the r2 line to put parens around (a << 3)?
    long r1, r2;
    r1 = a << 2;
    r2 = (r1 + a) << 3;
    return r2;
}