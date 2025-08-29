-[UARPUpdaterDisplayControllerDelegate isMDVersionGreaterLeft:thanRight:]
bool __cdecl -[UARPUpdaterDisplayControllerDelegate isMDVersionGreaterLeft:thanRight:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  void *v6; // x20
  void *v7; // x21
  signed int v8; // w23
  signed int v9; // w0
  __int64 v10; // x26
  __int64 v11; // x22
  __int64 v12; // x27
  __int64 v13; // x28
  void *v14; // x24
  signed int v15; // w23
  void *v16; // x25
  signed int v17; // w24
  bool v18; // w22

  v5 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "componentsSeparatedByString:", CFSTR(".")));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "componentsSeparatedByString:", CFSTR(".")));
  v8 = (unsigned int)objc_msgSend(v6, "count");
  v9 = (unsigned int)objc_msgSend(v7, "count");
  if ( v8 <= v9 )
    v10 = (unsigned int)v9;
  else
    v10 = (unsigned int)v8;
  if ( (int)v10 < 1 )
  {
LABEL_14:
    v18 = 0;
  }
  else
  {
    v11 = 0LL;
    v12 = v8;
    v13 = v9;
    while ( 1 )
    {
      if ( v11 >= v12 )
      {
        v15 = 0;
      }
      else
      {
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectAtIndexedSubscript:", v11));
        v15 = (unsigned int)objc_msgSend(v14, "intValue");
        objc_release(v14);
      }
      if ( v11 >= v13 )
      {
        v17 = 0;
      }
      else
      {
        v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectAtIndexedSubscript:", v11));
        v17 = (unsigned int)objc_msgSend(v16, "intValue");
        objc_release(v16);
      }
      if ( v15 != v17 )
        break;
      if ( v10 == ++v11 )
        goto LABEL_14;
    }
    v18 = v15 >= v17;
  }
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  return v18;
}