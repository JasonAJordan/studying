/* Write a program that prints the numbers from 1 to 100. But for multiples of three print “Fizz” 
instead of the number and for the multiples of five print “Buzz”. For numbers which are multiples 
of both three and five print “FizzBuzz" */



function fizzBuzz(num) {

    for (let i = 1; i<= num; i++){
        let cond1 = (i % 3 == 0)
        let cond2 = ( i % 5 == 0)

        if (cond1 && cond2){
            console.log("FizzBuzz")
        } else if (cond1){
            console.log("Fizz")
        } else if (cond2){
            console.log("Buzz")
        } else {
            console.log(i)
        }
    }

}

fizzBuzz(16)
