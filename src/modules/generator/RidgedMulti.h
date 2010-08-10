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

#include <DataAbstractModule.h>

#define ID "Generator::RidgedMulti"

class NoiseGenRidgedMulti : public DataAbstractModule {
  public:
    NoiseGenRidgedMulti();
    ~NoiseGenRidgedMulti();
    QString identify();
};

#endif