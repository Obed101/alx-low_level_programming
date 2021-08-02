> #### PROJECT: MORE SINGLY LINKED LISTS
>
> > These are the functions created here:
> >> - One that prints all elements of a list
> >> - One that returns the number of elements(Nodes) in a linked list
> >> - Others also do many other exploration of the list
> > Watch out fo them here
>
>   Make sure you check all files for **tips**.
> ### Here Is A Structure I Used:
>
>
>/**
> * struct listint_s - singly linked list
> * @n: integer
> * @next: points to the next node
> *
>
>
> * Description: singly linked list node structure
> * for Holberton project
> */
> typedef struct listint_s
> 	  {
>		int n;
>    		struct listint_s *next;
>    	} listint_t;
>
