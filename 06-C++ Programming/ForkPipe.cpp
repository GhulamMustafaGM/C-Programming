// Fork pipe

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

#define MSG_SIZE 20
#define R 0
#define W 1

int main()
{

    int pipefd[2];

    if (pipe(pipefd) < 0)
    {
        perror("Pipe error!\n");
        exit(1);
    }
    // No errors
    pid_t pid = fork();
    if (pid < 0)
    {
        perror("Fork error!\n");
        exit(1);
    }
    else if (pid == 0)
    { // Child: send a message to parent
        char *message1 = "Hello from child! 1";
        char *message2 = "Hello from child! 2";
        close(pipefd[R]); // Close unused read end of the pipe
        write(pipefd[W], message1, MSG_SIZE);
        write(pipefd[W], message2, MSG_SIZE);
        close(pipefd[W]); // Close write end of the pipe after finished writing
    }
    else
    { // Parent: receive a message from child
        char in_buffer[MSG_SIZE];
        close(pipefd[W]); // Close unused write end of the pipe
        while (read(pipefd[R], in_buffer, MSG_SIZE) > 0)
        {
            printf("Parent read data from pipe: \"%s\"\n", in_buffer);
        }
        close(pipefd[R]); // Close read end of the pipe after finished reading
        wait(NULL);       // Wait for child
    }

    return 0;
}