_SFUEqualCryptoKeys
bool __fastcall SFUEqualCryptoKeys(unsigned __int64 a1, unsigned __int64 a2)
{
  _BOOL8 result; // x0
  bool v5; // w9
  _BOOL4 v6; // w8
  void *v7; // x21

  if ( !(a1 | a2) )
    return 1LL;
  result = 0LL;
  v5 = a1 != 0;
  if ( a2 )
    v6 = a1 != 0;
  else
    v6 = 1;
  if ( a2 )
    v5 = 0;
  if ( !v5 && v6 )
  {
    v7 = objc_msgSend((id)a1, "keyLength");
    return v7 == objc_msgSend((id)a2, "keyLength")
        && memcmp(objc_msgSend((id)a1, "keyData"), objc_msgSend((id)a2, "keyData"), (size_t)v7) == 0;
  }
  return result;
}