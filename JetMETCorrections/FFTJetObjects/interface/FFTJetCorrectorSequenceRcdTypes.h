#ifndef JetMETCorrections_FFTJetObjects_FFTJetCorrectorSequenceRcdTypes_h
#define JetMETCorrections_FFTJetObjects_FFTJetCorrectorSequenceRcdTypes_h

#include "JetMETCorrections/FFTJetObjects/interface/FFTJetCorrectorSequenceRcd.h"
#include "CondFormats/JetMETObjects/interface/FFTJetCorrTypes.h"

typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::BasicJet> FFTBasicJetCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::GenJet>   FFTGenJetCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::CaloJet>  FFTCaloJetCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PFJet>    FFTPFJetCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::TrackJet> FFTTrackJetCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::JPTJet>   FFTJPTJetCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PFCHS0>   FFTPFCHS0CorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PFCHS1>   FFTPFCHS1CorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PFCHS2>   FFTPFCHS2CorrectorSequenceRcd;

typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::BasicJetSys> FFTBasicJetSysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::GenJetSys>   FFTGenJetSysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::CaloJetSys>  FFTCaloJetSysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PFJetSys>    FFTPFJetSysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::TrackJetSys> FFTTrackJetSysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::JPTJetSys>   FFTJPTJetSysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PFCHS0Sys>   FFTPFCHS0SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PFCHS1Sys>   FFTPFCHS1SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PFCHS2Sys>   FFTPFCHS2SysCorrectorSequenceRcd;

typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Gen0> FFTGen0CorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Gen1> FFTGen1CorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Gen2> FFTGen2CorrectorSequenceRcd;

typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF0> FFTPF0CorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF1> FFTPF1CorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF2> FFTPF2CorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF3> FFTPF3CorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF4> FFTPF4CorrectorSequenceRcd;

typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo0> FFTCalo0CorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo1> FFTCalo1CorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo2> FFTCalo2CorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo3> FFTCalo3CorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo4> FFTCalo4CorrectorSequenceRcd;

typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Gen0Sys> FFTGen0SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Gen1Sys> FFTGen1SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Gen2Sys> FFTGen2SysCorrectorSequenceRcd;

typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF0Sys> FFTPF0SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF1Sys> FFTPF1SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF2Sys> FFTPF2SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF3Sys> FFTPF3SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF4Sys> FFTPF4SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF5Sys> FFTPF5SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF6Sys> FFTPF6SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF7Sys> FFTPF7SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF8Sys> FFTPF8SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::PF9Sys> FFTPF9SysCorrectorSequenceRcd;

typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo0Sys> FFTCalo0SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo1Sys> FFTCalo1SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo2Sys> FFTCalo2SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo3Sys> FFTCalo3SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo4Sys> FFTCalo4SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo5Sys> FFTCalo5SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo6Sys> FFTCalo6SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo7Sys> FFTCalo7SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo8Sys> FFTCalo8SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::Calo9Sys> FFTCalo9SysCorrectorSequenceRcd;

typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::CHS0Sys> FFTCHS0SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::CHS1Sys> FFTCHS1SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::CHS2Sys> FFTCHS2SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::CHS3Sys> FFTCHS3SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::CHS4Sys> FFTCHS4SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::CHS5Sys> FFTCHS5SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::CHS6Sys> FFTCHS6SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::CHS7Sys> FFTCHS7SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::CHS8Sys> FFTCHS8SysCorrectorSequenceRcd;
typedef FFTJetCorrectorSequenceRcd<fftcorrtypes::CHS9Sys> FFTCHS9SysCorrectorSequenceRcd;

#endif // JetMETCorrections_FFTJetObjects_FFTJetCorrectorSequenceRcdTypes_h