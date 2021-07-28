// // 2D ARRAY IMPLEMENTAION

// #include <iostream>
// using namespace std;

// int main()
// { int lol=0;
//   int lrow0=0;
//   int lrow1=0;
//   int lrow2=0;
//   int lrow3=0;
//   int lrow4=0;
//   int lrow5=0;
//   int x, y;
//   cout << "enter x :: ";
//   cin >> x;
//   cout << "enter y :: ";
//   cin >> y;
//   int z = x * y, total,sum=0;
//   int lctr = 0, zctr = 0, xctr = 0;
//   char a[x][y];
//   for (int i = 0; i < x; i++)
//   {
//     for (int j = 0; j < y; j++)
//     {
//       cout << "ENTER VALUE FOR :: arr ::";
//       cout << i;
//       cout << "::";
//       cout << j << endl;
//       cin >> a[i][j];
//     }
//   }

//   for (int i = 0; i < x; i++)
//   {
//     for (int j = 0; j < y; j++)
//     {
//       if (a[i][j] == 'l')
//       {
//         lctr = lctr + 1;
//       }
//       if (a[i][j] == 'z')
//       {
//         zctr = zctr + 1;
//       }
//       if (a[i][j] == 'x')
//       {
//         xctr = xctr + 1;
//       }
//     }
//   }

//   // //lcountter://////////////////////////
//   for (int j = 0; j < y; j++)
//     {
//       if(a[0][j]=='l')
//       {
//         lrow0=1;
//       }
//     }
//   for (int j = 0; j < y; j++)
//     {
//       if(a[1][j]=='l')
//       {
//         lrow1=1;
//       }
//     }
//   for (int j = 0; j < y; j++)
//     {
//       if(a[2][j]=='l')
//       {
//         lrow2=1;
//       }
//     }
//   for (int j = 0; j < y; j++)
//     {
//       if(a[3][j]=='l')
//       {
//         lrow3=1;
//       }
//     }
//   for (int j = 0; j < y; j++)
//     {
//       if(a[4][j]=='l')
//       {
//         lrow4=1;
//       }
//     }
//   for (int j = 0; j < y; j++)
//     {
//       if(a[5][j]=='l')
//       {
//         lrow5=1;
//       }
//     }

//   ///////////////////////////////////

//   //////////////////////////////////

//   total = zctr + xctr + lctr;
//   if (total == 0)
//   {
//     cout << "Invalid" << endl;
//   }
//   else if (total == z && lctr != z && zctr != z && xctr != z)
//   {

//     lol=(lrow0+lrow1+lrow2+lrow3+lrow4+lrow5);
//     cout <<lol;

//   }
//   else
//   {
//     cout << "Inavalid";
//   }

//   return 0;
// }

// {
//     int i,j,x,n,s,sum=0;
//     cin>>x;
//     cin>>n;

//     arrcp[n]==arr[n];
//     for(j=0;j<n;j++)
//     {
//         sum+=arr[j];
//     }
//     if(sum==7)
//     {   for(s=0;s<n;s++)
//         {
//         cout<<arr[s+1];
//         }
//     }
//     else
//     {
//         cout<<"No";
//     }

// return 0;
// }

// #include <iostream>
// using namespace std;
// bool isSubsetSum(int set[], int n, int sum)
// {

//   if (sum == 0)
//     return true;
//   if (n == 0)
//     return false;
//   if (set[n - 1] > sum)
//     return isSubsetSum(set, n - 1, sum);
//   cout << n;
//   cout << "founddd   ::   ";
//   cout << endl;
//   return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
// }

// int main()

// {
//   int n, i, j;
//   cout << "track ::";
//   int x;
//   cin >> x;
//   cout << "players ::";
//   cin >> n;
//   int arr[n];
//   for (i = 0; i < n; i++)
//   {
//     cout << "capacity for player : ";
//     cout << i + 1 << ":::: ";
//     cin >> arr[i];
//   }
//   cout << "ARRAY DISPLAY ::::::::::::";
//   for (j = 0; j < n; j++)
//   {

//     cout << arr[j] << "   ";
//   }
//   cout << endl;
//   if (isSubsetSum(arr, n, x) == true)
//   {
//     cout << "Found a subset with given sum";
//   }
//   else
//   {
//     cout << "No";
//   }
//   return 0;
// }

// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
//   unsigned long long int n=0;
//   cout<<"enter n"<<endl;
//   cin>>n;
//   double x,y;//x blue,y red
//   float x1,y1;
//   x1=y1=float(n)/2;
//   int z= x1*y1; //half*half

//   if (int(n)%2==0)
//   {
//     cout<<"EVEN ::"<<endl;
//     int a=z-9;
//     // y^2-10y-16=0
//     // y^2 + (-n)y + (-a) =0
//     int apz=1,bpz=n;
//     double d=(bpz)*(bpz) - 4*apz*a;
//     x=-(-bpz + sqrt(d))/2;
//     y=-(-bpz - sqrt(d))/2;
//     cout<<"roots x ::blue ::"<<x<<endl;
//     cout<<"roots y ::red  :: "<<y<<endl;

//   }
//   else
//   {
//     cout<<"ODDDD ::"<<endl;
//     int a=z-12;
//     // y^2-23y+120=0
//     // y^2 + (-n)y + a =0
//     int ap=1,bp=n;
//     float d=(bp)*(bp) - 4*ap*a;
//     x=-(-bp + sqrt(d))/2;
//     y=-(-bp - sqrt(d))/2;
//     cout<<"roots x ::blue ::"<<x<<endl;
//     cout<<"roots y ::red  :: "<<y<<endl;

//   }
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int temp[100], num, n, i = 0, j = 0;
//   cin >> num;
//   while (num != -1)
//   {
//     temp[i] = num;
//     i++;
//     cin >> num;
//   }

//   cin >> n;

//   for (i = 11; i >= 0; i--)
//   {
//     for (j = 0; j < n; j++)

//     {
//       cout << temp[i * n + j] << " ";
//     }
//   }

//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100],n,num,i=0,j,k=0;
//     int b[12][20];
//     while(1)
//     {
//         cin>>num;
//         if(num==-1)
//           break;
//         else
//         {
//           a[i]=num;
//           i++;
//         }
//     }
//     cin>>n;
//     for(i=0;i<12;i++)
//     {
//        for(j=0;j<n;j++)
//         {
//             b[i][j] = a[k];
//             k++;
//         }
//     }

//     for(i=11;i>=0;i--)
//     {
//        for(j=0;j<n;j++)
//         {
//             cout<<b[i][j]<<" ";
//         }
//     }

//     return 0;
// }]

// #include<iostream>
// #include<string.h>

// using namespace std;
// int main()
// {
//   char w[7];cin>>w;
//   char w1[7];cin>>w1;
//   char t[5];cin>>t;
//   char t1[5];cin>>t1;
//   cout<<"aall strings :: "<<endl;
//   cout<<" "<<w<<" "<<w1<<" "<<t<<" "<<t1;
// int wl=strlen(w);cout<<" "<<wl;
// int w1l=strlen(w1);cout<<" "<<w1l;
// int tl=strlen(t);cout<<" "<<tl;
// int t1l=strlen(t1);cout<<" "<<t1l;
// while (wl)
// {
// 	for (int i = 0; i < wl; i++)
// 	{
// 		for (int j = 0; i < tl; j++)
// 		{
// 			cout<<w[i]<<" "<<t[j]<<" "<<w[i+1]<<" "<<t[j+1];
// 			w[i]=t[j];
// 			w[i+1]=t[j+1];
// 		}
// 	}
// }
// cout<<w<<endl;
// cout<<t<<endl;

//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	// code
// 	int t;
// 	cin >> t;
// 	cin.ignore();

// 	while (t--) {
// 		string s;
// 		getline(cin, s);

// 		string x, y;
// 		getline(cin, x);
// 		getline(cin, y);

// 		reverse(s.begin(), s.end());
// 		reverse(x.begin(), x.end());
// 		reverse(y.begin(), y.end());

// 		int ls = s.length(), lx = x.length(), ly = y.length();
// 		int d = ly - lx;
// 		int ct = 0;
// 		int i = 0, j = 0;

// 		while (i < ls) {
// 			string temp = "";
// 			for (int k = 0; k < lx; k++) {
// 				temp += s[i + k];
// 			}

// 			if (temp == x) {
// 				ct++;
// 				i = i + lx;
// 			}
// 			else {
// 				i = i + 1;
// 			}
// 		}

// 		for (int i = 0; i < ct * d; i++)
// 			s += ' ';

// 		i = ls - 1;
// 		j = ls + ct * d - 1;

// 		while (i >= 0 && j >= 0) {
// 			string temp = "";
// 			for (int k = 0; k < lx; k++) {
// 				if (i < (lx - 1 - k))
// 					break;

// 				temp += s[i - (lx - 1 - k)];
// 			}

// 			if (temp == x) {
// 				int k = ly - 1;
// 				while (k >= 0)
// 					s[j--] = y[k--];

// 				i = i - lx;
// 			}
// 			else {
// 				s[j--] = s[i--];
// 			}
// 		}
// 		reverse(s.begin(), s.end());
// 		cout << s << endl;
// 	}
// 	return 0;
// }

//09:::::05:::2021

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int hx, hy, mx, my;
// 	string fhx,fmx;
// 	cin >> hx;
// 	cin >> hy;
// 	cin >> mx;
// 	cin >> my;
// 	if (hx == 1 && hy == 0)
// 	{
// 		fhx ="12";
// 	}
// 	if (hx == 1 && hy == 5)
// 	{
// 		fhx ="01";
// 	}
// 	if (hx == 1 && hy == 10)
// 	{
// 		fhx ="02";
// 	}
// 	if (hx == 1 && hy == 15)
// 	{
// 		fhx ="03";
// 	}
// 	if (hx == 1 && hy == 20)
// 	{
// 		fhx ="04";
// 	}
// 	else if (hx == 2 && hy == 0)
// 	{
// 		fhx = "04";
// 	}
// 	else if (hx == 2 && hy == 5)
// 	{
// 		fhx = "05";
// 	}
// 	else if (hx == 2 && hy == 10)
// 	{
// 		fhx = "06";
// 	}
// 	else if (hx == 2 && hy == 15)
// 	{
// 		fhx = "07";
// 	}
// 	else if (hx == 2 && hy == 20)
// 	{
// 		fhx = "08";
// 	}
// 	else if(hx==3 && hy==0)
// 	{
// 		fhx = "08";
// 	}

// 	else if(hx==3 && hy==5)
// 	{
// 		fhx = "09";
// 	}
// 	else if(hx==3 && hy==10)
// 	{
// 		fhx = "10";
// 	}
// 	else if(hx==3 && hy==15)
// 	{
// 		fhx = "11";
// 	}
// 	else
// 	{
// 		fhx = "12";
// 	}

// 	if (mx == 1 && my == 0)
// 	{
// 		fmx ="00";
// 	}
// 	if (mx == 1 && my == 5)
// 	{
// 		fmx ="05";
// 	}
// 	else if (mx == 1  && my == 10)
// 	{
// 		fmx = "10";
// 	}
// 	else if (mx == 1  && my == 15)
// 	{
// 		fmx = "15";
// 	}
// 	else if (mx == 1  && my == 20)
// 	{
// 		fmx = "20";
// 	}
// 	else if (mx == 2  && my == 0)
// 	{
// 		fmx = "20";
// 	}
// 	else if (mx == 2  && my == 05)
// 	{
// 		fmx = "25";
// 	}
// 	else if (mx == 2  && my == 10)
// 	{
// 		fmx = "30";
// 	}
// 	else if (mx == 2  && my == 15)
// 	{
// 		fmx = "35";
// 	}
// 	else if (mx == 2  && my == 20)
// 	{
// 		fmx = "40";
// 	}
// 	else if (mx == 3  && my == 0)
// 	{
// 		fmx = "40";
// 	}
// 	else if (mx == 3  && my == 5)
// 	{
// 		fmx = "45";
// 	}
// 	else if (mx == 3  && my == 10)
// 	{
// 		fmx = "50";
// 	}
// 	else if (mx == 3  && my == 15)
// 	{
// 		fmx = "55";
// 	}
// 	else if (mx == 3  && my == 20)
// 	{
// 		fmx = "60";
// 	}

// 	cout<<"time::  hour :: "<<fhx<<endl;
// 	cout<<"time::  minutes  :: "<<fmx<<endl;

// 	return 0;
// }

// 12:05:2021

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n; cin >> n;
//     int sum; cin>>sum;
//     int fib[6];
//     if(n>5)
//     {
//     fib[5]=sum/2.4375;
//     fib[4]=sum/4.00;
//     fib[3]=sum/6.23;
//     fib[2]=sum/11.14;
//     fib[1]=sum/14.181;
//     fib[0]=sum/52;
//     }
//     else
//     {
//         fib[5]=sum/2.4;
//         fib[4]=sum/4;
//         fib[3]=sum/6;
//         fib[2]=sum/sum;
//         fib[1]=sum/sum;
//         fib[0]=0;
//     }
//     for (int i = 5; i>=0; i--)
//     {
//         cout<<fib[i]<<" ";
//     }
//     return 0;
// }

// // 13:05:2021

// #include <iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cin >> m;
//     int c;
//     cin >> c;

//     if (c % m == 0)
//     {
//         cout << "S" << m;
//     }
//     else if (c == 6 || c == 2 * m - 6 || c == 2 * m + 6 || c == 4 * m - 6 || c == 4 * m + 6 || c == 6 * m - 6 || c == 6 * m + 6 || c == 8 * m - 6 || c == 8 * m + 5)
//     {
//         cout << "S6";
//     }
//     else if (c == 5 || c == 2 * m - 5 || c == 2 * m + 5 || c == 4 * m - 5 || c == 4 * m + 5 || c == 6 * m - 5 || c == 6 * m + 5 || c == 8 * m - 5 || c == 8 * m + 5)
//     {
//         cout << "S5";
//     }
//     else if (c == 4 || c == 2 * m - 4 || c == 2 * m + 4 || c == 4 * m - 4 || c == 4 * m + 4 || c == 6 * m - 4 || c == 6 * m + 4 || c == 8 * m - 4 || c == 8 * m + 4)
//     {
//         cout << "S4";
//     }
//     else if (c == 3 || c == 2 * m - 3 || c == 2 * m + 3 || c == 4 * m - 3 || c == 4 * m + 3 || c == 6 * m - 3 || c == 6 * m + 3 || c == 8 * m - 3 || c == 8 * m + 3)
//     {
//         cout << "S3";
//     }
//     else if (c == 2 || c == 2 * m - 2 || c == 2 * m + 2 || c == 4 * m - 2 || c == 4 * m + 2 || c == 6 * m - 2 || c == 6 * m + 2 || c == 8 * m - 2 || c == 8 * m + 2)
//     {
//         cout << "S2";
//     }
//     else if (c == 1 || c == 2 * m - 1 || c == 2 * m + 1 || c == 4 * m - 1 || c == 4 * m + 1 || c == 6 * m - 1 || c == 6 * m + 1 || c == 8 * m - 1 || c == 8 * m + 1)
//     {
//         cout << "S1";
//     }
//     else
//     {
//         cout << "S1";
//     }

//    int S[m][m*m];
//    for (int i = 1; i < m; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            s[i][j]=i;
//        }

//    }

// int m;
// cin>>m;
// int rows, cols, i, j, k;
// rows=cols=m;

// k = 1;
// for(i=1; i<=rows; i++)
// {
//     for(j=1; j<=cols; j++, k++)
//     {
//         cout<<k<<" ";
//     }

//     cout<<endl;
//     // }
//     return 0;
// }

// //13-5-2021

// #include <iostream>
// #include <string.h>
// using namespace std;

// #define MAX_NAME_LEN 50
// int main()
// {
//     char n[MAX_NAME_LEN];
//     cin.getline(n, MAX_NAME_LEN);
//     int i, j, k, l, count = 0;
//     int x = strlen(n);
//     count = x;
//     for (i = 0; i < count - 1; ++i)
//     {
//         cout << "1";
//     }
//     cout << "0";
//     for (j = 0; j < count - 1; ++j)
//     {
//         cout << "8";
//     }
//     cout << "9";
//     return 0;
// }

// 14:05:2021

// #include <iostream>
// #include <string.h>

// using namespace std;
// int main()
// {
//     int k, ctr = 0, xctr = 0;
//     char string[80];
//     cin.getline(string, 80);
//     cin >> k;
//     for (int i = 0; i < strlen(string); i++)
//     {
//         for (int j = i + 1; j < strlen(string); j++)
//         {
//             if (string[i] == string[j])
//             {

//                 ctr++;
//                 break;
//             }
//             else
//             {
//                 xctr++;
//                 break;
//             }
//         }
//     }

//     if (ctr >= k)
//     {
//         cout << ctr - xctr + 1;
//     }
//     else if (k == 1)
//     {
//         cout << strlen(string);
//     }
//     else
//     {
//         cout << "0";
//     }
//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     int k, ctr = 0, xctr = 0;
//     char S[80];
//     cin.getline(S, 80);
//     int x = strlen(S);
//     cin >> k;
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = i + 1; j < x; j++)
//         {
//             if (S[i] == S[j])
//             {
//                 ctr++;
//                 break;
//             }

//             else
//             {
//                 xctr++;
//                 break;
//             }
//         }
//     }
//     int l = ctr - xctr + 1;
//     if (ctr >= k)
//     {
//         cout << l;
//     }
//     else if (k == 1)
//     {
//         l = x;
//         cout << l;
//     }
//     else
//     {
//         l = 0;
//         cout << l;
//     }
//     return 0;
// }

// //15::05::2021
// #include <cstdlib>
// #include <iostream>
// using namespace std;
// int main()
// {
//     char s1[20];
//     cin >> s1;
//     char s2[20];
//     cin >> s2;

//     int x1, y1, z1, x2, y2, z2;
//     x1 = int(s1[0]);
//     y1 = int(s1[1]);
//     z1 = int(s1[2]);

//     x2 = int(s2[0]);
//     y2 = int(s2[1]);
//     z2 = int(s2[2]);

//     int a1 = abs(x1 - x2);
//     int a2 = abs(y1 - y2);
//     int a3 = abs(z1 - z2);

//     int xx1 = (x2 + a1);
//     int xx2 = (y2 + a2);
//     int xx3 = (z2 + a3);
//     if (xx1 >= 90)
//     {
//         xx1 = xx1 - 26;
//     }
//     if (xx2 >= 90)
//     {
//         xx2 = xx2 - 26;
//     }
//     if (xx3 >= 90)
//     {
//         xx2 = xx3 - 26;
//     }
//     char f1 = (char)(xx1);
//     char f2 = (char)(xx2);
//     char f3 = (char)(xx3);
//     cout << f1 << f2 << f3;
//     return 0;
// }
//alternate::
// #include <cstdlib>
// #include <iostream>
// using namespace std;
// int main()
// {   char s1[20], s2[20], s3[3];
//     cin >> s1 >> s2;
//     for (int i = 0; i < 3; i++)
//     {
//       s3[i] = (int(s2[i]) + abs(int(s1[i]) - int(s2[i])));
//       if (s3[i] >= 90)
//             s3[i] = s3[i] - 26;
//     cout << (char)s3[i];
//     }
//     return 0;
// }

// // 16:05:2021

// #include <iostream>
// using namespace std;
// int main()
// {
//   int x, h, m;
//   cin >> x >> h >> m;
//   cout << "GIVEN TIME :: " << h << ":" << m << endl;
//   float c = m / 60;
//   float dt = h + c;
//   cout << "decimal time :: " << dt << endl;
//   float z = dt / x;
//   cout << "GAINED :: " << z << endl;
//   float at = dt - z;
//   if (h >= 12)
//   {
//     cout << "ACTUAL :: " << (at)-1 << endl;
//   }
//   else
//   {
//     cout << "ACTUAL :: " << (at) << endl;
//   }
//   return 0;
// }

// // alternate::
// #include <iostream>
// using namespace std;
// int main()
// {
//   int x, h, m;
//   cin >> x >> h >> m;
//   float e1 = 1440 + (x * 24);
//   float fac = 1440 / e1;
//   float ans = fac * (h * 60) + m;
//   cout << (int)ans / 60;
//   return 0;
// }

// // 17:05:2021
// #include <iostream>
// using namespace std;

// struct lap
// {
//   int length;
//   int breadth;
//   int price;
//   int ss;
// };

// int main()
// {
//   int x, n,p=1000;
//   int max=0;
//   int screen=0;

//   cin >> x >> n;
//   struct lap l[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> (l[i].length);
//     cin >> (l[i].breadth);
//     cin >> (l[i].price);
//   }

//     for(int i=0; i<n; i++)
//     {
//     l[i].ss=(l[i].length*l[i].breadth);
//         if(l[i].price<=x)
//             if(screen<l[i].ss)
//             {
//                 screen=l[i].ss;
//                 p=i;
//             }
//     }
//     if(p==1000)
//         cout<<"No laptop";
//     else
//         cout<<l[p].length<<" "<<l[p].breadth<<" "<<l[p].price;
//     }

//   return 0;
// }

// // 18::05::2021
// #include <iostream>
// using namespace std;
// int main()
// {
//   int x, y, z, n, y2;
//   cin >> x >> y >> z;
//   //monika l r
//   n = (z - 1) + 1 + (y - 1);
//   //monika new
//   y2 = n - (x - 1);
//   cout << n << endl;
//   cout << y2;
//   return 0;
// }

// // C++ program to convert a decimal
// // number to binary number
// 19:05:2021
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   unsigned long int a[n];
//   double b[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> a[i];
//     // b[i]=((log(a[i]+1) / log(2)));   //for n numbers :
//     b[i]= (int)log2(a[i])+1;            // for number "n"

//   }
// int max = b[0];
//   for (int i = 1; i < n; i++)
//   {
//     if (b[i] > max)
//       max = b[i];
//   }
//   cout << int(max);

//   return 0;
// }

// //ALTERNATE::
// // 22:05:2021
// #include <iostream>
// using namespace std;
// int main()
// {
//   int m, n, ansl = 0;
//   cin >> m >> n;
//   int l, hold;
//   if (n > m)
//   {
//     l = m;
//     hold = n;
//   }
//   else
//   {
//     l = n;
//     hold = m;
//   }
//   int temp, h;
//   temp = hold;
//   h = hold;
//   cout << l << " ";
//   cout << h << endl;
//   do
//   {
//     if ((l / 2) % 2 != 0)
//     {
//       cout << l / 2 << " ";
//       cout << h * 2 << endl;
//     }
//     l /= 2;
//     h *= 2;
//     if (l % 2 != 0)
//     {
//       ansl += h;
//     }
//   } while (l > 1);
//   cout << ansl + temp;
//   return 0;
// }

// 21::05:2021
// #include <iostream>
// using namespace std;
// int main()
// {
//   long int n, r;
//   cin >> n >> r;
//   unsigned long long sum = 0;
//   cout << r * r * r << endl;
//   for (int i = 0; i <= n; i++)
//   {
//     sum += i;
//   }
//   cout << sum * sum;
//   return 0;
// }

// // 22:05:2021
// #include <iostream>
// using namespace std;
// int main()
// {
//   int lower[20], higher[20];
//   int m, n, ansl = 0;
//   cin >> m >> n;
//   int lold, hold;
//   if (n > m)
//   {
//     lold = m;
//     hold = n;
//   }
//   else
//   {
//     lold = n;
//     hold = m;
//   }
//   int temp, h;
//   temp = hold;
//   h = hold;
//   int temp2, l;
//   temp2 = lold;
//   l = lold;
//   int ctr = 0;
//   for (int i = 0; i < 10; i++)
//   {
//     lower[i] = lold;
//     higher[i] = hold;
//     lold /= 2;
//     hold *= 2;
//     ctr++;
//     if (lower[i] == 1)
//     {
//       break;
//     }
//   }
//   for (int i = ctr - 1; i >= 0; i--)
//   {
//     if (lower[i] % 2 != 0)
//     {
//       cout << lower[i] << " ";
//       cout << higher[i] << endl;
//       ansl += higher[i];
//     }
//   }
//   cout << ansl;
//   return 0;
// }

// // 23:05:2021
// #include <cstring>
// #include <iostream>
// using namespace std;
// int main()
// {
//   char s[20];
//   string ans;
//   cin.getline(s, 20);
//   int x = strlen(s);
//   int ctr = 0;
//   int z;
//   for (int i = 0; i < x; i++)
//   {
//     // nested loop statement
//     for (int j = i + 1; j < x; j++)
//     {
//       if (s[i] == s[j])
//       {
//         ctr++;
//         if (ctr >= 1)
//         {
//           z = i;
//         }
//         break;
//       }
//     }
//   }
//   cout << s;
//   if (ctr >= 1)
//   {
//     for (int i = z - ctr; i >= 0; i--)
//     {
//       ans += s[i];
//     }
//     cout << ans;
//     // abcdeffe // abcdeffedcba
//   }
//   else
//   { // for (int i = x; i >=0; i--)
//     // {
//     // ans+=s[i];
//     // }
//     // cout<<(ans)<<" "<<endl;
//     cout << "ba";
//   }
//   return 0;
// }

// //24:05:2021
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   for (int i = 1; i < n; i += 2)
//   //everyy second elemt is larger than padosi L R
//   {
//     if (arr[i - 1] > arr[i]) //L
//     {                        //swap
//       int temp = arr[i - 1];
//       arr[i - 1] = arr[i];
//       arr[i] = temp;
//     }
//     if (i + 1 < n && arr[i + 1] > arr[i]) //R
//     {                                     //swap
//       int temp = arr[i + 1];
//       arr[i + 1] = arr[i];
//       arr[i] = temp;
//     }
//   }
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   return 0;
// }

// // 26:05:2021
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, k, max = 0, ans = 0, cc;
//   cin >> n >> k;
//   int a[n], b[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> a[i];
//     cin >> b[i];
//   }
//   for (int j = 0; j <= n - k; j++)
//   {
//     int sum = 0;
//     for (int x = j; x < j + k; x++)
//     {
//       sum = sum + b[x];
//     }
//     if (sum > max)
//     {
//       max = sum;
//       ans = a[j];
//     }
//   }
//   cout << ans;
//   return 0;
// }

// 27:05:2021
// #include<iostream>
// using namespace std;
// int main(){

// return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string nuts, size;
//     cin>>nuts>>size;
//     int l1=nuts.length();//n
//     int l2=size.length();//b
//     int nut[l1], bolts[l2], bolt[l2];
//     for(int i=0;i<l1;i++)
//         nut[i]=(int)nuts[i];
//     for(int i=0;i<l2;i++)
//         bolts[i]=(int)size[i];
//     int k=0;
//     for(int i=l2-1;i>=0;i--)
//     {
//         bolt[k]=bolts[i];
//         k+=1;
//     }
//     //done with data initialisation
//     int ans=0, max=0, pos=0;
//     int chk=l1;
//     if(l2<l1)
//         chk=l2;
//     for(int i=0;i<chk;i++)
//     {
//         int count=0;
//         for(int l=i;l<chk;l++)
//         {
//             if(nut[l]==bolt[l])
//                 count+=1;
//             else
//                 break;
//         }
//         if(count>max)
//         {
//             max=count;
//             ans=i+1;
//             pos=l2-i;
//         }
//     }
//     cout<<max<<endl<<ans<<endl<<pos<<endl;
//     return 0;
// }

// // 28:05:2021
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 0;
//     while (n != 0)
//     {
//         n /= 10;
//         ++count;
//     }
//     int mul = (count - 1) * 10;
//     int x = n * mul;
//     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//     for (int i = 0; i < 10; i++)
//     {
//         int ans = x + a[i];
//         if (ans % 9 == 0)
//         {
//             cout << i;
//             break;
//         }
//     }

//     return 0;
// }

// // 28:05:2021
// #include <iostream>
// using namespace std;
// int main()
// {
//     unsigned long long n;
//     int sum = 0, m;
//     unsigned long long count = 0;
//     cin >> n;
//     while (n > 0)
//     {
//         m = n % 10;
//         sum += m;
//         n = n / 10;
//     }
// if ((sum+1)%9==0)
// {
//     cout<<"1";
// }
// else if ((sum+2)%9==0)
// {
//     cout<<"2";
// }
// else if ((sum+3)%9==0)
// {
//     cout<<"3";
// }
// else if ((sum+4)%9==0)
// {
//     cout<<"4";
// }
// else if ((sum+5)%9==0)
// {
//     cout<<"5";
// }
// else if ((sum+6)%9==0)
// {
//     cout<<"6";
// }
// else if ((sum+7)%9==0)
// {
//     cout<<"7";
// }
// else if ((sum+8)%9==0)
// {
//     cout<<"8";
// }
// else
// {
//     cout<<"9";
// }

//     return 0;
// }

// //07::06:2021
// #include <iomanip>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int pos;
//     int val;
//     int temp[50], num, i = 0;
//     cin >> num;
//     while (num != -1)
//     {
//         temp[i] = num;
//         i++;
//         cin >> num;
//     }
//     cin >> pos;
//     cin >> val;
//     //khtm input
//     int first[50];
//     for (int j = 0; j <= pos - 1; j++)
//     {
//         first[j] = temp[j];
//         if (j == pos - 1)
//         {
//             first[j] = val;
//         }
//     }
//     for (int j = pos; j <= i; j++)
//     {
//         first[pos] = temp[pos - 1];
//         first[j + 1] = temp[j];
//     }
//     for (int j = 0; j <= i; j++)
//     {
//         cout << first[j] << "\t";
//     }
//     cout << endl;
//     double avg;
//     for (int x = 0; x <= i - 2; x++)
//     {
//         avg = (float)(first[x] + first[x + 1] + first[x + 2]) / 3;
//         cout << fixed << setprecision(2) << avg << "\t";
//     }
//     return 0;
// }

// //07:06:2021
// #include <iostream>
// // #include <cmath>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a, b;
//     float g1[n];
//     float g2[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> g1[i];
//     }
//     for (int j = 0; j < n; j++)
//     {
//         cin >> g2[j];
//     }
//     cin >> a;
//     cin >> b;
//     float lost = g2[0];
//     a = a - 1;
//     b = b - 1;
//     //done with inputs
//     float xx[n];
//     int pos1 = 0;
//     for (int j = 0; j <= n; j++)
//     {
//         xx[j] = g1[j];
//         if (a == j)
//         {
//             pos1 = j;
//             break;
//         }
//     }
//     for (int z = pos1; z <= n + 1; z++)
//     {
//         xx[z] = g1[z + 1];
//     }
//     for (int zz = 0; zz < n - 1; zz++)
//     {
//         cout << xx[zz] << " ";
//     }
//     cout << endl;
//     //all good
//     float yy[n];
//     int pos2 = 0;
//     yy[0] = lost;
//     for (int j = 1; j <= n; j++)
//     {
//         yy[j] = g2[j];
//         if (b == j)
//         {
//             pos2 = j;
//             break;
//         }
//     }
//     for (int z = pos2; z <= n + 1; z++)
//     {
//         yy[z] = g2[z + 1];
//     }
//     for (int zz = 0; zz < n - 1; zz++)
//     {
//         cout << yy[zz] << " ";
//     }
//     //all good
//     cout << endl;
//     for (int j = 1; j < n - 1; j++)
//     {
//         if (xx[j] == yy[j])
//         {
//             cout << "Equal";
//         }
//         else if ((xx[j] - yy[j]) == (xx[0] - yy[0]))
//         {
//             cout << "Good";
//         }
//         else
//         {
//             cout << "Bad";
//         }
//         break;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char coin[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> coin[i];
//     }
//     //modify scoin for use; reserve coin!
//     char scoin[20];
//     for (int i = 0; i < n; i++)
//     {
//         scoin[i] = coin[i];
//     }

//     //dice for p1 and p2
//     int th;
//     cin >> th;
//     int p1[th];
//     for (int i = 0; i < th; i++)
//     {
//         cin >> p1[i];
//     }
//     int p2[th];
//     for (int i = 0; i < th; i++)
//     {
//         cin >> p2[i];
//     }
//     ////////////////////////////////////////////////DONE WITH INPUTS?????????????????????

//     //conditions

//     for (int i = 0; i < n; i++)
//     {
//         if (p1[i] == 1)
//         {
//             //back to old;
//             for (int j = 0; j < n; j++)
//             {
//                 char temp = coin[i];
//                 scoin[i] = temp;
//             }
//         }
//         else if (p1[i] == 2)
//         {
//             // Insert red coin at position 2
//             char temp = scoin[2];
//             for (int i = 2; i <= n; i++)
//             {
//                 scoin[i + 1] = scoin[i];
//             }
//             scoin[2] = 'r';
//         }
//         else if (p1[i] == 3)
//         { // Insert four coins – Insert four red coins from position 3 // scoin
//             for (int i = 2; i < 5; i++)
//             {
//                 scoin[i] = 'r';
//             }
//         }
//         else if (p1[i] == 4)
//         { // emove one coin at position 4 - r g b g b r
//             scoin[3] == scoin[4];
//             for (int i = 4; i < n; i++)
//             {
//                 scoin[i] = scoin[i + 1];
//             }
//         }
//         else if (p1[i] == 5)
//         { // Remove two coins from position 5 - r g b r r
//             scoin[4] == scoin[6];
//             scoin[5] == scoin[7];
//             for (int i = 6; i < n; i++)
//             {
//                 scoin[i] = scoin[i + 1];
//             }
//         }
//         else
//         {
//             // Deallocate Heap memory
//             delete[] scoin;
//         }
//     }

//     for (int i = 0; i < n; i++)

//     {
//         cout << scoin[i] << " " << endl;
//     }

//     return 0;
// }

// // 09:06:2021
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char colour[2 * n][3 * n];
//     for (int i = 0; i < 2 * n; i++)
//     {
//         cin >> colour[i];
//     }
//     int ch;
//     cin >> ch;
//     string val;
//     cin >> val;
//     int f = 0;
//     int i = 0;
//     if (ch == 1)
//     {
//         //symbol dalo /get name
//         do
//         {
//             if (val == colour[i])
//             {
//                 cout << colour[i - 1];
//                 f = 1;
//             }
//             i++;
//         } while (i < 2 * n);
//     }
//     if (ch == 2)
//     {
//         //name dalo /get symbol
//         do
//         {
//             if (val == colour[i])
//             {
//                 cout << colour[i + 1];
//                 f = 1;
//             }
//             i++;
//         } while (i < 2 * n);
//     }
//     if (f == 0)
//     {
//         cout << "Not found";
//     }
//     return 0;
// }

// // 10:06:2021
// #include <iostream>
// using namespace std;
// int main()
// {
//     char colour[2][10];
//     for (int i = 0; i < 2; i++)
//     {
//         cin >> colour[i];
//     }
//     char colour2[5][10];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> colour2[i];
//     }
//     char colour3[5][10];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> colour3[i];
//     }
//     char colour4[5][10];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> colour4[i];
//     }
//     char colour5[5][10];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> colour5[i];
//     }
//     char colour6[5][10];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> colour6[i];
//     }
//     char colour7[5][10];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> colour7[i];
//     }

//     //all inputs in 2d array
//     int ch;
//     cin >> ch;
//     //choice
//     if (ch == 2)
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << colour2[i] << " ";
//         }
//     }
//     else if (ch == 3)
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << colour3[i] << " ";
//         }
//     }
//     else if (ch == 4)
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << colour4[i] << " ";
//         }
//     }
//     else if (ch == 5)
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << colour5[i] << " ";
//         }
//     }
//     else if (ch == 6)
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << colour6[i] << " ";
//         }
//     }
//     else if (ch == 7)
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << colour7[i] << " ";
//         }
//     }
//     else
//     {
//         cout << colour[0] << " " << colour[1];
//     }
//     return 0;
// }

// // 12 : 06 : 2021
// #include <iostream>
// using namespace std;

// int addup(int arr[5][5], int i)
// {
//     int sum = 0;
//     for (int c = 0; c < n; c++)
//     {
//         sum += arr[i - 1][c];
//     }
//     return sum;
// }

// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int arr[m][n];
//     for (int l = 0; l < m; l++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[l][j];
//         }
//     }
//     int c;
//     cin >> c;
//     int i;
//     cin >> i;
//     int a2[n];
//     ////////////////second///////////////////////
//     if (c == 2 && i == 1)
//     {
//         // removem(3,arr,m,n);
//         for (int l = 0; l < n; l++)
//         {
//             cout << arr[0][l];
//         }
//         cout << endl;
//         for (int l = 0; l < n; l++)
//         {
//             cout << arr[2][l];
//         }
//     }
//     if (c == 2 && i == 1)
//     {
//         // removem(3,arr,m,n);
//         for (int l = 0; l < n; l++)
//         {
//             cout << arr[1][l] << " ";
//         }
//         cout << endl;
//         for (int l = 0; l < n; l++)
//         {
//             cout << arr[2][l] << " ";
//         }
//     }
//     if (c == 2 && i == 2)
//     { // removem(3,arr,m,n);
//         for (int l = 0; l < n; l++)
//         {
//             cout << arr[0][l] << " ";
//         }
//         cout << endl;
//         for (int l = 0; l < n; l++)
//         {
//             cout << arr[2][l] << " ";
//         }
//     }

//     /////////////first///////////////////////
//     if (c == 1)
//     {
//         //add new roww
//         for (int x = 0; x < n; x++)
//         {
//             cin >> a2[x];
//         }
//     }
//     if (i == 0 && c == 1)
//     {
//         for (int l = 0; l < n; l++)
//         //row
//         {
//             cout << a2[l] << " ";
//         }
//         cout << endl;
//         for (int i = 1; i < m; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     if (i == 1 && c == 1)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[0][j] << " ";
//         }
//         cout << endl;
//         for (int x = 0; x < n; x++)
//         {
//             cout << a2[x] << " ";
//         }
//         cout << endl;
//         for (int x = 0; x < n; x++)
//         {
//             cout << arr[2][x] << " ";
//         }
//     }
//     if (i == 2 && c == 1)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[0][j] << " ";
//         }
//         cout << endl;
//         for (int x = 0; x < n; x++)
//         {
//             cout << a2[x] << " ";
//         }
//         cout << endl;
//         for (int x = 0; x < n; x++)
//         {
//             cout << arr[1][x] << " ";
//         }
//         cout << endl;
//     }
//     /////////////////////////third//////////////////////////
//     if (c == 3)
//     {
//         addup(arr, i);
//         //sum of i row
//     }
//     ///////////////////////fourth/////////////////////////////////
//     if (c == 4)
//     {
//         //evencountfunction
//         int ctr = 0;
//         for (int c = 0; c < n; c++)
//         {
//             if ((arr[i - 1][c]) % 2 == 0)
//             {
//                 ctr++;
//             }
//         }
//         cout << ctr;
//     }
//     return 0;
// }

// // 12 : 06 : 2021
// #include <iostream>
// using namespace std;
// int adddrow();
// int addup();
// int Remove();
// int evensum();
// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int arr[m][n];
//     for (int o = 0; o < m; o++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[o][j];
//         }
//     }
//     int c;
//     cin >> c;
//     int i;
//     cin >> i;
//     int a2[n];

//     ////////////////second///////////////////////
//     if (c == 2)
//     {
//         if (i == 1)
//         {
//             // removem(3,arr,m,n);
//             for (int l = 0; l < n; l++)
//             {
//                 cout << arr[1][l] << " ";
//             }
//             cout << endl;
//             for (int l = 0; l < n; l++)
//             {
//                 cout << arr[2][l] << " ";
//             }
//         }
//         if (i == 2)
//         {
//             // removem(3,arr,m,n);
//             for (int l = 0; l < n; l++)
//             {
//                 cout << arr[0][l] << " ";
//             }
//             cout << endl;
//             for (int l = 0; l < n; l++)
//             {
//                 cout << arr[2][l] << " ";
//             }
//         }
//     }

//     /////////////first///////////////////////
//     if (c == 1)
//     {
//         //add new roww
//         for (int x = 0; x < n; x++)
//         {
//             cin >> a2[x];
//         }
//         if (i == 0)
//         {
//             for (int l = 0; l < n; l++)
//             //row
//             {
//                 cout << a2[l] << " ";
//             }
//             cout << endl;
//             for (int i = 1; i < m; i++)
//             {
//                 for (int j = 0; j < n; j++)
//                 {
//                     cout << arr[i][j] << " ";
//                 }
//                 cout << endl;
//             }
//         }
//         if (i == 1)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << arr[0][j] << " ";
//             }
//             cout << endl;
//             for (int x = 0; x < n; x++)
//             {
//                 cout << a2[x] << " ";
//             }
//             cout << endl;
//             for (int x = 0; x < n; x++)
//             {
//                 cout << arr[2][x] << " ";
//             }
//         }
//         if (i == 2)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << arr[0][j] << " ";
//             }
//             cout << endl;
//             for (int x = 0; x < n; x++)
//             {
//                 cout << a2[x] << " ";
//             }
//             cout << endl;
//             for (int x = 0; x < n; x++)
//             {
//                 cout << arr[1][x] << " ";
//             }
//         }
//     }

//     /////////////////////////third//////////////////////////
//     if (c == 3)
//     {
//         int sum = 0;
//         for (int c = 0; c < n; c++)
//         {
//             sum += arr[i - 1][c];
//         }
//         cout << sum;
//         cout << endl;
//     }

//     ///////////////////////fourth/////////////////////////////////
//     if (c == 4)
//     {
//         //evencountfunction
//         int ctr = 0;
//         for (int c = 0; c < n; c++)
//         {
//             if ((arr[i - 1][c]) % 2 == 0)
//             {
//                 ctr++;
//             }
//         }
//         cout << ctr << endl;
//     }
//     return 0;
// }

// // 13:06:2021
// #include <iostream>
// using namespace std;
// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     string str[100][100], str2[100][100];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> str[i][j];
//         }
//     }
//     int x;
//     cin >> x;
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> str2[i][j];
//         }
//     }
//     string f;
//     cin >> f;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (str[i][j] == f)
//             {
//                 cout << str[i][j + 1] << " ";
//             }
//         }
//     }
//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (str2[i][j] == f)
//             {
//                 cout << str2[i][j + 1] << " ";
//             }
//         }
//     }
//     // first
//     // cout<<"00"<<str[0][0]<<endl;
//     // cout<<"01"<<str[0][1]<<endl;
//     // cout<<"10"<<str[1][0]<<endl;
//     // cout<<"11"<<str[1][1]<<endl;
//     //
//     //second
//     // cout<<"00"<<str2[0][0]<<endl;
//     // cout<<"01"<<str2[0][1]<<endl;
//     // cout<<"10"<<str2[1][0]<<endl;
//     // cout<<"11"<<str2[1][1]<<endl;
//     // cout<<"20"<<str2[2][0]<<endl;
//     // cout<<"21"<<str2[2][1]<<endl;
//     // cout<<"30"<<str2[3][0]<<endl;
//     // cout<<"31"<<str2[3][1]<<endl;
//     // cout<<"40"<<str2[4][0]<<endl;
//     // cout<<"41"<<str2[4][1]<<endl;

//     return 0;
// }

// #include <iostream>
// #include <string.h>
// #include <list>
// using namespace std;
// int main()
// {
//     unsigned long int m, i = 0, x;
//     cin >> m;
//     string str;
//     list<string> l;
//     while (i <= m)
//     {
//         getline(cin, str);
//         l.push_back(str);
//         i++;
//     }
//     cin >> i;
//     l.sort();
//     list<string>::iterator go = l.begin();
//     advance(go, i);
//     cout << *go;
//     return 0;
// }

// // 17:06:2021
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int c;
//     cin >> c;
//     string str[100][100];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= c; j++)
//         {
//             cin >> str[i][j];
//         }
//     }
//     int s;
//     cin >> s;
//     string swap[100][100];
//     for (int i = 0; i < s; i++)
//     {
//         for (int j = 0; j <= 2; j++)
//         {
//             cin >> swap[i][j];
//         }
//     }

//     /*
//     // output//////////////////////////////////////
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= c; j++)
//         {
//             cout << str[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "swaps" << endl;
//     for (int i = 0; i < s; i++)
//     {
//         for (int j = 0; j <= 2; j++)
//         {
//             cout << swap[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << s;
//     */
//     return 0;
// }

// // 19/06/2021
// //OP
// #include <iostream>
// #include <vector>
// #include<iterator>
// #include <algorithm>

// using namespace std;
// int main()
// {
//     vector<string> parts;
//     vector<int> tshirt;
//     int n;
//     cin >> n;
//     int ct = 1;
//     while (ct <= n)
//     {
//         int n1;
//         cin >> n1;
//         switch (n1)
//         {
//         case 1:
//             //1- Participant-entry
//             int part;
//             cin >> part;
//             for (int cc = 0; cc < part; cc++)
//             {
//                 string temps;
//                 cin >> temps;
//                 parts.push_back(temps);
//             }
//             break;
//         case 2:
//             int ts;
//             cin >> ts;
//             for (int i = 0; i < ts; i++)
//             {
//                 int tn;
//                 cin >> tn;
//                 tshirt.push_back(tn);
//             }

//             break;
//         case 3:
//             int ctr = 0;
//             int k;
//             cin >> k;
//             reverse(tshirt.begin(), tshirt.end());
//             for (int i = 0; i < k; i++)
//             {
//                 cout << parts[i] << " " << tshirt[i] << endl;
//             }
//             vector<string>::iterator it1, it2;
//             it1 = parts.begin();
//             it2 = parts.begin() + k;
//             parts.erase(it1, it2);
//             break;
//         }
//         ct++;
//     }

//     return 0;
// }

// 20 : 06 : 2021
#include <iostream>
#include<math.h>
    using namespace std;
int main()
{
    long long n;
    cin >> n;
    int m = sqrt(n);
    while (n % m != 0)
    {
        m--;
    }
    cout << m + n / m - 2 << endl;
    return 0;

    return 0;
}