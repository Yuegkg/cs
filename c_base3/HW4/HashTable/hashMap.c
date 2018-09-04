#include <stdlib.h>
#include "hashMap.h"
#include "structs.h"
#include <string.h>
#include <assert.h>


int stringHash1(char * str)
{
	int i;
	int r = 0;
	for (i = 0; str[i] != '\0'; i++)
		r += str[i];
	return r;
}

int stringHash2(char * str)
{
	int i;
	int r = 0;
	for (i = 0; str[i] != '\0'; i++)
		r += (i+1) * str[i]; /*the difference between 1 and 2 is on this line*/
	return r;
}

void initMap (struct hashMap * ht, int tableSize)
{

  /* FIX ME */

	int i;

	if(ht == NULL)
		{
        	return;
		}
	ht->table = (hashLink**)malloc(sizeof(hashLink*) * tableSize);
	ht->tableSize = tableSize;
	ht->count = 0;
	for(i = 0; i < tableSize; i++){
		ht->table[i] = NULL;
		}
}

void freeMap (struct hashMap * ht)
{  
	int i;
	struct hashLink *temp;
	struct hashLink *temp2;
	for(i = 0; i < ht->tableSize; i++){
		temp = ht->table[i];
		while(temp != NULL){
			temp2 = temp->next;
			free(temp);
			temp = temp2;
		}
	}
	free(ht->table);
	ht->count=0;
	ht->table=0;
	ht->tableSize=0;
}

/* Add an element to the Hash Table */
void insertMap (struct hashMap * ht, KeyType k, ValueType v)
{
    /* FIX ME */
	int idx;
	struct hashLink* new = malloc(sizeof(struct hashLink));
	assert(new);
	new->next = 0;
	new->key = k;
	new->value = v;
				
	if(containsKey(ht, k)){
		removeKey(ht, k);
		}
	idx = stringHash1(k) % ht->tableSize;
											
	if(idx < 0){
		idx += ht->tableSize;
		}
	if(!ht->table[idx]){
		ht->table[idx] = new;
	}
	else {
		struct hashLink* cur = ht->table[idx];
	while(cur->next){
		cur = cur->next;
		}
	cur->next = new;
	}
	ht->count++;
}



/* Returns a pointer to the value of element with key k in the Hash Table 
   If the element is not in the Hash Table, returns NULL */ 
ValueType* atMap (struct hashMap * ht, KeyType k)
{ 

    /* FIX ME */
	int idx = stringHash1(k) % ht->tableSize;
	if(idx < 0)
	{
		idx += ht->tableSize;
	}
	assert(containsKey(ht, k));

	struct hashLink* tem = ht->table[idx];
	
	while(strcmp(tem->key, k) != 0)
	{
		tem = tem->next;
	}

	return &tem->value;	

}

int containsKey (struct hashMap * ht, KeyType k)
{ 
	if (atMap(ht,k)==0){
		return 0;
	}else{
		return 1;
	}
}

void removeKey (struct hashMap * ht, KeyType k)
{  
	int bucket = stringHash2(k)%ht->tableSize;
	struct hashLink *cur; 
	struct hashLink *prev; 
	if(ht->table[bucket] == 0){
		return;
	}else{
		cur=ht->table[bucket];
		prev=ht->table[bucket];
		while(cur!=0){
			if(strcmp(cur->key,k)==0){
				if(cur==ht->table[bucket]){
					ht->table[bucket]=cur->next;
					
				}else{
				prev->next=cur->next;
				}
				free(cur);
				ht->count--;
				return;
			}else{
				prev=cur;
				cur=cur->next;
			} 
		}
	}
}

int sizeMap (struct hashMap *ht)
{  
	return ht->count;
}

int capacityMap(struct hashMap *ht)
{  
	return ht->tableSize;
}

int emptyBuckets(struct hashMap *ht)
{  
	int runner = 0;
	int i;
	for(i=0; i<ht->tableSize; i++){
		if(ht->table[i]==0){
			runner++;
		}
	}
	return runner;
}

float tableLoad(struct hashMap *ht)
{  
   return (float)sizeMap(ht)/(float)capacityMap(ht);
}
