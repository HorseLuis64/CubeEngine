
#include <Cube.h>

class Gta : public Cube::App
{
public:
	Gta()
	{

	};
	~Gta()
	{

	};
};

Cube::App* Cube::CreateApp()
{
	return new Gta();
}