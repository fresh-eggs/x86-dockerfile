gcc -fno-stack-protector /reversing/exercises/stack_example.c -o /reversing/exercises/stack_example -m32
gcc -fno-stack-protector /reversing/exercises/exercise_1.c -o /reversing/exercises/exercise_1 -m32
gcc -fno-stack-protector /reversing/exercises/exercise_2.c -o /reversing/exercises/exercise_2 -m32
gcc -fno-stack-protector /reversing/exercises/exercise_3.c -o /reversing/exercises/exercise_3 -m32
gcc -fno-stack-protector /reversing/exercises/exercise_4.c -o /reversing/exercises/exercise_4 -m32
rm -f /reversing/exercises/*.c
