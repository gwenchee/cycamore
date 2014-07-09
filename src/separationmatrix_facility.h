#ifndef CYCLUS_SEPARATIONMATRIXS_SEPARATIONMATRIX_FACILITY_H_
#define CYCLUS_SEPARATIONMATRIXS_SEPARATIONMATRIX_FACILITY_H_

#include <string>

#include "cyclus.h"

namespace separationmatrix {


/// @class SeparationmatrixFacility
///
/// This Facility is intended
/// as a skeleton to guide the implementation of new Facility
/// agents.
/// The SeparationmatrixFacility class inherits from the Facility class and is
/// dynamically loaded by the Agent class when requested.
///
/// @section intro Introduction
///  TICK
///  Make offers of separated material based on availabe inventory.
///  If there are ordersWaiting, prepare and send an appropriate
///  request for spent fuel material.
///  Check stocks to determine if there is capacity to produce any extra material
///  next month. If so, process as much raw (spent fuel) stock material as
///  capacity will allow.
///
///  TOCK
///  Send appropriate separated material from inventory to fill ordersWaiting.
///
///  RECIEVE MATERIAL
///  Put incoming spent nuclear fuel (SNF) material into stocks
///
///  SEND MATERIAL
///  Pull separated material from inventory based on Requests
///  Decrement ordersWaiting
///
/// @section agentparams Agent Parameters
/// Place a description of the required input parameters which define the
/// agent implementation.
///
/// @section optionalparams Optional Parameters
/// Place a description of the optional input parameters to define the
/// agent implementation.
///
/// @section detailed Detailed Behavior
/// Place a description of the detailed behavior of the agent. Consider
/// describing the behavior at the tick and tock as well as the behavior
/// upon sending and receiving materials and messages.
class SeparationmatrixFacility : public cyclus::Facility  {
 public:  
  /// Constructor for SeparationmatrixFacility Class
  /// @param ctx the cyclus context for access to simulation-wide parameters
  explicit SeparationmatrixFacility(cyclus::Context* ctx);

  /// The Prime Directive
  /// Generates code that handles all input file reading and restart operations
  /// (e.g., reading from the database, instantiating a new object, etc.).
  /// @warning The Prime Directive must have a space before it! (A fix will be
  /// in 2.0 ^TM)
  
  #pragma cyclus

  #pragma cyclus note {"doc": "A separationmatrix facility is provided as a skeleton " \
                              "for the design of new facility agents."}

  /// A verbose printer for the SeparationmatrixFacility
  virtual std::string str();
  
  /// The handleTick function specific to the SeparationmatrixFacility.
  /// @param time the time of the tick  
  virtual void Tick();

  /// The handleTick function specific to the SeparationmatrixFacility.
  /// @param time the time of the tock
  virtual void Tock();

  // and away we go!
};

}  // namespace separationmatrix

#endif  // CYCLUS_SEPARATIONMATRIXS_SEPARATIONMATRIX_FACILITY_H_
