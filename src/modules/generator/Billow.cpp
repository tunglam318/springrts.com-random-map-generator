#include "Billow.h"
#include "ModuleFactory.h"
#include "NoiseNetwork.h"

#include "registermodule_macro.cpp"

M_REGISTER(Billow);

Billow::Billow() : DataAbstractModule(0,0,1) {
  //FIXME add DataPorts here instead of Model.cpp
  setProperty("FIXME", 112); // FIXME setting properties should be done via makros
}

Billow::~Billow() {
}

NoiseNetwork* Billow::network() {
  // 0. query module for readieness
  if (ready()) {
  //   1. create a noiseNetwork (if generator module)
       NoiseNetwork* noiseNetwork = new NoiseNetwork;
  
  //   2. construct the local module (in this case Perlin)
       noise::module::Billow* m_Billow = new noise::module::Billow();
       noiseNetwork->addModule(m_Billow);

  //   3. assign all properties
  //   m_perlin->SetOctaveCount (property("OctaveCount"));
  //   ...
  
  //   4. connect all source modules (in case of a generator module: none) & merge the NoiseNetwork(s)
  
  //   foreach(input i)
  //       m_perlin->SetSourceModule(i->portnumber, i->topLevelModule);
  //       noiseNetwork->merge(i->network)
  //     OR IN SHORT:
  //       //noiseNetwork->setSourceNetwork(i, i->network)
  //   foreach(input m)
  //     m_perlin->SetControlModule(m->topLevelModule);
  //     noiseNetwork->merge(m->network)

    return noiseNetwork;
  }
  return NULL;
}

bool Billow::ready() {
  //   foreach(input i)
  //     if (i is unused)
  //       return false;
  //   foreach(modput m)
  //     if (m is unused)
  //       return false;
  return true;
}
