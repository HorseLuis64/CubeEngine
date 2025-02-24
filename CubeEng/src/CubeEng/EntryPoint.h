#pragma once

#ifdef CUBE_WINDOWS

extern Cube::App* Cube::CreateApp();

int main(int argc, char** argv)
{
	printf("pipi");
	auto app = Cube::CreateApp();
	app->Run();
	delete app;
	return 0;
}

#endif