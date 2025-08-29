_SecRandomCopyBytes
int __cdecl SecRandomCopyBytes(SecRandomRef rnd, size_t count, void *bytes)
{
  return _SecRandomCopyBytes(rnd, count, bytes);
}