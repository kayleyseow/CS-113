## List of Symbols (Discrete Mathematics)  
CS-113 Discrete Structures

#### Logic
- _p_ ∨ _q_: _p_ or _q_
- _p_ ∧ _q_: _p_ and _q_
- ¬ _p_, − _p_, _p_ bar: not _p_
- _p_ → _q_: if _p_, then _q_
- _p_ ↔ _q_: _p_ if and only if _q_
- _P_ ≡ _Q_: _P_ and _Q_ are logically equivalent
- ∀: for all
- ∃: there exists
- ∴: therefore

#### Set Notation
- {_x_<sub>1</sub>, ... , _x_<sub>n</sub>}: set consisting of the elements _x_<sub>1</sub>, ... , _x_<sub>n</sub>
- {_x_ | _p_(_x_)}: set consisting of those elements _x_ satisfying property _p_(_x_)
- _x_ ∈ _X_: _x_ is an element of _X_
- _x_ ∉ _X_: _x_ is not an element of _X_
- _X_ = _Y_: set equality (_X_ and _Y_ have the same elements)
- |_X_|: number of elements in _X_
- ∅: empty set
- _X_ ⊆ _Y_: _X_ is a subset of _Y_
- P(_X_): power set of _X_ (all subsets of _X_)
- _X_ ⋃ _Y_: _X_ union _Y_ (all elements in _X_ or _Y_)
- _i_ = 1 ⋃ _n_ _X_<sub>_i_</sub>: union of _X_<sub>1</sub>, ... , _X_<sub>n</sub> (All elements that belong to at least one of _X_<sub>1</sub>, _X_<sub>2</sub>, ... , _X_<sub>_n_</sub>)
- _i_ = ∞ ⋃ _n_ _X_<sub>_i_</sub>: union of _X_<sub>1</sub>, _X_<sub>2</sub>, ... , (All elements that belong to at least one of _X_<sub>1</sub>, _X_<sub>2</sub>, ...)
- ⋃ _S_: union of _S_ (all elements that belong to at least one set in _S_)
- _X_ ∩ _Y_: _X_ intersect _Y_ (all elements in _X_ and _Y_)
- _i_ = 1 ∩ _n_ _X_<sub>_i_</sub>: intersection of _X_<sub>1</sub>, ... , _X_<sub>n</sub> (All elements that belong to every one of _X_<sub>1</sub>, _X_<sub>2</sub>, ... , _X_<sub>_n_</sub>)
- _i_ = ∞ ∩ _n_ _X_<sub>_i_</sub>: intersection of _X_<sub>1</sub>, _X_<sub>2</sub>, ... , (All elements that belong to every one of _X_<sub>1</sub>, _X_<sub>2</sub>, ...)
- ∩ _S_: intersection of _S_ (all elements that belong to at every set in _S_)
- _X_ − _Y_: set difference (all elements in _X_ but not in _Y_)
- _X̄_: complement of _X_ (all elements not in _X_)
- (_x_, _y_): ordered pair
- (_x_<sub>1</sub>, ... , _x_<sub>_n_</sub>): _n_-tuple
- _X_ × _Y_: Cartesian product of _X_ and _Y_ [pairs (_x_, _y_) with _x_ in _X_ and _y_ in _Y_]

#### Relations
- _xRy_: (_x_, _y_) is in _R_ (_x_ is related to _y_ by the relation _R_)
- [_x_]: equivalence class containing _x_
- _R_<sup>−1</sup>: inverse relation (all (y, x) with (x, y) in _R_)
- _R_<sub>2</sub> ∘ _R_<sub>1</sub>: composition of relations
- _x_ ≼ _y_: _xRy_ 

#### Functions
- _f_(_x_): value assigned to _x_
- _f_: _X_ → _Y_: function from _X_ to _Y_
- _f_ ∘ _g_: composition of _f_ and _g_
- _f_<sup>−1</sup>: inverse function (all (_y_, _x_) with (_x_, _y_) in _f_)
- _f_(_n_) = _Ο_(_g_(_n_)): |_f_(_n_)| ≤ _C_|_g_(_n_)| for _n_ sufficiently large
- _f_(_n_) = _Ω_(_g_(_n_)): _c_|_g_(_n_)| ≤ |_f_(_n_)| for _n_ sufficiently large
- _f_(_n_) = _Θ_(_g_(_n_)): _c_|_g_(_n_)| ≤ |_f_(_n_)| ≤ _C_|_g_(_n_)| for _n_ sufficiently large

#### Counting
- _C_(_n_, _r_): number of _r_-combinations of an _n_-element set (_n_!/[(_n_ − _r_)!_r_!])
- _P_(_n_, _r_): number of _r_-permutations of an _n_-element set (_n_(_n_ − 1) ... (_n_ − _r_ + 1))

#### Graphs
- _G_ = (_V_, _E_): graph _G_ with vertex set _V_ and edge set _E_
- (_v_, _w_): edge
- δ(_v_): degree of vertex _v_
- (_v_<sub>1</sub>, ... , _v_<sub>_n_</sub>): path from _v_<sub>1</sub> to _v_<sub>_n_</sub>
- (_v_<sub>1</sub>, ... , _v_<sub>_n_</sub>):  _v_<sub>1</sub> = _v_<sub>_n_</sub>: cycle
- _K_<sub>_n_</sub>: complete graph on _n_ vertices
- _K_<sub>_m_, _n_</sub>: complete bipartite graph on _m_ and _n_ vertices
- _w_(_i_, _j_): weight of edge (_i_, _j_)
- _F_<sub>_ij_</sub>: flow in edge (_i_, _j_)
- _C_<sub>_ij_</sub>: capacity of edge (_i_, _j_)
- (_P_, _P̄_): cut in a network

#### Probability
- _P_(_x_): probability of outcome _x_
- _P_(_E_): probability of event _E_
- _P_(_E_|_F_): conditional probability of _E_ given _F_[_P_(_E_ ∩ _F_)/_P_(_F_)]

#### Boolean Algebras and Circuits
- _x_ ∨ _y_: _x_ or _y_ (1 if _x_ or _y_ is 1, 0 otherwise)
- _x_ ∧ _y_: _x_ and _y_ (1 if _x_ and _y_ are 1, 0 otherwise)
- _x_ ⊕ _y_: exclusive-OR of _x_ and _y_ (0 if _x_ = _y_, 1 otherwise)
- _x̄_: not _x_ (0 if _x_ is 1, 1 if _x_ is 0)
- _x_ ↓ _y_: _x_ NOR _y_ (0 if _x_ or _y_ are 1, 1 otherwise)
- _x_ ↑ _y_: _x_ NAND _y_ (0 if _x_ and _y_ are 1, 1 otherwise)
- Circuits:  
![Diagrams of Circuits, All Hand Drawn by Me; In Order From Left to Right: OR Gate, AND Gate, NOT Gate, NOR Gate, and a NAND Gate](https://user-images.githubusercontent.com/47701395/122357524-b21f0f00-cf08-11eb-8aaa-0d431d7f6b3b.png)

#### Strings, Grammars, and Languages
- λ: null string
- |_s_|: length of the string _s_
- _st_: concatenation of strings _s_ and _t_ (_s_ followed by _t_)
- _a_<sup>_n_</sup>: _aa_ ... _a_ (_n a_'s)
- _X_<sup>*</sup>: set of all strings over _X_
- _X_<sup>+</sup>: set of all nonnul strings over _X_
- _α_ → _β_: production in a grammar
- _α_ ⇒ _β_: _β_ is derivable from _α_
- _α_<sub>_1_</sub> ⇒ _α_<sub>_2_</sub> ⇒ ... ⇒ _α_<sub>_n_</sub>: derivation of _α_<sub>_n_</sub> from _α_<sub>_1_</sub>
- _L_(_G_): language generated by the grammar _G_
- _S_ ::= _T_: Backus normal form (BNF)
- _S_ ::= _T_<sub>1</sub> | _T_<sub>2</sub>: _S_ ::= _T_<sub>1</sub>, _S_ ::= _T_<sub>2</sub>
- Ac(_A_): set off strings accepted by _A_

#### Matrices
- (_a_<sub>_ij_</sub>): matrix with entries _a_<sub>_ij_</sub>
- _A_ = _B_: matrices _A_ and _B_ are equal (_A_ and _B_ are the same size and their corresponding entries are equal)
- _A_ + _B_: matrix sum
- _cA_: scalar product
- − _A_: (−1)_A_
- _A_ − _B_: _A_ + (− _B_)
- _AB_: matrix product
- _A_<sup>_n_</sup>: matrix product _AA_ ... _A_ (_n_ _A_'s)

#### Miscellaneous
- lg _x_: logarithm to the base 2 of _x_
- ln _x_: natural logarithm of _x_ (logarithm to the base _e_ of _x_)
- _m_ mod _n_: remainder when _m_ is divided by _n_
- ⌊_x_⌋: floor of _x_ (greatest integer less than or equal to _x_)
- ⌈_x_⌉: ceiling of _x_ (smallest integer greater than or equal to _x_)
- _b_ | _a_: _b_ divides _a_
- _b_ ∤ _a_: _b_ does not divide _a_
- gcd(_a_, _b_): greatest common divisor of _a_ and _b_
- _n_!: _n_ factorial (_n_(_n_ − 1) ... 2 ⋅ 1)
- _f<sub>n</sub>_: _n_ th Fibonacci number
- _C<sub>n</sub>_: _n_ th Catalan number
- _i_ = _m_ Σ _n_ _a<sub>i</sub>_: _a<sub>m</sub>_ + _a<sub>m+1</sub>_ + ... + _a<sub>n</sub>_  
- _i_ ∈ _X_ Σ _a<sub>i</sub>_: the sum of the elements in the set {_a<sub>i</sub>_ | _i_ ∈ _X_}
- _i_ = _m_ ∏ _n_ _a<sub>i</sub>_: _a<sub>m</sub>_ ⋅ _a<sub>m+1</sub>_ ⋅ ... ⋅ _a<sub>n</sub>_  
- _i_ ∈ _X_ ∏ _a<sub>i</sub>_: the product of the elements in the set {_a<sub>i</sub>_ | _i_ ∈ _X_}
