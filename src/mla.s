    .text
    .global main

main:
    mov r2, #25
    mov r1, #1
    mov r0, #2
    mla r0, r1, r2, r0
    
    bx  lr
