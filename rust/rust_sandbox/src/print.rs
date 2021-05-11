pub fn run(){
    println!("Hello, from print.rs file");

    //basic formating
    println!("{} is from {}", "Keith", "Boston");

    // Positional Arguments
    println!(
        "{0} is from {1} and {0} likes to {2}", 
        "Brad", "Mass", "code"
    );

    // Named Arguments 
    println!("{name} likes to play {activity}",
        name = "John",
        activity = "Baseball"
    );

    // Placeholder traits 
    println!("Binary: {:b} Hex: {:x} Octal: {:o}", 10, 10, 10);

    // Placeholder for debug trait
    println!("{:?}", (12, true, "hello"));

    // Basic math 
    println!("10 + 10 = {}", 10 + 10);

}