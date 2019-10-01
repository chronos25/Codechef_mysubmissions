// My contribution to open source

#include<stdio.h>

int main(void)
{
int test_case, n_row, m_col, total_students;

scanf( "%d", &test_case );

while( test_case-- )
{

scanf("%d %d", &n_row, &m_col);

total_students = n_row * m_col;

if( total_students % 2 == 0 )

printf("YES\n");

else

printf("NO\n");

}

return 0;
}
