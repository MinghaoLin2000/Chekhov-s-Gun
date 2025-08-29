-[XPCSignpostReader updateMXSignpostEventsForProcess:withEvent:]
void __cdecl -[XPCSignpostReader updateMXSignpostEventsForProcess:withEvent:](
        XPCSignpostReader *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  __int64 v8; // x9
  void *v9; // x22
  NSMutableDictionary *summarizedSignpostEvents; // x22
  id v11; // x23
  NSMutableDictionary *numAppSignposts; // x22
  SignpostCounter *v13; // x23
  _QWORD *v14; // x22
  __int64 v15; // x8
  void *v16; // x24
  __CFString *v17; // x25
  void *v18; // x26
  void *v19; // x27
  NSArray *v20; // x23
  void *v21; // x25
  void *v22; // x24
  void *v23; // x0
  void *v24; // x21
  NSNumber *v25; // x25
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = qword_100019568++;
  if ( v8 <= 49999 )
  {
    v9 = objc_retainAutoreleasedReturnValue(
           -[NSMutableDictionary objectForKeyedSubscript:](
             self->_summarizedSignpostEvents,
             "objectForKeyedSubscript:",
             v6));
    objc_release(v9);
    if ( !v9 )
    {
      summarizedSignpostEvents = self->_summarizedSignpostEvents;
      v11 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
      -[NSMutableDictionary setObject:forKey:](summarizedSignpostEvents, "setObject:forKey:", v11, v6);
      objc_release(v11);
      numAppSignposts = self->_numAppSignposts;
      v13 = objc_alloc_init(&OBJC_CLASS___SignpostCounter);
      -[NSMutableDictionary setObject:forKey:](numAppSignposts, "setObject:forKey:", v13, v6);
      objc_release(v13);
    }
    v14 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_numAppSignposts, "objectForKeyedSubscript:", v6));
    v15 = v14[1];
    v14[1] = v15 + 1;
    if ( v15 <= 999 )
    {
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "category"));
      if ( v16 )
        v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "category"));
      else
        v17 = &stru_100014858;
      v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "name"));
      if ( v18 )
      {
        v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "name"));
        v20 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:](&OBJC_CLASS___NSArray, "arrayWithObjects:", v17, v19, 0LL));
        objc_release(v19);
      }
      else
      {
        v20 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:](&OBJC_CLASS___NSArray, "arrayWithObjects:", v17, &stru_100014858, 0LL));
      }
      objc_release(v18);
      if ( v16 )
        objc_release(v17);
      objc_release(v16);
      v21 = objc_retainAutoreleasedReturnValue(
              -[NSMutableDictionary objectForKeyedSubscript:](
                self->_summarizedSignpostEvents,
                "objectForKeyedSubscript:",
                v6));
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "objectForKeyedSubscript:", v20));
      objc_release(v21);
      v23 = objc_retainAutoreleasedReturnValue(
              -[NSMutableDictionary objectForKeyedSubscript:](
                self->_summarizedSignpostEvents,
                "objectForKeyedSubscript:",
                v6));
      v24 = v23;
      if ( v22 )
      {
        v25 = objc_retainAutoreleasedReturnValue(
                +[NSNumber numberWithInteger:](
                  &OBJC_CLASS___NSNumber,
                  "numberWithInteger:",
                  (char *)objc_msgSend(v22, "integerValue") + 1));
        objc_msgSend(v24, "setObject:forKey:", v25, v20);
        objc_release(v25);
      }
      else
      {
        objc_msgSend(v23, "setObject:forKey:", &off_100015858, v20);
      }
      objc_release(v24);
      objc_release(v22);
      objc_release(v20);
    }
    objc_release(v14);
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}