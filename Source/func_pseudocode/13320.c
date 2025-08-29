_TSUEncodedBlockInfoAreEqual
bool __fastcall TSUEncodedBlockInfoAreEqual(void *a1, void *a2)
{
  id v3; // x19
  id v4; // x20
  void *v5; // x21
  void *v6; // x21
  _BOOL8 v7; // x21

  v3 = objc_retain(a1);
  v4 = objc_retain(a2);
  v5 = objc_msgSend(v3, "encodedLength");
  if ( v5 == objc_msgSend(v4, "encodedLength") )
  {
    v6 = objc_msgSend(v3, "decodedLength");
    v7 = v6 == objc_msgSend(v4, "decodedLength");
  }
  else
  {
    v7 = 0LL;
  }
  objc_release(v4);
  objc_release(v3);
  return v7;
}