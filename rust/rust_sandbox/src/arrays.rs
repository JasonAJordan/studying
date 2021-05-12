// Arrays - Fixed list where elements are the same data types
use std::mem;

pub fn run(){

    let mut numbers: [i32; 5] = [1,2,3,4,5];
    let numbers2: [i32; 4] = [1,2,3,3];

    numbers[2] = 20;

    println!("{:?}", numbers);
    println!("single value: {}", numbers[0]);

    // Get array length
    println!("Array Length: {}", numbers.len());

    // Arrays are stack allocated
    println!("Array occupies {} byetes {}", mem::size_of_val(&numbers), std::mem::size_of_val(&numbers2) )

}