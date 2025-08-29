_AUDeveloperSettingsAccessoryFusingStringToType
__int64 __fastcall AUDeveloperSettingsAccessoryFusingStringToType(void *a1)
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
  unsigned int v10; // w21

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "Dev"));
  v3 = (unsigned __int8)objc_msgSend(v1, "isEqualToString:", v2);
  objc_release(v2);
  if ( (v3 & 1) != 0 )
  {
    v4 = 0LL;
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "Prod"));
    v6 = (unsigned __int8)objc_msgSend(v1, "isEqualToString:", v5);
    objc_release(v5);
    if ( (v6 & 1) != 0 )
    {
      v4 = 1LL;
    }
    else
    {
      v7 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "Unfused"));
      v8 = (unsigned __int8)objc_msgSend(v1, "isEqualToString:", v7);
      objc_release(v7);
      if ( (v8 & 1) != 0 )
      {
        v4 = 2LL;
      }
      else
      {
        v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", "Pending"));
        v10 = (unsigned int)objc_msgSend(v1, "isEqualToString:", v9);
        objc_release(v9);
        if ( v10 )
          v4 = 3LL;
        else
          v4 = 4LL;
      }
    }
  }
  objc_release(v1);
  return v4;
}