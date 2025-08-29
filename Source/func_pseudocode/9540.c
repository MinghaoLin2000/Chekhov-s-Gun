_TSPCryptoInfoNeedsTranscodingToInfo
__int64 __fastcall UnsafePointer(void *a1, void *a2)
{
  id v3; // x20
  id v4; // x21
  id v5; // x19
  id v6; // x20
  void *v7; // x21
  void *v8; // x22
  void *v9; // x23
  void *v10; // x23
  void *v11; // x24
  void *v12; // x26
  void *v13; // x27
  unsigned int v14; // w25

  v3 = objc_retain(a1);
  v4 = objc_retain(a2);
  v5 = objc_retain(v3);
  v6 = objc_retain(v4);
  if ( v5 == v6 )
  {
    v14 = 1;
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "cryptoKey"));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "cryptoKey"));
    if ( (unsigned int)SFUEqualCryptoKeys(v7, v8)
      && (v9 = objc_msgSend(v5, "preferredBlockSize"), v9 == objc_msgSend(v6, "preferredBlockSize")) )
    {
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "blockInfos"));
      v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "blockInfos"));
      if ( v10 == v11 )
      {
        v14 = 1;
      }
      else
      {
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "blockInfos"));
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "blockInfos"));
        v14 = (unsigned int)objc_msgSend(v12, "isEqual:", v13);
        objc_release(v13);
        objc_release(v12);
      }
      objc_release(v11);
      objc_release(v10);
    }
    else
    {
      v14 = 0;
    }
    objc_release(v8);
    objc_release(v7);
  }
  objc_release(v6);
  objc_release(v5);
  objc_release(v6);
  objc_release(v5);
  return v14 ^ 1;
}