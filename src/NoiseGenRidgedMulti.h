//
// C++ Interface: NoiseGenRidgedMulti
//
// Description:
//
//
// Author: Joachim Schiele <js@lastlog.de>, (C) 2009
//
// Copyright: See COPYING file that comes with this distribution
//
//

#ifndef NOISEGENRIDGEDMULTI_H
#define NOISEGENRIDGEDMULTI_H

#include <AbstractModule.h>
#include <noise/noise.h>
#include "visualModuleItem.h"

#define ID "NoiseGen::RidgedMulti"

class NoiseGenRidgedMulti : public AbstractModule {
  public:
    NoiseGenRidgedMulti();
    ~NoiseGenRidgedMulti();
    QString identify();
};

#endif