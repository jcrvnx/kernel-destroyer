# KernelDestroyer - Yeah, Don't Run This. Seriously.

**Version:** 1.0  
**Author:** Jcrist Vincent Orhen

Okay, so, I made this thing. It's called `KernelDestroyer.exe`. The name kinda gives it away, right? Just want to be super clear: **this is not a toy**. It will mess up your computer *bad*.

---

## What Does It DO? (The Scary Part)

Basically, it finds the most important file in Windows (the kernel, `ntoskrnl.exe`) and wipes it clean. Like, replaces it with *nothing*. Then, to make sure it *really* screws things up, it forces your computer to crash with a Blue Screen of Death.

Think of it like... surgically removing your computer's brain and then smashing it with a hammer. Yeah, it's that bad.

---

## How Does It Work? (If You Really Wanna Know)

1.  It figures out where Windows keeps its system files.
2.  It locates `ntoskrnl.exe` (the main kernel file).
3.  It opens that file and *overwrites the entire thing with zeros*. That means it's gone. Kaput.
4.  It triggers a system crash to make sure the changes take effect. Because why not, right?

---

## Why Did I Make This? (Good Question!)

Honestly? Mostly just to see if I could. It's a proof-of-concept. A "look what's possible" kinda thing. This code is powerful, and in the wrong hands, it would brick a whole lot of machines.

I sure hope it doesn't get into the wrong hands.

---

## ⚠️ **SERIOUS WARNINGS (READ THIS. PLEASE.)** ⚠️

*   **DO NOT RUN THIS ON A COMPUTER YOU CARE ABOUT.** I'm talking your gaming rig, your work laptop, Grandma's PC... *anything*.
*   **YOU WILL LOSE ALL YOUR DATA.** Everything gone. Wiped. Poof.
*   **YOUR COMPUTER WILL NOT BOOT AGAIN.** It'll be a fancy paperweight.
*   **I AM NOT RESPONSIBLE IF YOU SCREW THINGS UP.** This is on you. I'm warning you.

---

## Final Thoughts (From Me to You)

I created `KernelDestroyer.exe`. I am the author of this code, I wanted to learn Windows internals and low-level system stuff. This was an experiment. And one that I am releasing to the world with extreme reluctance. Be careful. Be smart. Don't be an idiot.

\- Jcrist Vincent Orhen
