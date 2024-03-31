#include<iostream>
using namespace std;
class Set {
	int* data;
	int noOfElements;
	int capacity;
public:
	Set(int cap = 0, int noOfelements = 0) {
		capacity = cap;
	}
	void setCap(int cap) {
		capacity = cap;
	}
	int getCap() {
		return capacity;
	}
	Set(const Set& ref) {
		capacity = ref.capacity;
	}
	int size = 0;
	void insert(int element) {
		noOfElements = element;
	}
    void Remove(int element) {
        cout << endl << "After Removing Elements :- " << endl;
        if (element == noOfElements || element / 2 == noOfElements){
            float count = 0;
            count = element * 0.25;
            float c = noOfElements + count;
            for (int i = 0; i < c; i++){
                cout << data[i];
                cout << " ";
            }
        }
	}
    void setElement(){
        cout << "Enter no. of elements : ";
        cin >> noOfElements;
    }
    int getElement(){
        return noOfElements;
    }
    void setdata(int elements){
        cout <<"Enter Elements :- " << endl;
        for (int i = 0; i < elements; i++)
        {
            cout << " Enter " << i << " Element :- ";
            cin >> data[i];
        }
    }
    void InsertElement(int element){
        int n;
        if (element >= noOfElements){
            n = 0;
            n = noOfElements * 2;
            for (int i = noOfElements; i < n; i++){
                cout << "Enter Number " << i << " Element :- ";
                cin >> data[i];
            }
            cout << "Given Array :- " << endl;
            for (int i = 0; i < n; i++){
                cout << data[i];
                cout << " ";
            }
        }else{
            cout << "Given Array :- " << endl;
            for (int i = 0; i < noOfElements; i++){
                cout << data[i];
                cout << " ";
            }
        }
    }
};

int main()
{
    Set s1;  
    int z;
    cout << "Enter Element :- ";
    cin >> z;
    s1.setdata(z);
    s1.InsertElement(z);
    s1.Remove(z);

    return 0;
}
