/**
 * check_cycle - checks if a singlye linked list has a cycle in it
 * @list: head of the list
 * Return: 0 if list is NULL, 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *fast, *slow;

	if (list == NULL)
		return (0);
	fast = list->next;
	slow = list;

	while (fast != NULL && fast->next != NULL && slow != NULL)
	{
		if (fast == slow)
			return (1);
		fast = fast->next->next;
		slow = slow->next;
	}
	return (0);
}

