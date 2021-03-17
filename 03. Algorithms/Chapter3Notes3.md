## Chapter 3 Notes: Algorithms (RSA)
CS-113 Discrete Structures  
3/15/2021

#### The RSA Public Key Cryptosystem
- We saw some of these ideas in the chapter in the C++ textbook that talked about files
  - The textbook had examples of the Caesar cipher
- Cryptology is the study of ways of encoding data
- This is especially important in computer science
  - It’s useful for security
  - Similar techniques are used for sending data over a noisy channel
  
#### Vocabulary
- Using a formula to convert your raw data to something unreadable is called _encrypting_ the data
- Using a formula to convert your encrypted data back to the original message is called _decrypting_ the data
- Your original message is called _plaintext_
- A message that is encrypted is called _ciphertext_

#### Encrypting Data
- One way to encrypt data is to use keys
- The person with plaintext uses a key to encrypt the data
  - You can think of a key as a number to add to or subtract from, each character of the plaintext
  - Or, you can think of a key as a number to multiply each character of the plaintext before adding them, etc.
- Then the message is sent
- The receiver also has a key
  - The key is used to decode the message
  
#### A Problem
- One problem that we have is this:
  - How can the sender get the key to the receiver?
- The sender cannot just send it unencrypted
  - If the sender does that, anyone can see the key and the messages will not be secret any more
- But, there is no way yet to encrypt the key because the receiver won’t know how to decrypt the encrypted key
- This is a problem!
- We look at this from the receiver’s point of view
  - The receiver needs to decrypt the message, and so comes up with the encryption key

#### The RSA Algorithm
- The name comes from the three people who invented the algorithm
  - Ronald Rivest, Adi Shamir, Leonard Adelman
- The idea of the algorithm is simple
- There are two keys, an encryption key (to encrypt plaintext) and a decryption key (to decrypt ciphertext)

#### The Keys
- The receiver broadcasts the encryption key
  - It’s now public
  - Anyone can see it and use it
- The receiver keeps the decryption key
- You might think having the encryption key also gives you the decryption key
  - It’s probably just some math formula to encrypt, after all
  - How hard can it be to decrypt an encrypted message?

#### The Algorithm
- The algorithm depends on two numbers z and n
- z is chosen to be the product of two primes p and q
  - p and q are chosen to have a lot of digits, at least 100
  - For my example, I will use p = 3 and q = 5
  - So z = 15
- The receiver calculates ∅ = (p – 1)(q – 1)
  - Here ∅ = (3 – 1) (5 – 1) = 2(4) = 8
- The receiver chooses a number n with gcd (n, ∅) = 1
  - This is often chosen to be a prime
  - I will choose n = 11
- The receiver then computes s where 0 < s < ∅ with ns mod(%) ∅ = 1
  - I will choose s = 3
- The receiver then publicly broadcasts z and n

#### Encrypting the Ciphertext
- The receiver broadcasts z = 15, and n = 11
- Suppose the message is 3, 8
- It is encrypted as c = an mod z, which is c = 3<sup>11</sup> mod 15
- 3<sup>11</sup> = (3<sup>4</sup>)<sup>2</sup>(3<sup>3</sup>) = (81)<sup>2</sup>(3<sup>3</sup>) ≡ (6<sup>2</sup>)(3<sup>3</sup>) ≡ 6(3<sup>3</sup>) = 6(27) ≡ 6(12) = 72 ≡ 12 mod 15
- 8<sup>11</sup> = (8<sup>2</sup>)<sup>5</sup>(8) = (64)<sup>5</sup>(8) ≡ (4)<sup>5</sup>(8) = (4<sup>2</sup>)<sup>2</sup>×4(8) = (4<sup>2</sup>)<sup>2</sup>(4×8) = (16)<sup>2</sup>×32 ≡ (1)<sup>2</sup>×32 = 32 ≡ 2 mod 15
- So, the message 12, 2 is sent

#### Decrypting the Ciphertext
- The receiver sees the message and computes c<sup>s</sup> mod z, which is c<sup>3</sup> mod 15
- 12<sup>3</sup> = (12<sup>2</sup>)(12) ≡ 9 × 12 = 108 ≡ 3 mod 15
- 2<sup>3</sup> = 8 mod 15
- So the decoded message is 3, 8 as it should be
- For future reference
  - z and n are the public keys
  - s is the private key

#### Internet Interlopers
- Suppose you wanted to spy on the sender and the receiver
- You know z (which is 15) and n (which is 11)
  - They were broadcast publicly
- You see 12 flying by, then 2
- You have to decode 12s mod 15 and 2s mod 15,  without knowing s
  - You do, however, know that ns ≡ 1 mod ∅, or 11s ≡ 1 mod ∅
- Great!  Except you don’t know ∅ either 
- :( or, “That message is secure”

#### Checking the Algorithm
- Why does this work?
- If a is the data to be encrypted, then c = a<sup>n</sup> mod z is sent
  - We know that this means that c = a<sup>n</sup> + vz for some integer v
- We need to recover a from c
- To start, we calculate c<sup>s</sup>, which is c<sup>s</sup> = (a<sup>n</sup> + vz)<sup>s</sup>
- Let’s expand this by the binomial theorem

#### Fermat's Little Theorem
- Fermat was a mathematician who lived in the 1600s
  - He is famous for his “Last Theorem”
- I will rely on his little theorem
- It says that
  - If p is a prime, then a<sup>p</sup> ≡ a (mod p)
- This is equivalent to a<sup>p-1</sup> ≡ 1 (mod p)
  - I divided both sides by a
- I will need this for later

#### A Simplification using Modular Arithmetic
- Remember that ns mod ∅ = 1
- This means that ns – 1 = u∅ for some integer u
- So then, a<sup>ns</sup> = a<sup>u∅ +1</sup> = (a<sup>u∅</sup>)a = a<sup>u(p-1)(q-1)</sup>a

#### Checking the Algorithm - Part 2
- Expanding (a<sup>n</sup> + vz)<sup>s</sup> by the Binomial Theorem gives 
  - c<sup>s</sup> = (a<sup>n</sup> + vz)<sup>s</sup> = a<sup>ns</sup> + C<sub>s,1</sub>a<sup>n(s-1)</sup>(vz)<sup>1</sup> + C<sub>s,2</sub>a<sup>n(s-2)</sup>(vz)<sup>2</sup> + … + C<sub>s,s-1</sub>a<sup>n(1)</sup>(vz)<sup>s-1</sup> + C<sub>s,0</sub>(vz)<sup>s</sup>  
  = a<sup>ns</sup> + (vz)[ ---------]
  - Notice that vz is a factor of all terms except the first
  - Also, notice that vz ≡ 0 mod z
- So, c<sup>s</sup> ≡ a<sup>ns</sup> mod z, and by Fermat’s Little Theorem,
- a<sup>ns</sup> = a<sup>u(p-1)(q-1)</sup>a ≡ [a<sup>(p-1)</sup>]<sup>(q-1)u</sup> a ≡ 1<sup>(q-1)u</sup> a mod z  
  ≡ a mod z
