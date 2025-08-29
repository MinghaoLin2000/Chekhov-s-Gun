_CCHmac
void __cdecl CCHmac(
        CCHmacAlgorithm algorithm,
        const void *key,
        size_t keyLength,
        const void *data,
        size_t dataLength,
        void *macOut)
{
  _CCHmac(algorithm, key, keyLength, data, dataLength, macOut);
}