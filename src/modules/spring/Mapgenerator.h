#ifndef SPRING_MAPGENERATOR__HH
#define SPRING_MAPGENERATOR__HH

#include <DataAbstractModule.h>
#include <noise.h>

#define ID "Spring::Mapgenerator"

// http://libnoise.sourceforge.net/docs/group__modules.html

/**
	@author Joachim Schiele <js@lastlog.de>
*/
class Mapgenerator : public DataAbstractModule {
public:
    Mapgenerator();
    ~Mapgenerator();

    QString identify();
    NoiseNetwork* network();
    bool ready();
};

#endif
