/*
 * Copyright (c) 2008-2017, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


#ifndef NOISE_FSACTOR_H
#define NOISE_FSACTOR_H

#include "Apex.h"

namespace nvidia
{
namespace apex
{

PX_PUSH_PACK_DEFAULT

class BasicFSAsset;


/**
 \brief JetFS Actor class
 */
class NoiseFSActor : public Actor, public Renderable
{
protected:
	virtual ~NoiseFSActor() {}

public:

	/**
	\brief Returns the asset the instance has been created from.
	*/
	virtual BasicFSAsset* 		getNoiseFSAsset() const = 0;

	/**
	\brief Gets the current pose of the actor
	*/
	virtual PxMat44				getCurrentPose() const = 0;
	
	/**
	\brief Sets the current pose of the actor
	*/
	virtual void				setCurrentPose(const PxTransform& pose) = 0;
	
	/**
	\brief Gets the current position of the actor
	*/
	virtual PxVec3				getCurrentPosition() const = 0;
	
	/**
	\brief Sets the current position of the actor
	*/
	virtual void				setCurrentPosition(const PxVec3& pos) = 0;

	/**
	\brief Gets the current scale of the actor
	*/
	virtual float				getCurrentScale() const = 0;
	
	/**
	\brief Sets the current scale of the actor
	*/
	virtual void				setCurrentScale(const float& scale) = 0;

	/**
	\brief Sets the noise strength
	*/
	virtual void				setNoiseStrength(float) = 0;

	/**
	\brief Enable/Disable the field simulation
	*/
	virtual void				setEnabled(bool isEnabled) = 0;

};

PX_POP_PACK

}
} // end namespace nvidia::apex

#endif // NOISE_FSACTOR_H
