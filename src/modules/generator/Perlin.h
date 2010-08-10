//
// C++ Interface: NoiseGenPerlin
//
// Description:
//
//
// Author: Joachim Schiele <js@lastlog.de>, (C) 2007
//
// Copyright: See COPYING file that comes with this distribution
//

#ifndef NOISEGENPERLIN_H
#define NOISEGENPERLIN_H

#include <DataAbstractModule.h>

#define ID "Generator::Perlin"

class NoiseGenPerlin : public DataAbstractModule {
  public:
    NoiseGenPerlin();
    ~NoiseGenPerlin();
    QString identify();
};

#endif