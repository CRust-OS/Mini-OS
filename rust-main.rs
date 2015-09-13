// kernel.rs - a test for calling a rust program from mini-is

#![crate_type="staticlib"]
#![feature(no_std)]
#![no_std]

#![feature(lang_items)]

// needed for compilation, see:
// https://github.com/rust-lang/rust/blob/master/src/doc/trpl/lang-items.md
#[lang = "eh_personality"] extern fn eh_personality() {}
#[lang = "panic_fmt"] fn panic_fmt() -> ! { loop {} }

#[no_mangle]
pub extern fn add(x: i32, y:i32) -> i32 {
//    let x = Box::new(5);
//    *x + y
	x+y
}
