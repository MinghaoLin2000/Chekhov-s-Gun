_CCCryptorCreate
CCCryptorStatus __cdecl CCCryptorCreate(
        CCOperation op,
        CCAlgorithm alg,
        CCOptions options,
        const void *key,
        size_t keyLength,
        const void *iv,
        CCCryptorRef *cryptorRef)
{
  return _CCCryptorCreate(op, alg, options, key, keyLength, iv, cryptorRef);
}