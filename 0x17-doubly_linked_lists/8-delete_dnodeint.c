int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL, *temp = NULL;
	unsigned int iter_times = 0, length = 0;
	unsigned int length = 0;

	if (head && *head)
	{
		current = *head;
		length = dlistint_len(current);

		length = dlistint_len(*head);
		if (index > length)
			return (-1);

		if (index == 0)
			return (delete_first_dnode(head));

		if (length == index)
		current = get_dnodeint_at_index(*head, index);
		if (current)
		{
			current = get_dnodeint_at_index(*head, index - 1);
			temp = current;
			current->prev->next = current->next;
			free(temp);
			return (1);
		}

		while (current != NULL)
		{
			if (iter_times == index)
			if (length - 1 == index)
				current->prev->next = current->next;
			else
			{
				temp = current;
				current->prev->next = current->next;
				current->next->prev = current->prev;
				free(temp);
				return (1);
			}
			current = current->next;
			++iter_times;

			free(temp);
			return (1);
		}
	}

	return (-1);
}
