#pragma once

#include "snd_evt_flags_decl.hpp"

#include "json.hpp"

NLOHMANN_JSON_SERIALIZE_ENUM(LhcAcceleratorMode, {
  {LhcAcceleratorMode::Unknown, nullptr},
  {LhcAcceleratorMode::Null, "NULL"},
  {LhcAcceleratorMode::Shutdown, "SHUTDOWN"},
  {LhcAcceleratorMode::Cooldown, "COOLDOWN"},
  {LhcAcceleratorMode::MachineCheckout, "MACHINE CHECKOUT"},
  {LhcAcceleratorMode::Access, "ACCESS"},
  {LhcAcceleratorMode::MachineTest, "MACHINE TEST"},
  {LhcAcceleratorMode::Calibration, "CALIBRATION"},
  {LhcAcceleratorMode::WarmUp, "WARM-UP"},
  {LhcAcceleratorMode::Recovery, "RECOVERY"},
  {LhcAcceleratorMode::SectorDependent, "SECTOR DEPENDENT"},
  {LhcAcceleratorMode::BeamSetup, "BEAM SETUP"},
  {LhcAcceleratorMode::ProtonPhysics, "PROTON PHYSICS"},
  {LhcAcceleratorMode::IonPhysics, "ION PHYSICS"},
  {LhcAcceleratorMode::TotemPhysics, "TOTEM PHYSICS"},
  {LhcAcceleratorMode::SpecialOpticsPhysics, "SPECIAL OPTICS PHYSICS"},
  {LhcAcceleratorMode::ProtonNucleusPhysics, "PROTON NUCLEUS PHYSICS"},
  {LhcAcceleratorMode::MachineDevelopment, "MACHINE DEVELOPMENT"},
})

NLOHMANN_JSON_SERIALIZE_ENUM(LhcBeamMode, {
  {LhcBeamMode::Unknown, nullptr},
  {LhcBeamMode::Null, "NULL"},
  {LhcBeamMode::Setup, "SETUP"},
  {LhcBeamMode::Abort, "ABORT"},
  {LhcBeamMode::InjectionProbeBeam, "INJECTION PROBE BEAM"},
  {LhcBeamMode::InjectionSetupBeam, "INJECTION SETUP BEAM"},
  {LhcBeamMode::InjectionPhysicsBeam, "INJECTION PHYSICS BEAM"},
  {LhcBeamMode::PrepareRamp, "PREPARE RAMP"},
  {LhcBeamMode::Ramp, "RAMP"},
  {LhcBeamMode::FlatTop, "FLAT TOP"},
  {LhcBeamMode::Squeeze, "SQUEEZE"},
  {LhcBeamMode::Adjust, "ADJUST"},
  {LhcBeamMode::StableBeams, "STABLE BEAMS"},
  {LhcBeamMode::UnstableBeams, "UNSTABLE BEAMS"},
  {LhcBeamMode::BeamDump, "BEAM DUMP"},
  {LhcBeamMode::RampDown, "RAMP DOWN"},
  {LhcBeamMode::Cycling, "CYCLING"},
  {LhcBeamMode::Recovery, "RECOVERY"},
  {LhcBeamMode::InjectAndDump, "INJECT AND DUMP"},
  {LhcBeamMode::CirculateAndDump, "CIRCULATE AND DUMP"},
  {LhcBeamMode::NoBeam, "NO BEAM"},
})
