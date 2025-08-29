-[PrintInfoSet updateInfo:]
int __cdecl -[PrintInfoSet updateInfo:](PrintInfoSet *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  void *v6; // x21
  void *v7; // x24
  int v8; // w23
  void *v9; // x25

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "uuid"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_uuidToPrinters, "objectForKeyedSubscript:", v5));
  v7 = objc_msgSend(v6, "indexOfObject:", v4);
  v8 = 524289;
  if ( v7 != (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v9 = objc_msgSend(v6, "mutableCopy");
    objc_msgSend(v9, "setObject:atIndexedSubscript:", v4, v7);
    -[NSMutableDictionary setObject:forKeyedSubscript:](self->_uuidToPrinters, "setObject:forKeyedSubscript:", v9, v5);
    if ( v7 )
      v8 = 524289;
    else
      v8 = 524290;
    objc_release(v9);
  }
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  return v8;
}