    .text
    .global main
main:
    mov r1, #1
    mov r0, #2
    add r0, r1, r0
    bx lr
