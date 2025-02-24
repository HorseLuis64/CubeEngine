#pragma once

#include "Thick.h"
namespace Cube {
	class CUBE_API App
	{
	public:
		App();
		virtual ~App();
		void Run();
	};

	App* CreateApp();
}

