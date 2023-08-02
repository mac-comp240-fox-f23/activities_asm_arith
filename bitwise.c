
int mask1(int x, int y) {
    // TODO: Change the type here to see how the code changes
    int z = x & y;
    return ~z;
}

int mask2(int x, int y) {
    // TODO: What if you don't use z in the final answer?
    int z = x | y;
    int q = ~x;
    int r = -x;
    return (q & r) & z;
}

int mask3(int x, int y) {
    return (x & y) | (~x & ~y) | (x & ~y) | (~x & ~y);
}

