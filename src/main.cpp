#include <cstdio>

#include <co/co.h>
#include <co/so/http.h>

DEF_main(argc, argv)
{
	http::Client insta{"instagram.com"};
	
	for (int i=0 ; i<10000 ; ++i)
	{
		go([&]()
		{
			insta.get("/");
		});
	}
	
	insta.close();
}
