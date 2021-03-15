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
