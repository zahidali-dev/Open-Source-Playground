// ---------------------------------------------------------
// Hello World Program in Rust
// I Love UZAIR
// ---------------------------------------------------------
// Author: Open Source Playground Team
// Description: A simple Rust program that demonstrates the
//              classic "Hello, World!" example.
// ---------------------------------------------------------

/// Entry point of the program
fn main() {
    let message = greet();
    println!("{}", message);
}

/// Returns a greeting message
fn greet() -> String {
    String::from("Hello, World! 👋\nWelcome to Open Source Playground! 🎮")
}
