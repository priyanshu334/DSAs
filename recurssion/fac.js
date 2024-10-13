class Node{
    constructor(n){
        this.n = n;

    }

    factorial(n){
        if(n==0) return 1;

        let ans = n * this.factorial(n-1);
    }
}