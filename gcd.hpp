
// Greatest Common Denominator
// PRE : a is a positive integer
// PRE : b is a positive integer
// POST : a and b are unchanged
// RETURN : the greatest common denominator of
// a and b.

int gcd ( const int a, const int b){
    int greatest;
    for(int i = 1; i <= a && i <= b; i++){

        if(a % i==0 && b % i == 0 ){

            greatest = i;
        }
    }
    return greatest;
}