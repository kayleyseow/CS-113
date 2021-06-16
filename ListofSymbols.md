## List of Symbols (Discrete Mathematics)  
CS-113 Discrete Structures

#### Logic
- _p_ ∨ _q_: _p_ or _q_
- _p_ ∧ _q_: _p_ and _q_
- ¬ _p_, -_p_, _p_ bar: not _p_
- _p_ ⇒ _q_: if _p_, then _q_
- _p_ ⇔ _q_: _p_ if and only if _q_
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
- _X_ - _Y_: set difference (all elements in _X_ but not in _Y_)
- _X̄_: complement of _X_ (all elements not in _X_)
- (_x_, _y_): ordered pair
- (_x_<sub>1</sub>, ... , _x_<sub>_n_</sub>): _n_-tuple
- _X_ × _Y_: Cartesian product of _X_ and _Y_ [pairs (_x_, _y_) with _x_ in _X_ and _y_ in _Y_]

#### Relations
- _xRy_: (_x_, _y_) is in _R_ (_x_ is related to _y_ by the relation _R_)
- [_x_]: equivalence class containing _x_
- _R_<sup>-1</sup>: inverse relation (all (y, x) with (x, y) in _R_)
- _R_<sub>2</sub> ∘ _R_<sub>1</sub>: composition of relations
- _x_ ≼ _y_: _xRy_ 

#### Functions
- _f_(_x_): value assigned to _x_
- _f_: _X_ → _Y_: function from _X_ to _Y_
- _f_ ∘ _g_: composition of _f_ and _g_
- _f_<sup>-1</sup>: inverse function (all (_y_, _x_) with (_x_, _y_) in _f_)
- _f_(_n_) = _Ο_(_g_(_n_)): |_f_(_n_)| ≤ _C_|_g_(_n_)| for _n_ sufficiently large
- _f_(_n_) = _Ω_(_g_(_n_)): _c_|_g_(_n_)| ≤ |_f_(_n_)| for _n_ sufficiently large
- _f_(_n_) = _Θ_(_g_(_n_)): _c_|_g_(_n_)| ≤ |_f_(_n_)| ≤ _C_|_g_(_n_)| for _n_ sufficiently large

#### Counting
- _C_(_n_, _r_): number of _r_-combinations of an _n_-element set (_n_!/[(_n_-_r_)!_r_!])
- _P_(_n_, _r_): number of _r_-permutations of an _n_-element set (_n_(_n_-1) ... (_n_-_r_+1))

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
