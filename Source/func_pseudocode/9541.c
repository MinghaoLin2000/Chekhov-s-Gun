_TSPCryptoInfoNeedsTranscodingToKey
bool __fastcall UnsafePointer(void *a1, void *a2, void *a3)
{
  unsigned __int64 v5; // x19
  unsigned __int64 v6; // x20
  _BOOL8 v7; // x21
  void *v8; // x22

  v5 = objc_retain(a1);
  v6 = objc_retain(a2);
  if ( v5 | v6 )
  {
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)v5, "cryptoKey"));
    if ( (unsigned int)SFUEqualCryptoKeys(v8, v6) )
      v7 = objc_msgSend((id)v5, "preferredBlockSize") != a3;
    else
      v7 = 1LL;
    objc_release(v8);
  }
  else
  {
    v7 = 0LL;
  }
  objc_release((id)v6);
  objc_release((id)v5);
  return v7;
}