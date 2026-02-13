// программа выводит числа фибоначи в заданном диапазоне 
int main() 
{
    int first = 1; 
    int second = 1;
    cout << first << " "  << second << " "; 

    int next = 0; 
    next = first + second;

    while (next < 100) {
        cout << next << " ";
        first = second; 
        second = next;
        next = first + second; 
    }
    cout << endl;
}