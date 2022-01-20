#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	vector<int> v(1000001);
	v.at(0) = 1; // 소수가 아니니까 1로 초기화
	v.at(1) = 1;

	/* 2부터 n까지
	>> 모든 배수를 걸러내야 하기 때문에 2부터 시작해야 한다
	그러나 굳이 배열의 끝까지 계산할 필요는 없다

	i가 소수인지 아닌지 판별하지 않는 이유
	>> 2를 포함해 "처음으로 등장하는", "다른 수의 배수가 아닌" 수는 소수가 맞다 */
	for (int i = 2; i <= n; i++)
	{
		/* 배수를 골라내는 것이기 때문에 처음부터 2배로 시작하며
		증가 연산자(++)를 쓰면 안 되고 i를 더한다
		>> j는 i의 배수가 되게 만들어야 한다 */
		for (int j = 2 * i; j <= n; j += i)
		{
			if (v.at(j) == 0)
				v.at(j) = 1;
		}
	}

	// 출력은 필요한 만큼만
	// 그 값이 0으로 저장된 것만 소수
	for (int j = m; j <= n; j++)
	{
		if (v.at(j) == 0)
			cout << j << "\n";
	}

	return 0;
}
