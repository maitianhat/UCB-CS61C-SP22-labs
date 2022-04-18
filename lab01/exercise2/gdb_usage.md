# some useful debug command

- start
    Start the debugged program stopping at the beginning of the main procedure.

- next(n) [count]
    Step program, proceeding through subroutine calls.

- step(s) [count]
    Step program until it reaches a different source line.

- finish
    Execute until selected stack frame returns.

- print(p)
    Print value of expression EXP.

- quit(q)
    Exit gdb.

- break(b)
    Set breakpoint at sepcified location.
    break [LOCATION] [if CONDITION]
    - LOCATION may be a linespec, address, or explicit location as described below.
        - linespecs are colon-separated lists of location parameters, such as source filename,
            function name, label name, and line number.
    - CONDITION is a boolean expression.

- run(r)
    Start debugged program.

- continue(c)
    Continue proram being debugged, after signal or breakpoint.
