use std::io::stdin;
fn main() {
    let mut buf = String::new();
    stdin().read_line(&mut buf).expect("Failed to read line");
    let input: i32 = buf.trim().parse().unwrap();
    if input % 2 == 0 && input > 2 {
        println!("YES");
    } else {
        println!("NO");
    }
}
