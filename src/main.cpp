#include <cstdio>
#include <iostream>

#include <co/co.h>
#include <co/so/http.h>

DEF_main(argc, argv)
{
	for (uint i=0 ; i<1000000 ; ++i)
	{
		go([&]()
		{
			http::Client insta{"i.instagram.com"};
			insta.get("/zucc");
			insta.post("/fk", "da");
			insta.get("/ducc");
			insta.close();
		});
	}
}
