_CCCryptorFinal
CCCryptorStatus __cdecl CCCryptorFinal(
        CCCryptorRef cryptorRef,
        void *dataOut,
        size_t dataOutAvailable,
        size_t *dataOutMoved)
{
  return _CCCryptorFinal(cryptorRef, dataOut, dataOutAvailable, dataOutMoved);
}