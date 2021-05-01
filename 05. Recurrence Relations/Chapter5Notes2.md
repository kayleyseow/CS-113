## Chapter 5 Notes: Recurrence Relations
CS-113 Discrete Structures  

#### Solving a Recurrence Relation
- Solving a recurrence relation means to put it into closed form
- Here is an example:  
  - a<sub>1</sub>= 3
  - a<sub>n+1</sub>= a<sub>n</sub>+2, n >= 1
- We write out several terms:  
  - a<sub>1</sub> = 3
  - a<sub>2</sub> = a<sub>1</sub> + 2 = 3 + 2
  - a<sub>3</sub> = a<sub>2</sub> + 2 = 3 + 2 + 2
- Continuing, we see that
  - a<sub>n</sub> = 3+2(n-1)
- This process is called iteration

#### Problems to Try
- Try to solve #2 on p. 244 by iteration.  Assume a<sub>0</sub> = 1
- How about a<sub>0</sub> = 3, a<sub>n</sub> = 2a<sub>n-1</sub> + n?

#### Linear Homogeneous Recurrence Relations with Constant Coefficients
- We will learn a technique for solving these problems
- Linear means?
- Homogeneous means?
- Constant coefficients means?
- Initial conditions means?
- Let’s call these LHRRCC for short
  - Don’t forget what those letters stand for!
- So, our recurrence relations will look like:  
  - a<sub>n</sub> = c<sub>1</sub>a<sub>n-1</sub> + c<sub>2</sub>a<sub>n-2</sub>, + c<sub>3</sub>a<sub>n-3</sub> + …+ c<sub>k</sub>a<sub>n-k</sub>
- with initial conditions:  
  - a<sub>0</sub> = d<sub>0</sub>, a<sub>1</sub> = d<sub>1</sub>, a<sub>2</sub> = d<sub>2</sub>, ..., a<sub>k-1</sub> = d<sub>k-1</sub>

#### Solving Another Recurrence Relation
- Let’s solve this recurrence relation using iteration
  - a<sub>1</sub> = 3
  - a<sub>n+1</sub> = 2a<sub>n</sub>, n >= 1
- Like before, we write out several terms
  - a<sub>1</sub> = 3
  - a<sub>2</sub> = 2a<sub>1</sub> = 2(3)
  - a<sub>3</sub> = 2a<sub>2</sub> = 2(2(3))
- Continuing, we see that
  - a<sub>n</sub> = 3(2<sup>n-1</sup>)


