#include<iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	double h, u, d, f;
	while (cin >> h >> u >> d >> f)
	{
		if (!h)
			break;
		long long day = 1;
		double initial_height = 0;
		double distance_climbled = u;
		double hight_after_climbing = initial_height + distance_climbled;
		double hight_after_sliding;
		double low = u * f / 100;
		while (1)
		{
			if (hight_after_climbing > h)
			{
				cout << "success on day " << day << "\n";
				break;
			}
			else if (hight_after_climbing < 0)
			{
				cout << "failure on day " << day << "\n";
				break;
			}
			else
			{
				hight_after_sliding = hight_after_climbing - d;
				if (hight_after_sliding < 0)
					{
						cout << "failure on day " << day << "\n";
						break;
					}
			}
			initial_height = hight_after_sliding;
			distance_climbled = distance_climbled - low;
			hight_after_climbing = initial_height + distance_climbled;
			day++;
		}
	}
	return 0;
}

// this code is providing correct answer. but i dont know why i am getting WA after submitting it.