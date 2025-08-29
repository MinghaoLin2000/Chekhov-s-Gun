_AUDeveloperSettingsURLStringToType
__int64 __fastcall AUDeveloperSettingsURLStringToType(void *a1)
{
  id v1; // x19
  NSString *v2; // x20
  unsigned __int8 v3; // w21
  __int64 v4; // x20
  NSString *v5; // x20
  unsigned __int8 v6; // w21
  NSString *v7; // x20
  unsigned __int8 v8; // w21
  NSString *v9; // x20
  unsigned __int8 v10; // w21
  NSString *v11; // x20
  unsigned __int8 v12; // w21
  NSString *v13; // x20
  unsigned __int8 v14; // w21
  NSString *v15; // x20
  unsigned int v16; // w21

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "Livability"));
  v3 = (unsigned __int8)objc_msgSend(v1, "isEqualToString:", v2);
  objc_release(v2);
  if ( (v3 & 1) != 0 )
  {
    v4 = 0LL;
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "Internal Seed"));
    v6 = (unsigned __int8)objc_msgSend(v1, "isEqualToString:", v5);
    objc_release(v5);
    if ( (v6 & 1) != 0 )
    {
      v4 = 1LL;
    }
    else
    {
      v7 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "Customer"));
      v8 = (unsigned __int8)objc_msgSend(v1, "isEqualToString:", v7);
      objc_release(v7);
      if ( (v8 & 1) != 0 )
      {
        v4 = 2LL;
      }
      else
      {
        v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "Public Seed"));
        v10 = (unsigned __int8)objc_msgSend(v1, "isEqualToString:", v9);
        objc_release(v9);
        if ( (v10 & 1) != 0 )
        {
          v4 = 3LL;
        }
        else
        {
          v11 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "Basejumper"));
          v12 = (unsigned __int8)objc_msgSend(v1, "isEqualToString:", v11);
          objc_release(v11);
          if ( (v12 & 1) != 0 )
          {
            v4 = 4LL;
          }
          else
          {
            v13 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithUTF8String:](
                      &OBJC_CLASS___NSString,
                      "stringWithUTF8String:",
                      "Custom Basejumper"));
            v14 = (unsigned __int8)objc_msgSend(v1, "isEqualToString:", v13);
            objc_release(v13);
            if ( (v14 & 1) != 0 )
            {
              v4 = 5LL;
            }
            else
            {
              v15 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "Mesu Staging"));
              v16 = (unsigned int)objc_msgSend(v1, "isEqualToString:", v15);
              objc_release(v15);
              if ( v16 )
                v4 = 6LL;
              else
                v4 = 7LL;
            }
          }
        }
      }
    }
  }
  objc_release(v1);
  return v4;
}