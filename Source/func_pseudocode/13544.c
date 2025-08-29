-[NSString tsu_compareToVersionString:]
signed __int64 __cdecl -[NSString tsu_compareToVersionString:](NSString *self, SEL a2, id a3)
{
  id v4; // x19
  unsigned __int64 v5; // x20
  unsigned __int64 v6; // x0
  void *v7; // x21
  signed __int64 v8; // x22
  __int64 v10; // x23
  void *v11; // x24
  void *v12; // x25

  v4 = objc_retain(a3);
  v5 = (unsigned __int64)objc_retainAutoreleasedReturnValue((id)sub_10016254C(self));
  v6 = (unsigned __int64)objc_retainAutoreleasedReturnValue((id)sub_10016254C(v4));
  v7 = (void *)v6;
  if ( v5 | v6 )
  {
    if ( v5 || !v6 )
    {
      if ( !v5 || v6 )
      {
        v10 = 0LL;
        while ( 1 )
        {
          v11 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)v5, "objectAtIndexedSubscript:", v10));
          v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectAtIndexedSubscript:", v10));
          v8 = (signed __int64)objc_msgSend(v11, "compare:", v12);
          objc_release(v12);
          objc_release(v11);
          if ( v8 )
            break;
          if ( ++v10 == 3 )
            goto LABEL_2;
        }
      }
      else
      {
        v8 = 1LL;
      }
    }
    else
    {
      v8 = -1LL;
    }
  }
  else
  {
LABEL_2:
    v8 = 0LL;
  }
  objc_release(v7);
  objc_release((id)v5);
  objc_release(v4);
  return v8;
}