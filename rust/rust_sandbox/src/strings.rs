// Primitive str = Immutable fixed-length string somewhere in memory
// String = Growable, heap-allocated data structure - Use when you need to modify or own string data

pub fn run(){

    let mut hello = String::from("Hello ");

    // get length 
    println!("Length: {}", hello.len());

    //.push is only for char
    hello.push('W');

    // push string
    hello.push_str("orld!");

    // Capacity in bytes 
    println!("Capacity: {}", hello.capacity());
    // Check if empty
    println!("Is empty??: {}", hello.is_empty());

    //Contains 
    println!("Contains 'World' {}", hello.contains("World"));

    // Replace 
    println!("Replace: {}", hello.replace("World", "There"));

    //println!("{}", hello);

    // loops through string by whitespace
    for word in hello.split_whitespace() {
        println!("{}", word);
    }

    // Create string with capacity 
    let mut s = String::with_capacity(10);
    s.push('a');
    s.push('x');

    // Assertion testing , only prints if fails! 
    assert_eq!(2, s.len());
    assert_eq!(10, s.capacity());

    println!("{}", s)
   
}