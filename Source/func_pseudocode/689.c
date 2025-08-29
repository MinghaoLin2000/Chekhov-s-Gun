-[DeviceFileSharingViewController outlineView:viewForTableColumn:item:]
id __cdecl -[DeviceFileSharingViewController outlineView:viewForTableColumn:item:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x0
  void *v11; // x22
  void *v12; // x23
  void *v13; // x21
  NSColor *v14; // x0
  NSColor *v15; // x22
  void *v16; // x23
  void *v17; // x22
  void *v18; // x22
  __CFString *v19; // x23
  void *v20; // x22
  unsigned int v21; // w23
  __CFString *v22; // x0
  void *v23; // x22
  unsigned int v24; // w23
  __CFString *v25; // x23
  void *v26; // x24
  void *v27; // x24
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = objc_retain(a4);
  v9 = objc_retain(objc_retain(a5));
  v10 = objc_retain(a3);
  v11 = v10;
  if ( !v9 )
  {
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "makeViewWithIdentifier:owner:", CFSTR("HeaderCell"), self));
    goto LABEL_23;
  }
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "identifier"));
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "makeViewWithIdentifier:owner:", v12, self));
  objc_release(v11);
  objc_release(v12);
  if ( (unsigned int)objc_msgSend(v9, "isPlaceholder") )
    v14 = objc_retainAutoreleasedReturnValue(+[NSColor disabledControlTextColor](&OBJC_CLASS___NSColor, "disabledControlTextColor"));
  else
    v14 = objc_retainAutoreleasedReturnValue(+[NSColor controlTextColor](&OBJC_CLASS___NSColor, "controlTextColor"));
  v15 = v14;
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "textField"));
  objc_msgSend(v16, "setTextColor:", v15);
  objc_release(v16);
  objc_release(v15);
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "identifier"));
  LODWORD(v16) = (unsigned int)objc_msgSend(v17, "isEqualToString:", CFSTR("name"));
  objc_release(v17);
  if ( (_DWORD)v16 )
  {
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "name"));
    if ( v18 )
      v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "name"));
    else
      v19 = &stru_1000BA220;
    v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "textField"));
    objc_msgSend(v26, "setStringValue:", v19);
    objc_release(v26);
    if ( v18 )
      objc_release(v19);
    objc_release(v18);
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "icon"));
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "imageView"));
    -[__CFString setObjectValue:](v25, "setObjectValue:", v11);
    goto LABEL_22;
  }
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "identifier"));
  v21 = (unsigned int)objc_msgSend(v20, "isEqualToString:", CFSTR("date"));
  objc_release(v20);
  if ( v21 )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "date"));
    if ( v11 )
    {
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "date"));
LABEL_15:
      v25 = v22;
      goto LABEL_21;
    }
  }
  else
  {
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "identifier"));
    v24 = (unsigned int)objc_msgSend(v23, "isEqualToString:", CFSTR("size"));
    objc_release(v23);
    if ( !v24 )
      goto LABEL_24;
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "size"));
    if ( v11 )
    {
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "size"));
      goto LABEL_15;
    }
  }
  v25 = &stru_1000BA220;
LABEL_21:
  v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "textField"));
  objc_msgSend(v27, "setStringValue:", v25);
  objc_release(v27);
  if ( v11 )
LABEL_22:
    objc_release(v25);
LABEL_23:
  objc_release(v11);
LABEL_24:
  objc_release(v9);
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}