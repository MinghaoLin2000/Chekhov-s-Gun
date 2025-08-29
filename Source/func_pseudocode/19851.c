-[job_spool_client_t Finishings]
NSArray *__cdecl -[job_spool_client_t Finishings](job_spool_client_t *self, SEL a2)
{
  void *v3; // x20
  NSMutableArray *v4; // x24
  void *v5; // x0
  void *v6; // x21
  NSArray *v7; // x0
  NSArray *v8; // x19
  PKPrinterDescription *v9; // x23
  void *v10; // x21
  NSArray *v11; // x22
  unsigned int *v12; // x23
  NSArray *v13; // x22
  void *v14; // x24
  __int64 v15; // x26
  __int64 v16; // x27
  void *i; // x28
  void *v18; // x25
  unsigned int *v19; // x28
  unsigned int v20; // t1
  NSNumber *v21; // x25
  __int128 v23; // [xsp+0h] [xbp-120h] BYREF
  __int128 v24; // [xsp+10h] [xbp-110h]
  __int128 v25; // [xsp+20h] [xbp-100h]
  __int128 v26; // [xsp+30h] [xbp-F0h]
  _BYTE v27[128]; // [xsp+40h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings finishingTemplate](self->_printSettings, "finishingTemplate"));
  if ( v3 )
  {
    v4 = 0LL;
    goto LABEL_29;
  }
  v5 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings finishings](self->_printSettings, "finishings"));
  v6 = v5;
  if ( v5 )
    v7 = objc_retain(v5);
  else
    v7 = objc_retainAutoreleasedReturnValue(+[NSArray array](&OBJC_CLASS___NSArray, "array"));
  v8 = v7;
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(-[lite_printer_t printerDescription](self->_printer, "printerDescription"));
  v10 = objc_retainAutoreleasedReturnValue(-[PKPrinterDescription finishings](v9, "finishings"));
  objc_release(v9);
  if ( (int)-[PKPrintSettings copies](self->_printSettings, "copies") >= 2
    && (unsigned int)objc_msgSend(v10, "containsObject:", &off_1000B4828)
    && !-[NSArray containsObject:](v8, "containsObject:", &off_1000B4828) )
  {
    v11 = objc_retainAutoreleasedReturnValue(-[NSArray arrayByAddingObject:](v8, "arrayByAddingObject:", &off_1000B4828));
    objc_release(v8);
    v8 = v11;
  }
  if ( -[NSArray count](v8, "count") )
  {
    v12 = (unsigned int *)malloc_type_calloc(-[NSArray count](v8, "count"), 4uLL, 0x100004052888210uLL);
    v25 = 0u;
    v26 = 0u;
    v23 = 0u;
    v24 = 0u;
    v13 = objc_retain(v8);
    v14 = -[NSArray countByEnumeratingWithState:objects:count:](
            v13,
            "countByEnumeratingWithState:objects:count:",
            &v23,
            v27,
            16LL);
    if ( v14 )
    {
      LODWORD(v15) = 0;
      v16 = *(_QWORD *)v24;
      do
      {
        for ( i = 0LL; i != v14; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v24 != v16 )
            objc_enumerationMutation(v13);
          v18 = *(void **)(*((_QWORD *)&v23 + 1) + 8LL * (_QWORD)i);
          if ( (unsigned int)objc_msgSend(v10, "containsObject:", v18, (_QWORD)v23) )
          {
            v12[(int)v15] = (unsigned int)objc_msgSend(v18, "intValue");
            LODWORD(v15) = v15 + 1;
          }
        }
        v14 = -[NSArray countByEnumeratingWithState:objects:count:](
                v13,
                "countByEnumeratingWithState:objects:count:",
                &v23,
                v27,
                16LL);
      }
      while ( v14 );
      objc_release(v13);
      if ( (int)v15 >= 1 )
      {
        v4 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
        v15 = (unsigned int)v15;
        v19 = v12;
        do
        {
          v20 = *v19++;
          v21 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", v20));
          -[NSMutableArray addObject:](v4, "addObject:", v21);
          objc_release(v21);
          --v15;
        }
        while ( v15 );
        goto LABEL_27;
      }
    }
    else
    {
      objc_release(v13);
    }
    v4 = 0LL;
LABEL_27:
    free(v12);
    goto LABEL_28;
  }
  v4 = 0LL;
LABEL_28:
  objc_release(v10);
  objc_release(v8);
LABEL_29:
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSArray *)objc_autoreleaseReturnValue(v4);
}