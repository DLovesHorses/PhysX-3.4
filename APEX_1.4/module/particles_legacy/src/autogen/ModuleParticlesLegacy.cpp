/*
* Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
*
* NVIDIA CORPORATION and its licensors retain all intellectual property
* and proprietary rights in and to this software, related documentation
* and any modifications thereto.  Any use, reproduction, disclosure or
* distribution of this software and related documentation without an express
* license agreement from NVIDIA CORPORATION is strictly prohibited.
*
* This code was autogenerated from ModuleLegacy.template
*/

#include "ApexUsingNamespace.h"
#include "Apex.h"
#include "ApexLegacyModule.h"
#include "ApexRWLockable.h"
#include "ModuleParticlesLegacyRegistration.h"

namespace nvidia 
{ 
namespace apex
{
namespace legacy
{

class ModuleParticlesLegacy : public ApexLegacyModule, public ApexRWLockable
{
public:
	APEX_RW_LOCKABLE_BOILERPLATE

	ModuleParticlesLegacy(ApexSDKIntl* inSdk)
	{
  	  mName = "Particles_Legacy";
	  mSdk = inSdk;
	  mApiProxy = this;
	  ModuleParticlesLegacyRegistration::invokeRegistration(mSdk->getParameterizedTraits());
	}

protected:
	void releaseLegacyObjects()
        {
          ModuleParticlesLegacyRegistration::invokeUnregistration(mSdk->getParameterizedTraits());
        }
};

void instantiateModuleParticlesLegacy()
{
	ApexSDKIntl *sdk = GetInternalApexSDK();
	ModuleParticlesLegacy *impl = PX_NEW(ModuleParticlesLegacy)(sdk);
	sdk->registerExternalModule((Module *) impl, (ModuleIntl *) impl);
}

}
}
}