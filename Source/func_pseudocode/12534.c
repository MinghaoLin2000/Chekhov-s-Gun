-[NSURL tsu_matchesURL:canCompareFileID:]
bool __cdecl -[NSURL tsu_matchesURL:canCompareFileID:](NSURL *self, SEL a2, id a3, bool a4)
{
  _BOOL4 v4; // w21
  NSURL *v6; // x0
  NSURL *v7; // x19
  unsigned __int8 v8; // w22
  id v9; // x23
  id v10; // x24
  unsigned int v11; // w23
  id v12; // x20
  unsigned int v13; // w0
  __int64 v15; // [xsp+0h] [xbp-40h] BYREF
  id v16; // [xsp+8h] [xbp-38h] BYREF

  v4 = a4;
  v6 = (NSURL *)objc_retain(a3);
  v7 = v6;
  v8 = self == v6;
  if ( v6 && self != v6 )
  {
    if ( ((unsigned int)-[NSURL isEqual:](self, "isEqual:", v6) & 1) != 0 )
    {
      v8 = 1;
    }
    else
    {
      if ( -[NSURL isFileURL](self, "isFileURL") && -[NSURL isFileURL](v7, "isFileURL") )
      {
        v9 = objc_retainAutoreleasedReturnValue(-[NSURL tsu_pathExceptPrivate](self, "tsu_pathExceptPrivate"));
        v10 = objc_retainAutoreleasedReturnValue(-[NSURL tsu_pathExceptPrivate](v7, "tsu_pathExceptPrivate"));
        v8 = (unsigned __int8)objc_msgSend(v9, "isEqualToString:", v10);
        objc_release(v10);
        objc_release(v9);
      }
      else
      {
        v8 = 0;
      }
      if ( (v8 & 1) == 0 && v4 )
      {
        v16 = 0LL;
        v11 = -[NSURL getResourceValue:forKey:error:](
                self,
                "getResourceValue:forKey:error:",
                &v16,
                NSURLFileResourceIdentifierKey,
                0LL);
        v12 = objc_retain(v16);
        v15 = 0LL;
        v13 = -[NSURL getResourceValue:forKey:error:](
                v7,
                "getResourceValue:forKey:error:",
                &v15,
                NSURLFileResourceIdentifierKey,
                0LL);
        v8 = 0;
        if ( v11 && v13 )
          v8 = (unsigned __int8)objc_msgSend(v12, "isEqual:", v15);
        objc_release(v12);
      }
    }
  }
  objc_release(v7);
  return v8;
}