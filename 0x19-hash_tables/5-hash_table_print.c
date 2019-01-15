#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx, i;
	hash_node_t *node;

	idx = i = 0;
	
	printf("{");
	while (idx < ht->size)
	{
		node = ht->array[idx];
		while (node)
		{
			printf("\'%s\': \'%s\'",node->key, node->value);
			
			if (node->next)
				printf(", ");
			else
				idx++;
			node = node->next;
		}
		
		while (!(ht->array[idx + 1]))
			idx++;

		if (i && idx < ht->size)
 			printf(", ");
		else
			i = 1;
		idx++;
	}
	printf("}\n");
}