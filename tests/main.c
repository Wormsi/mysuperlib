#include <unistd.h>
#include <string.h>
int mystrlen(const char *str);
void myputchar(const char c);
void myputstr(const char *str);

void subtest_mystrlen(const char *str)
{        if(mystrlen(str)==strlen(str))
        {
                write(1,"\tgg\n",4);
        }
        else
        {
                write(1,"\tff\n",4);
        }
}

void test_mystrlen(void)
{
	write(1,"start_test_mystrlen\n",20);
	subtest_mystrlen("salut");
        subtest_mystrlen("yop");
        subtest_mystrlen("easy");
        subtest_mystrlen("");
        subtest_mystrlen("noobs");
        subtest_mystrlen("vous etes nul");
        subtest_mystrlen("bhjqf<gbkvsdxg");
        subtest_mystrlen("lol trop des barres");
        subtest_mystrlen("jaime les tourne_vis");
	write(1,"end_test_mystrlen\n",19);
}

void subtest_myputchar(const char c)
{
	write(1,"\tmyputchar renvoi: ",19);
	myputchar(c);
	write(1," j'attend: ",11);
	write(1,&c,1);
	write(1,"\n",1);
}
	
void test_myputchar(void)
{
	write(1,"start_test_myputchar\n",21);
	subtest_myputchar('a');
        subtest_myputchar('z');
        subtest_myputchar('e');
        subtest_myputchar('r');
        subtest_myputchar('t');
        subtest_myputchar('y');
	write(1,"end_test_myputchar\n",20);
}

int main(void)
{
	test_myputchar();
        test_mystrlen();
        return(0);
}

