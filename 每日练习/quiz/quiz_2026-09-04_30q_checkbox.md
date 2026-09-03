# 📚 C语言转专业 · 30题综合性试卷(可勾选版)

> 结合 全考纲+程序分析+结构体(已学) 出题
> ✅ 每题只勾一个选项。做完按 `1A2B3C...` 发回 QQ。

## 一、流程控制与表达式综合

**1. `int a=1,b=2,c=3; printf("%d", a>b? a: c>b?c:b);` 输出?**

- [ ] A. 1
- [ ] B. 2
- [ ] C. 3
- [ ] D. 编译错误

**2. `double y = 5/2; printf("%g", y);` 输出?**

- [ ] A. 2.5
- [ ] B. 2
- [ ] C. 2.0
- [ ] D. 编译错误

**3. `int k=2,s=0; switch(k){case 1:s+=1; case 2:s+=2; case 3:s+=3;} printf("%d",s);` 输出?**

- [ ] A. 2
- [ ] B. 3
- [ ] C. 5
- [ ] D. 编译错误

**4. `int s=0,i; for(i=1;i<=10;i++){ if(i%3==0) continue; s+=i;} printf("%d",s);` 输出?**

- [ ] A. 55
- [ ] B. 37
- [ ] C. 30
- [ ] D. 42

**5. `int n=1234, c=0; while(n){c++; n/=10;} printf("%d",c);` 输出?**

- [ ] A. 3
- [ ] B. 4
- [ ] C. 5
- [ ] D. 无限循环

## 二、数组与字符串综合

**6. `int a[2][3]={{1,2,3},{4,5,6}}; int *p=a[0]; printf("%d", *(p+4));` 输出?**

- [ ] A. 5
- [ ] B. 4
- [ ] C. 6
- [ ] D. 3

**7. `char s[100]="hello"; printf("%d %d", strlen(s), sizeof(s));` 输出?**

- [ ] A. 5 5
- [ ] B. 5 100
- [ ] C. 6 100
- [ ] D. 6 6

**8. `char s[20]="ab"; strcat(s,"cd"); printf("%s %d", s, strlen(s));` 输出?**

- [ ] A. ab 2
- [ ] B. abcd 4
- [ ] C. cd 2
- [ ] D. ab 4

**9. `char s[]="ABC"; s[0]='X'; printf("%s", s);` 输出?**

- [ ] A. ABC
- [ ] B. XBC
- [ ] C. X
- [ ] D. 崩溃

**10. `int a[3][3]={0}; a[1][2]=5; printf("%d", a[1][2]+a[2][2]);` 输出?**

- [ ] A. 5
- [ ] B. 0
- [ ] C. 10
- [ ] D. 编译错误

## 三、函数与递归综合

**11. `void f(int x){x=100;} main(){int a=5; f(a); printf("%d",a);}` 输出?**

- [ ] A. 100
- [ ] B. 5
- [ ] C. 105
- [ ] D. 0

**12. `int f(){static int n=0; return ++n;} main(){printf("%d\n",f());printf("%d\n",f());printf("%d\n",f());}` 第三行输出?**

- [ ] A. 1
- [ ] B. 2
- [ ] C. 3
- [ ] D. 0

**13. `int f(int n){if(n<=1)return 1; return n*f(n-1);} printf("%d", f(5));` 输出?**

- [ ] A. 5
- [ ] B. 15
- [ ] C. 120
- [ ] D. 25

**14. `void f(int n){if(n>0){f(n-1); printf("%d",n);}} main(){f(3);}` 输出?**

- [ ] A. 321
- [ ] B. 123
- [ ] C. 3
- [ ] D. 无输出

**15. `void swap(int*a,int*b){int t=*a;*a=*b;*b=t;} main(){int x=3,y=8; swap(&x,&y); printf("%d%d",x,y);}` 输出?**

- [ ] A. 38
- [ ] B. 83
- [ ] C. 38
- [ ] D. 88

## 四、指针综合

**16. `int a=10; int*p=&a; (*p)++; printf("%d",a);` 输出?**

- [ ] A. 10
- [ ] B. 11
- [ ] C. 9
- [ ] D. 地址

**17. `int a[5]; int*p=a+3; printf("%d", p-a);` 输出?**

- [ ] A. 3
- [ ] B. 4
- [ ] C. 5
- [ ] D. 地址差

**18. `int a[2][3]; int(*p)[3]=a; printf("%d", sizeof(*p));` (64位int) 输出?**

- [ ] A. 4
- [ ] B. 6
- [ ] C. 12
- [ ] D. 24

**19. `int*f(){int x=5; return &x;} main(){int*p=f(); printf("%d",*p);}` 的问题?**

- [ ] A. 正常输出5
- [ ] B. 返回局部地址，悬垂指针，行为未定义
- [ ] C. 编译错误
- [ ] D. 输出地址

**20. `char*p="hi"; p="ok"; printf("%s",p);` 输出?**

- [ ] A. hi
- [ ] B. ok
- [ ] C. 崩溃
- [ ] D. 编译错误

## 五、结构体综合

**21. `struct S{int x; char c;}; struct S s;` 访问成员 x 的正确写法?**

- [ ] A. s.x
- [ ] B. s->x
- [ ] C. *s.x
- [ ] D. s@x

**22. `struct S{int x;}; struct S*p;` 通过指针访问 x 用?**

- [ ] A. p.x
- [ ] B. p->x
- [ ] C. p.x()
- [ ] D. *p.x

**23. `struct S{int a,b;}; struct S arr[2]={{1,2},{3,4}}; printf("%d",arr[1].a);` 输出?**

- [ ] A. 1
- [ ] B. 2
- [ ] C. 3
- [ ] D. 4

**24. `typedef struct{int x;} S; S s; s.x=5; printf("%d",s.x);` 输出?**

- [ ] A. 5
- [ ] B. 0
- [ ] C. 编译错误
- [ ] D. 随机

**25. `void f(struct S t){t.x=100;} main(){struct S s; s.x=5; f(s); printf("%d",s.x);}` 输出?**

- [ ] A. 100
- [ ] B. 5
- [ ] C. 105
- [ ] D. 0

## 六、程序分析·读程序写输出

**26. `int x=5; int y=x++; printf("%d %d",x,y);` 输出?**

- [ ] A. 5 5
- [ ] B. 6 5
- [ ] C. 6 6
- [ ] D. 5 6

**27. `int a=6,b=4; int t; t=a>b?a:b; printf("%d",t);` 输出?**

- [ ] A. 6
- [ ] B. 4
- [ ] C. 0
- [ ] D. 10

**28. `int a[]={4,3,2,1};` 冒泡排序第一趟结束后数组是?**

- [ ] A. 4 3 2 1
- [ ] B. 3 2 1 4
- [ ] C. 1 2 3 4
- [ ] D. 4 3 1 2

**29. `int a[5]={1,2,3,4,5}; int*p=a; while(*p<4)p++; printf("%d",*p);` 输出?**

- [ ] A. 5
- [ ] B. 4
- [ ] C. 3
- [ ] D. 6

**30. `int a[2][2]={{1,2},{3,4}}; int(*p)[2]=a; printf("%d", *(*(p+1)));` 输出?**

- [ ] A. 1
- [ ] B. 2
- [ ] C. 3
- [ ] D. 4

---

**💡 考核提醒:** 转专业仅 **2 个名额**，40% 上机 + 60% 面试。9/4 申请，9/13 前考核。

— 灰风 · 考研冲刺陪练 🛸