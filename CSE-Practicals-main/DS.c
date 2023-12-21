// pract 1
#include <stdio.h>

int main() {
        int n, i, location = 0, largest;
        printf("enter the size of array: ");
        scanf("%d", &n);
        int arr[n];
        printf("enter the elements of array: ");
        for (i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
        }
        largest = arr[0];
        for (i = 1; i < n; i++) {
                if (largest < arr[i]) {
                        largest = arr[i];
                        location = i + 1;
                }
        }
        printf("%d is the largest element and its location is %d\n", largest, location);
        return 0;
}

// pract 2
#include <stdio.h>
#include <string.h>

int main() {
        char text[100];
        char pattern[100];
        int t, p, j, i;

        printf("Enter your text:\n");
        scanf("%s", text);

        printf("Enter your pattern:\n");
        scanf("%s", pattern);

        t = strlen(text);
        p = strlen(pattern);

        for (i = 0; i < t - p + 1; i++) {
                for (j = 0; j < p; j++) {
                        if (text[i + j] != pattern[j])
                                break;
                }
                if (j == p)
                        printf("Pattern is present at location %d\n", i + 1);
        }

        return 0;
}

// pract 3
#include <stdio.h>

int main() {
        int N, i;
        printf("Enter the size of Array: ");
        scanf("%d", &N);
        int A[N];
        printf("Enter the elements of Array: ");
        for (i = 0; i < N; i++) {
                scanf("%d", &A[i]);
        }
        int Beg = 0;
        int End = N - 1;
        int item, MID;
        MID = (Beg + End) / 2;
        printf("Enter the element to search: ");
        scanf("%d", &item);
        while (Beg <= End) {
                if (item == A[MID]) {
                        printf("Element found at %d location\n", MID + 1);
                        break;
                } else if (item < A[MID]) {
                        End = MID - 1;
                } else {
                        Beg = MID + 1;
                }
                MID = (Beg + End) / 2;
        }
        if (Beg > End) {
                printf("Element not found\n");
        }

        return 0;
}

// pract 4
#include <stdio.h>

int main() {
        int N;
        printf("enter the size of array: ");
        scanf("%d", &N);
        int array[N];
        printf("enter %d integers: ", N);
        for (int i = 0; i < N; i++) {
                scanf("%d", &array[i]);
        }
        for (int i = 0; i < N - 1; i++) {
                for (int j = 0; j < N - i - 1; j++) {
                        if (array[j] > array[j + 1]) {
                                int temp = array[j];
                                array[j] = array[j + 1];
                                array[j + 1] = temp;
                        }
                }
        }
        for (int i = 0; i < N; i++) {
                printf("%d ", array[i]);
        }
        printf("\n");

        return 0;
}

// pract 5
#include <stdio.h>
#include <stdlib.h>

int main() {
        int info[10];
        int link[10];
        info[1] = 10;
        link[1] = 2;
        info[2] = 20;
        link[2] = 3; // Corrected here
        link[3] = -1;
        info[3] = 30;

        int start = 1;
        int ptr = start;

        printf("\t traversing\n");
        while (ptr != -1) {
                printf("%d ", info[ptr]);
                ptr = link[ptr];
        }

        printf("\n enter number to be searched: ");
        int item;
        scanf("%d", &item);

        ptr = start;
        while (ptr != -1 && item != info[ptr]) {
                ptr = link[ptr];
        }

        if (ptr != -1) {
                printf("Element found at %d location\n", (ptr));
        } else {
                printf("Element not found\n");
        }

        return 0;
}

// pract 6
#include <stdio.h>

int main() {
        int n, i, ch, item;
        int top = 0;

        printf("Enter size of stack: ");
        scanf("%d", &n);

        int stack[n];

        printf("1. Push It, 2. Pop It, 3. Display It, 4. Exit\n");

        do {
                printf("Enter your choice: ");
                scanf("%d", &ch);

                switch (ch) {
                        case 1:
                                if (top == n) {
                                        printf("Overflow\n");
                                } else {
                                        printf("Enter a number to insert: ");
                                        scanf("%d", &item);
                                        stack[top] = item;
                                        top = top + 1;
                                }
                                break;

                        case 2:
                                if (top == 0) {
                                        printf("Underflow\n");
                                } else {
                                        top = top - 1;
                                        printf("Popped element: %d\n", stack[top]);
                                }
                                break;

                        case 3:
                                if (top == 0) {
                                        printf("Stack is empty\n");
                                } else {
                                        printf("Stack elements: ");
                                        for (i = 0; i < top; i++) {
                                                printf("%d ", stack[i]);
                                        }
                                        printf("\n");
                                }
                                break;

                        case 4:
                                printf("Exiting program\n");
                                break;

                        default:
                                printf("Invalid choice\n");
                }
        } while (ch != 4);

        return 0;
}

// pract 7
#include <stdio.h>

#define MAX_SIZE 100

int main() {
        int n, i, ch, item;
        int rear = 0;
        int front = 0;

        printf("Enter the size of Queue: ");
        scanf("%d", &n);

        int queue[n];

        printf("1. Insertion \t 2. Deletion \t 3. Display \t 4. Exit\n");

        do {
                printf("Enter your choice: ");
                scanf("%d", &ch);

                switch (ch) {
                        case 1:
                                if ((rear == n - 1 && front == 0) || (rear == front - 1)) {
                                        printf("Overflow\n");
                                } else {
                                        printf("Enter a number to insert: ");
                                        scanf("%d", &item);
                                        if (rear == n - 1 && front != 0) {
                                                rear = 0;
                                        } else {
                                                rear++;
                                        }
                                        queue[rear] = item;
                                }
                                break;

                        case 2:
                                if (front == rear) {
                                        printf("Underflow\n");
                                } else {
                                        printf("Deleted element: %d\n", queue[front]);
                                        if (front == n - 1) {
                                                front = 0;
                                        } else {
                                                front++;
                                        }
                                }
                                break;

                        case 3:
                                if (front == rear) {
                                        printf("Queue is empty\n");
                                } else {
                                        printf("Queue elements: ");
                                        for (i = front; i <= rear; i++) {
                                                printf("%d ", queue[i]);
                                        }
                                        printf("\n");
                                }
                                break;

                        case 4:
                                printf("Exiting...\n");
                                break;

                        default:
                                printf("Invalid choice\n");
                }

        } while (ch != 4);

        return 0;
}

// pract 8
#include <stdio.h>
#include <string.h>

int main() {
        char info[10] = {'A', 'B', 'C', 'D', 'E', 'F'};
        int left[10] = {1, 3, 5, -1, -1, -1};
        int right[10] = {2, 4, -1, -1, -1, -1};
        int stack[10];
        int top = -1;
        int root = 0;
        int ptr = 0;

        stack[++top] = -1;

        printf("preorder traversal: ");

        while (ptr != -1) {
                printf("%c ", info[ptr]);

                if (right[ptr] != -1) {
                        stack[++top] = right[ptr];
                }

                if (left[ptr] != -1) {
                        ptr = left[ptr];
                } else {
                        ptr = stack[top--];
                }
        }

        return 0;
}

// pract 9
#include <stdio.h>

int fact(int n) {
        if (n <= 1) {
                return 1;
        } else {
                return (n * fact(n - 1));
        }
}

int main() {
        int n = 1;
        printf("factorial of %d is %d\n", n, fact(n));

        return 0;
}

// pract 10
#include <stdio.h>

int main() {
        int a[10] = {11, 1, 22, 10};
        int n = 4, i, j;

        for (i = 1; i < n; i++) {
                int temp = a[i];
                j = i - 1;

                while (j >= 0 && a[j] > temp) {
                        a[j + 1] = a[j];
                        j--;
                }

                a[j + 1] = temp;
        }

        printf("Insertion sort\n");
        for (i = 0; i < n; i++) {
                printf("%d\n", a[i]);
        }

        return 0;
}

// pract 11
#include <stdio.h>

int main() {
        int a[] = {2, 0, 30, 60, 11};
        int n = 5, i, min, j;

        printf("\nOriginal array:\n");
        for (i = 0; i < n; i++) {
                printf("%d\n", a[i]);
        }

        for (i = 0; i < n - 1; i++) {
                min = i;
                for (j = i + 1; j < n; j++) {
                        if (a[j] < a[min]) {
                                min = j;
                        }
                }

                if (min != i) {
                        int temp = a[i];
                        a[i] = a[min];
                        a[min] = temp;
                }
        }

        printf("\nSorted array using selection sort:\n");
        for (i = 0; i < n; i++) {
                printf("%d\n", a[i]);
        }

        return 0;
}
