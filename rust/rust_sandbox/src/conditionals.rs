
pub fn run(){
    let age: u8 = 18; 
    let check_id: bool = false; 

    //if else 
    if age >= 21 && check_id{
        println!("Bartender: What would you like to drink?");
    } else if age < 21 && check_id{
        println!("Bartender: oof");
    } else {
        println!("Bartender: ID");
    }
}