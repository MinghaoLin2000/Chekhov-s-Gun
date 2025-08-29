_CCHmacInit
void __cdecl CCHmacInit(CCHmacContext *ctx, CCHmacAlgorithm algorithm, const void *key, size_t keyLength)
{
  _CCHmacInit(ctx, algorithm, key, keyLength);
}