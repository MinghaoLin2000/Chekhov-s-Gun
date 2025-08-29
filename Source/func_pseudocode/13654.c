_CCCryptorUpdate
CCCryptorStatus __cdecl CCCryptorUpdate(
        CCCryptorRef cryptorRef,
        const void *dataIn,
        size_t dataInLength,
        void *dataOut,
        size_t dataOutAvailable,
        size_t *dataOutMoved)
{
  return _CCCryptorUpdate(cryptorRef, dataIn, dataInLength, dataOut, dataOutAvailable, dataOutMoved);
}