/**
 * @input A : Integer
 * @input B : Integer
 * @input C : Integer
 * 
 * @Output Integer
 */
int Mod(int A, int B, int C) {
    if (C == 1) return 0;
    if (B == 0) return 1 % C;

    // Normalize A
    A = ((A % C) + C) % C;

    long long half = Mod(A, B / 2, C);
    long long halfSq = (half * half) % C;

    if (B % 2 == 0) {
        // even exponent
        return halfSq;
    } else {
        // odd exponent
        return (A * halfSq) % C;
    }
}
