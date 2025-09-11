# Rust Examples 🦀

Welcome to the Rust examples directory! Rust is a systems programming language focused on safety and performance.

## Running Rust Code

### Prerequisites
- Install Rust from [rustup.rs](https://rustup.rs/)
- This will install `rustc` (compiler) and `cargo` (package manager)

### How to Run
```bash
# Navigate to this directory
cd examples/rust

# Compile and run the Rust program
rustc hello-world.rs
./hello-world

# Or for more complex projects, use cargo
# cargo new my-project
# cargo run
```

## Expected Output
```
Hello, World!
Welcome to Open Source Playground! 🎮
```

## Contributing Rust Examples

Feel free to add more Rust examples! Some ideas:
- Ownership and borrowing examples
- Basic struct and enum usage
- Error handling with Result and Option
- Simple CLI applications
- Basic file I/O
- Pattern matching examples

### Code Style Guidelines
- Use `cargo fmt` to format your code automatically
- Follow Rust naming conventions (snake_case for variables and functions)
- Add documentation comments with `///`
- Handle errors explicitly (avoid `unwrap()` in examples)
- Use meaningful variable names

### Rust Tools
```bash
# Format your code
cargo fmt

# Check your code
cargo check

# Run tests
cargo test
```

Happy coding! 🎉