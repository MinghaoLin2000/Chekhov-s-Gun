-[XPCSignpostReader updateProcessExitsForProcess:withEvent:]
void __cdecl -[XPCSignpostReader updateProcessExitsForProcess:withEvent:](
        XPCSignpostReader *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x24
  os_log_s *v8; // x20
  void *v9; // x25
  void *v10; // x21
  void *v11; // x23
  NSNumber *v12; // x24
  void *v13; // x25
  NSMutableDictionary *processExits; // x25
  id v15; // x26
  void *v16; // x25
  void *v17; // x26
  void *v18; // x25
  id v19; // x26
  NSArray *v20; // x25
  void *v21; // x26
  void *v22; // x28
  NSNumber *v23; // x21
  void *v24; // x24
  NSNumber *v25; // x27
  void *v26; // x22
  void *v27; // x20
  NSNumber *v28; // x0
  void *v29; // [xsp+8h] [xbp-78h]
  void *v30; // [xsp+10h] [xbp-70h]
  _QWORD v31[2]; // [xsp+18h] [xbp-68h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEBUG) )
    sub_10000DCFC(v6, v8);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "string1Value"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "number1Value"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "number2Value"));
  objc_release(v7);
  if ( v9 && v10 && v11 )
  {
    v30 = v9;
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSNumber numberWithBool:](
              &OBJC_CLASS___NSNumber,
              "numberWithBool:",
              objc_msgSend(v9, "isEqualToString:", CFSTR("YES"))));
    v13 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_processExits, "objectForKeyedSubscript:", v6));
    objc_release(v13);
    if ( !v13 )
    {
      processExits = self->_processExits;
      v15 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
      -[NSMutableDictionary setObject:forKey:](processExits, "setObject:forKey:", v15, v6);
      objc_release(v15);
    }
    v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_processExits, "objectForKeyedSubscript:", v6));
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "objectForKeyedSubscript:", v12));
    objc_release(v17);
    objc_release(v16);
    if ( !v17 )
    {
      v18 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_processExits, "objectForKeyedSubscript:", v6));
      v19 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
      objc_msgSend(v18, "setObject:forKey:", v19, v12);
      objc_release(v19);
      objc_release(v18);
    }
    v31[0] = v10;
    v31[1] = v11;
    v20 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v31, 2LL));
    v21 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_processExits, "objectForKeyedSubscript:", v6));
    v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "objectForKeyedSubscript:", v12));
    v29 = v10;
    v23 = v12;
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "objectForKeyedSubscript:", v20));
    v25 = objc_retainAutoreleasedReturnValue(
            +[NSNumber numberWithUnsignedInteger:](
              &OBJC_CLASS___NSNumber,
              "numberWithUnsignedInteger:",
              (char *)objc_msgSend(v24, "unsignedIntegerValue") + 1));
    v26 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_processExits, "objectForKeyedSubscript:", v6));
    v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v26, "objectForKeyedSubscript:", v23));
    objc_msgSend(v27, "setObject:forKeyedSubscript:", v25, v20);
    objc_release(v27);
    objc_release(v26);
    objc_release(v25);
    objc_release(v24);
    objc_release(v22);
    objc_release(v21);
    objc_release(v20);
    v28 = v23;
    v10 = v29;
    objc_release(v28);
    v9 = v30;
  }
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v6);
}