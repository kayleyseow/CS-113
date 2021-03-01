datatype bool = True|False;
fun andfun(a:bool, b:bool) = if a = True andalso b = True then True else False;
fun orfun(a:bool, b:bool) = if a = False andalso b = False then True else False;
