#pragma once

#include "snd_evt_flags_decl.hpp"

#include "json.hpp"

NLOHMANN_JSON_SERIALIZE_ENUM(SndAcceleratorMode, {
  {SndAcceleratorMode::Unknown, nullptr},
  {SndAcceleratorMode::Null, "NULL"},
  {SndAcceleratorMode::Shutdown, "SHUTDOWN"},
  {SndAcceleratorMode::Cooldown, "COOLDOWN"},
  {SndAcceleratorMode::MachineCheckout, "MACHINE CHECKOUT"},
  {SndAcceleratorMode::Access, "ACCESS"},
  {SndAcceleratorMode::MachineTest, "MACHINE TEST"},
  {SndAcceleratorMode::Calibration, "CALIBRATION"},
  {SndAcceleratorMode::WarmUp, "WARM-UP"},
  {SndAcceleratorMode::Recovery, "RECOVERY"},
  {SndAcceleratorMode::SectorDependent, "SECTOR DEPENDENT"},
  {SndAcceleratorMode::BeamSetup, "BEAM SETUP"},
  {SndAcceleratorMode::ProtonPhysics, "PROTON PHYSICS"},
  {SndAcceleratorMode::IonPhysics, "ION PHYSICS"},
  {SndAcceleratorMode::TotemPhysics, "TOTEM PHYSICS"},
  {SndAcceleratorMode::SpecialOpticsPhysics, "SPECIAL OPTICS PHYSICS"},
  {SndAcceleratorMode::ProtonNucleusPhysics, "PROTON NUCLEUS PHYSICS"},
  {SndAcceleratorMode::MachineDevelopment, "MACHINE DEVELOPMENT"},
})

NLOHMANN_JSON_SERIALIZE_ENUM(SndBeamMode, {
  {SndBeamMode::Unknown, nullptr},
  {SndBeamMode::Null, "NULL"},
  {SndBeamMode::Setup, "SETUP"},
  {SndBeamMode::Abort, "ABORT"},
  {SndBeamMode::InjectionProbeBeam, "INJECTION PROBE BEAM"},
  {SndBeamMode::InjectionSetupBeam, "INJECTION SETUP BEAM"},
  {SndBeamMode::InjectionPhysicsBeam, "INJECTION PHYSICS BEAM"},
  {SndBeamMode::PrepareRamp, "PREPARE RAMP"},
  {SndBeamMode::Ramp, "RAMP"},
  {SndBeamMode::FlatTop, "FLAT TOP"},
  {SndBeamMode::Squeeze, "SQUEEZE"},
  {SndBeamMode::Adjust, "ADJUST"},
  {SndBeamMode::StableBeams, "STABLE BEAMS"},
  {SndBeamMode::UnstableBeams, "UNSTABLE BEAMS"},
  {SndBeamMode::BeamDump, "BEAM DUMO"},
  {SndBeamMode::RampDown, "RAMP DOWN"},
  {SndBeamMode::Cycling, "CYCLING"},
  {SndBeamMode::Recovery, "RECOVERY"},
  {SndBeamMode::InjectAndDump, "INJECT AND DUMP"},
  {SndBeamMode::CirculateAndDump, "CIRCULATE AND DUMP"},
  {SndBeamMode::NoBeam, "NO BEAM"},
})