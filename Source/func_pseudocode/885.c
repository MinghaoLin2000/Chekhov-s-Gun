-[AMPCapacityBarView setCategoryData:]
void __cdecl -[AMPCapacityBarView setCategoryData:](AMPCapacityBarView *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  id v5; // x21
  void *v6; // x0
  void *v7; // x23
  __int64 v8; // x25
  void *i; // x26
  void *v10; // x28
  void *v11; // x27
  void *v12; // x19
  AMPCapacityBarCategory *v13; // x27
  void *v14; // x24
  void *v15; // x24
  void *v16; // x19
  NSString *v17; // x24
  id v18; // x19
  __int128 v20; // [xsp+10h] [xbp-120h] BYREF
  __int128 v21; // [xsp+20h] [xbp-110h]
  __int128 v22; // [xsp+30h] [xbp-100h]
  __int128 v23; // [xsp+40h] [xbp-F0h]
  _BYTE v24[128]; // [xsp+50h] [xbp-E0h] BYREF

  v3 = objc_retain(a3);
  v4 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableArray), "initWithCapacity:", objc_msgSend(v3, "count"));
  v20 = 0u;
  v21 = 0u;
  v22 = 0u;
  v23 = 0u;
  v5 = objc_retain(v3);
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v20, v24, 16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v21;
    do
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v21 != v8 )
          objc_enumerationMutation(v5);
        v10 = *(void **)(*((_QWORD *)&v20 + 1) + 8LL * (_QWORD)i);
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKey:", CFSTR("SIZE")));
        v12 = objc_msgSend(v11, "unsignedLongLongValue");
        objc_release(v11);
        if ( v12 )
        {
          v13 = objc_alloc_init(&OBJC_CLASS___AMPCapacityBarCategory);
          v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKey:", CFSTR("NAME")));
          -[AMPCapacityBarCategory setName:](v13, "setName:", v14);
          objc_release(v14);
          v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKey:", CFSTR("ID")));
          -[AMPCapacityBarCategory setIdentifier:](v13, "setIdentifier:", v15);
          objc_release(v15);
          -[AMPCapacityBarCategory setValue:](v13, "setValue:", v12);
          v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKey:", CFSTR("ITEMS")));
          -[AMPCapacityBarCategory setItems:](v13, "setItems:", objc_msgSend(v16, "unsignedLongLongValue"));
          objc_release(v16);
          v17 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarCategory identifier](v13, "identifier"));
          v18 = objc_retainAutoreleasedReturnValue(+[AMPCapacityBarView categoryColor:](&OBJC_CLASS___AMPCapacityBarView, "categoryColor:", v17));
          -[AMPCapacityBarCategory setColor:](v13, "setColor:", v18);
          objc_release(v18);
          objc_release(v17);
          objc_msgSend(v4, "addObject:", v13);
          objc_release(v13);
        }
      }
      v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v20, v24, 16LL);
    }
    while ( v7 );
  }
  objc_release(v5);
  -[AMPCapacityBarView setCategories:](self, "setCategories:", v4);
  -[AMPCapacityBarView setNeedsDisplay:](self, "setNeedsDisplay:", 1LL);
  objc_release(v4);
  objc_release(v5);
}