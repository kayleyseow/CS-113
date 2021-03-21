datatype boolean = True|False;
fun andfun(a:boolean, b:boolean): boolean = if(a = False) then False else b;
fun orfun(a:boolean, b:boolean): boolean = if(a = True) then True else b;
