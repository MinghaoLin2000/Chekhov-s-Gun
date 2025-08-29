_CCCalibratePBKDF
unsigned int __cdecl CCCalibratePBKDF(
        CCPBKDFAlgorithm algorithm,
        size_t passwordLen,
        size_t saltLen,
        CCPseudoRandomAlgorithm prf,
        size_t derivedKeyLen,
        uint32_t msec)
{
  return _CCCalibratePBKDF(algorithm, passwordLen, saltLen, prf, derivedKeyLen, msec);
}