// use num::Num;
#[allow(unused_imports)]
use std::cmp::{max, min};
#[allow(unused_imports)]
use std::io::{stdin, stdout, BufWriter, Stdout, Write};

#[derive(Default)]
struct Scanner {
    buffer: Vec<String>,
}
impl Scanner {
    fn next<T: std::str::FromStr>(&mut self) -> T {
        loop {
            if let Some(token) = self.buffer.pop() {
                return token.parse().ok().expect("Failed parse");
            }
            let mut input = String::new();
            stdin().read_line(&mut input).expect("Failed read");
            self.buffer = input.split_whitespace().rev().map(String::from).collect();
        }
    }
}
fn main() {
    let mut scan = Scanner::default();
    let multicase = 0;
    if multicase == 0 {
        solution(&mut scan);
    } else {
        let mut times = scan.next::<usize>();
        while times != 0 {
            solution(&mut scan);
            times -= 1;
        }
    }
}

fn solution(scan: &mut Scanner) {
    let v: Vec<u32> = (0..25).map(|_| scan.next()).collect();
    let mut pos: i32 = 0;
    for id in v.into_iter() {
        if id == 0 {
            pos += 1;
        } else {
            break;
        }
    }
    println!("{}", (pos / 5 - 2).abs() + (pos % 5 - 2).abs());
}
