#include <sys/types.h>
#include "signals.h"

/**
 * current_handler_sigaction - Retrieves current handler of the signal SIGINT
 * Return: pointer to current SIGINT handler, or NULL on failure
 */
void (*current_handler_sigaction(void))(int)
{
	struct sigaction oldact;

	memset(&oldcat, 0, sizeof(oldcat));
	return (sigaction(SIGINT, NULL, &oldcat) ? NULL : oldcat.sa_handler);
}
