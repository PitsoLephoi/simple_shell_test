#include "shell.h"

/**
 * allocate_memory - Allocate memory of the specified size.
 * @size: The size of memory to allocate.
 *
 * Return: Pointer to the allocated memory on success, NULL on failure.
 *
 * Description: This function allocates memory of the specified size using
 *              the malloc function. It checks if the allocation was successful
 *              and returns the pointer to the allocated memory. If the allocation
 *              fails, it prints an error message and returns NULL.
 */
void *allocate_memory(size_t size)
{
	void *ptr = malloc(size);

	if (ptr == NULL)
	{
		perror("malloc");
		return NULL;
	}

	return ptr;
}

/**
 * deallocate_memory - Deallocate the previously allocated memory.
 * @ptr: Pointer to the memory to deallocate.
 *
 * Description: This function deallocates the memory previously allocated
 *              using the allocate_memory function. It frees the memory
 *              pointed to by the given pointer using the free function.
 */
void deallocate_memory(void *ptr)
{
	free(ptr);
}
