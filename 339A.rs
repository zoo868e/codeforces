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
    let equation = (*scan).next::<String>();
    let nums = equation.split("+");
    let mut v: Vec<i32> = Vec::new();
    for part in nums {
        v.push(part.parse().unwrap());
    }
    v.sort();
    print!("{}", &v[0]);
    for num in &v[1..] {
        print!("+{}", num);
    }
    println!();
}
