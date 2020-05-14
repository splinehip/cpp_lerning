int get_gcd (int m, int n)
{
    return (n == 0)? m: get_gcd(n, m % n);

}
