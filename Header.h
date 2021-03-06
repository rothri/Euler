struct card{
	int value;
	char suit;
};
struct geoNum {
	int first2;
	int last2;
};
bool nchooser(int n, int r);
long long int factorial(int n,int r);
void populateArray(int * arr, int n, int r);
long long int calcArray(int * arr);
bool findWinner(card * cArr);
int* detectHand(card* cArr);
bool isNumArrPalindrome(int* numArr,int lastDigit);
int intArrAdd(int* arr1,int* arr2);
void reverseNumArr(int* arr1,int*arr2,int lastDigit);
int intArrMult(int* arr1, int num);
long long int digitSum(int* arrNum);
int greatestDigit(long long int i);
bool IsPrime(long* num, long*primeArray);
long * setPrimeArray(long length);
long concactNumber(long num1, long num2);
bool isWorkingSet(long num1, long num2,long*primeArray);
bool geoNumCompare(geoNum a, geoNum b);
void findConnections(int  *numList);
bool isPermutation(long long int num1, long long int num2);