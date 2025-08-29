-[XPCSignpostReader updateActivationsForProcess:withInterval:]
void __cdecl -[XPCSignpostReader updateActivationsForProcess:withInterval:](
        XPCSignpostReader *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  os_log_s *v8; // x21
  void *v9; // x21
  void *v10; // x24
  NSNumber *v11; // x23
  float v12; // s0
  float v13; // s8
  void *v14; // x24
  void *v15; // x24
  void *v16; // x24
  void *v17; // x25
  void *v18; // x24
  void *v19; // x25
  void *v20; // x24
  void *v21; // x25
  void *v22; // x26
  void *v23; // x24
  void *v24; // x25
  void *v25; // x26
  void *v26; // x22
  void *v27; // x25
  void *v28; // x26
  NSNumber *v29; // x24

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEBUG) )
    sub_10000DF30(v7, v8);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "number1Value"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "string2Value"));
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithBool:](
            &OBJC_CLASS___NSNumber,
            "numberWithBool:",
            objc_msgSend(v10, "isEqualToString:", CFSTR("YES"))));
  objc_release(v10);
  objc_msgSend(v7, "durationSeconds");
  v13 = v12;
  v14 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_activations, "objectForKeyedSubscript:", v6));
  objc_release(v14);
  if ( !v14 )
  {
    v15 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](self->_activations, "setObject:forKeyedSubscript:", v15, v6);
    objc_release(v15);
  }
  v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_activations, "objectForKeyedSubscript:", v6));
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "objectForKeyedSubscript:", v11));
  objc_release(v17);
  objc_release(v16);
  if ( !v17 )
  {
    v18 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    v19 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_activations, "objectForKeyedSubscript:", v6));
    objc_msgSend(v19, "setObject:forKeyedSubscript:", v18, v11);
    objc_release(v19);
    objc_release(v18);
  }
  v20 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_activations, "objectForKeyedSubscript:", v6));
  v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "objectForKeyedSubscript:", v11));
  v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "objectForKeyedSubscript:", v9));
  objc_release(v22);
  objc_release(v21);
  objc_release(v20);
  if ( !v22 )
  {
    v23 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    v24 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_activations, "objectForKeyedSubscript:", v6));
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "objectForKeyedSubscript:", v11));
    objc_msgSend(v25, "setObject:forKeyedSubscript:", v23, v9);
    objc_release(v25);
    objc_release(v24);
    objc_release(v23);
  }
  v26 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_activations, "objectForKeyedSubscript:", v6));
  v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v26, "objectForKeyedSubscript:", v11));
  v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "objectForKeyedSubscript:", v9));
  v29 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithUnsignedLongLong:](
            &OBJC_CLASS___NSNumber,
            "numberWithUnsignedLongLong:",
            (unsigned __int64)(float)(v13 * 1000.0)));
  objc_msgSend(v28, "addObject:", v29);
  objc_release(v29);
  objc_release(v28);
  objc_release(v27);
  objc_release(v26);
  objc_release(v11);
  objc_release(v9);
  objc_release(v7);
  objc_release(v6);
}