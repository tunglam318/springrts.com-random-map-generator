//
// C++ Implementation: UtilsNoiseMap
//
// Description:
//
//
// Author: Joachim Schiele <js@lastlog.de>, (C) 2009
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "UtilsNoiseMap.h"
#include "ModuleFactory.h"

#include "registermodule_macro.cpp"

M_REGISTER(UtilsNoiseMap);

UtilsNoiseMap::UtilsNoiseMap()  : DataAbstractModule(1,0,0) {
}

UtilsNoiseMap::~UtilsNoiseMap() {
}

QString UtilsNoiseMap::identify() {
    return ID;
}


