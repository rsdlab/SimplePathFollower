// -*-C++-*-
/*!
 * @file  MobileRobotSVC_impl.h
 * @brief Service implementation header of MobileRobot.idl
 *
 */

#include "BasicDataTypeSkel.h"
#include "ExtendedDataTypesSkel.h"
#include "InterfaceDataTypesSkel.h"

#include "MobileRobotSkel.h"

#ifndef MOBILEROBOTSVC_IMPL_H
#define MOBILEROBOTSVC_IMPL_H
 
/*!
 * @class PathFollowerSVC_impl
 * Example class implementing IDL interface RTC::PathFollower
 */
class PathFollowerSVC_impl
 : public virtual POA_RTC::PathFollower,
   public virtual PortableServer::RefCountServantBase
{
 private:
   // Make sure all instances are built on the heap by making the
   // destructor non-public
   //virtual ~PathFollowerSVC_impl();

 public:
  /*!
   * @brief standard constructor
   */
   PathFollowerSVC_impl();
  /*!
   * @brief destructor
   */
   virtual ~PathFollowerSVC_impl();

   // attributes and operations
   RTC::RETURN_VALUE followPath(const RTC::Path2D& path);

};



#endif // MOBILEROBOTSVC_IMPL_H

