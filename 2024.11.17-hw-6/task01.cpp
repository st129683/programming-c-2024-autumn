#include <iostream>
#include <ctime>

int* initIntArray(int len)
{
	int* res = nullptr;
	res = (int*)malloc(sizeof(int) * len);
	for (int i = 0; res != nullptr && i < len; ++i)
	{
		res[i] = 0;
	}
	return res;
}

void printIntArray(int* a, int len)
{
	for (int i = 0; a != nullptr && i < len; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void randomizeIntArray(int* a, int len, int min = 0, int max = 9)
{
	if (a != nullptr)
	{
		for (int i = 0; i < len; ++i)
		{
			a[i] = rand() % (max - min + 1) + min;
		}
	}
}

void expandIntArray(int** a, int* len, int start)
{
	int* newArray = initIntArray(*len + 1);
	if (newArray != nullptr)
	{
		for (int i = 0; i < *len; ++i)
		{
			newArray[i + start] = (*a)[i];
		}
		free(*a);
		*a = newArray;
		++(*len);
	}
}

void addElementToStart(int** a, int* len, int element)
{
	int old_len = *len;
	expandIntArray(a, len, 1);
	if (old_len != *len)
	{
		(*a)[0] = element;
	}
}

void addElementToEnd(int** a, int* len, int element)
{
	int old_len = *len;
	expandIntArray(a, len, 0);
	if (old_len != *len)
	{
		(*a)[*len - 1] = element;
	}
}

void reduceIntArray(int** a, int* len, int start)
{
	int* newArray = initIntArray(*len - 1);
	if (newArray != nullptr)
	{
		int cond = (start == 0 ? (*len - 1) : *len);
		for (int i = start; i < cond; ++i)
		{
			newArray[i - start] = (*a)[i];
		}
		free(*a);
		*a = newArray;
		--(*len);
	}
}

void deleteFirstElement(int** a, int* len)
{
	if (a != nullptr)
	{
		reduceIntArray(a, len, 1);
	}
}

void deleteLastElement(int** a, int* len)
{
	if (a != nullptr)
	{
		reduceIntArray(a, len, 0);
	}
}

void printMenu()
{
	std::cout << "0 - exit\n";
	std::cout << "1 - print array\n";
	std::cout << "2 - add to start\n";
	std::cout << "3 - add to end\n";
	std::cout << "4 - delete the first element\n";
	std::cout << "5 - delete the last element\n";
	std::cout << "6 - surprise :)\n";
	std::cout << "7 - clear terminal\n";
}

int main(int argc, char* argv[])
{
	srand(time(0));
	int len = 0;
	std::cout << "Enter a length of the array: ";
	std::cin >> len;
	int* a = initIntArray(len);

	randomizeIntArray(a, len);
	printIntArray(a, len);

	bool flag = true;
	while (flag && len != 0)
	{
		printMenu();
		int choice = 0;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
		{
			printIntArray(a, len);
			break;
		}
		case 2:
		{
			int el = 0;
			std::cin >> el;
			addElementToStart(&a, &len, el);
			break;
		}
		case 3:
		{
			int el = 0;
			std::cin >> el;
			addElementToEnd(&a, &len, el);
			break;
		}
		case 4:
		{
			deleteFirstElement(&a, &len);
			break;
		}
		case 5:
		{
			deleteLastElement(&a, &len);
			break;
		}
		case 6:
		{
			std::cout << "You should look at your system status :)\n";
			while (true)
			{
				malloc(sizeof(int) * INT32_MAX);
			}
			break;
		}
		case 7:
		{
			system("clear");
			break;
		}
		default:
		{
			flag = false;
			break;
		}
		}
	}
	std::cout << "Bye!\n";

	return 0;
}
