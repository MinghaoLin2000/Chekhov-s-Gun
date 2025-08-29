-[PrintInfoSet addInfo:]
int __cdecl -[PrintInfoSet addInfo:](PrintInfoSet *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  int v6; // w22
  NSArray *v7; // x21
  void *v8; // x24
  id v9; // x0
  void *v10; // x23

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "uuid"));
  v6 = 65537;
  if ( v5 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_uuidToPrinters, "objectForKeyedSubscript:", v5));
    if ( !v7 )
      v7 = objc_retainAutoreleasedReturnValue(+[NSArray array](&OBJC_CLASS___NSArray, "array"));
    if ( !-[NSArray containsObject:](v7, "containsObject:", v4) )
    {
      v8 = -[NSArray mutableCopy](v7, "mutableCopy");
      objc_msgSend(v8, "addObject:", v4);
      v9 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v8, "sortedArrayUsingSelector:", "compare:"));
      -[NSMutableDictionary setObject:forKeyedSubscript:](self->_uuidToPrinters, "setObject:forKeyedSubscript:", v8, v5);
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectAtIndexedSubscript:", 0LL));
      if ( objc_msgSend(v10, "compare:", v4) )
        v6 = 65540;
      else
        v6 = 65538;
      objc_release(v10);
      objc_release(v8);
    }
    objc_release(v7);
  }
  objc_release(v5);
  objc_release(v4);
  return v6;
}