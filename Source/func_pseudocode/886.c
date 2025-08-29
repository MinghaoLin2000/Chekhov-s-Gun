-[AMPCapacityBarView coalescedCategories]
id __cdecl -[AMPCapacityBarView coalescedCategories](AMPCapacityBarView *self, SEL a2)
{
  NSArray *v3; // x21
  unsigned __int64 capacity; // x19
  void *v5; // x0
  void *v6; // x22
  unsigned __int64 v7; // x28
  unsigned __int64 v8; // x20
  __int64 v9; // x19
  void *i; // x21
  void *v11; // x24
  void *v12; // x0
  bool v13; // cf
  void *v14; // x25
  void *v15; // x26
  unsigned __int8 v16; // w27
  AMPCapacityBarCategory *v17; // x0
  AMPCapacityBarCategory *v18; // x22
  NSString *v19; // x23
  id v20; // x24
  NSString *v21; // x24
  id v22; // x23
  AMPCapacityBarView *v24; // [xsp+8h] [xbp-138h]
  NSMutableArray *v25; // [xsp+10h] [xbp-130h]
  NSArray *obj; // [xsp+18h] [xbp-128h]
  __int128 v27; // [xsp+20h] [xbp-120h] BYREF
  __int128 v28; // [xsp+30h] [xbp-110h]
  __int128 v29; // [xsp+40h] [xbp-100h]
  __int128 v30; // [xsp+50h] [xbp-F0h]
  _BYTE v31[128]; // [xsp+60h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+148h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithArray:](&OBJC_CLASS___NSArray, "arrayWithArray:", self->_categories));
  v24 = self;
  v25 = objc_retainAutoreleasedReturnValue(
          +[NSMutableArray arrayWithCapacity:](
            &OBJC_CLASS___NSMutableArray,
            "arrayWithCapacity:",
            -[NSArray count](v3, "count")));
  capacity = self->_capacity;
  v27 = 0u;
  v28 = 0u;
  v29 = 0u;
  v30 = 0u;
  obj = objc_retain(v3);
  v5 = -[NSArray countByEnumeratingWithState:objects:count:](
         obj,
         "countByEnumeratingWithState:objects:count:",
         &v27,
         v31,
         16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = 0LL;
    v8 = capacity / 0xC8;
    v9 = *(_QWORD *)v28;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v28 != v9 )
          objc_enumerationMutation(obj);
        v11 = *(void **)(*((_QWORD *)&v27 + 1) + 8LL * (_QWORD)i);
        v12 = objc_msgSend(v11, "value");
        if ( v12 )
          v13 = (unsigned __int64)v12 >= v8;
        else
          v13 = 0;
        if ( v13 )
        {
          v14 = v12;
          v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "identifier"));
          v16 = (unsigned __int8)objc_msgSend(v15, "isEqualToString:", CFSTR("DISK_OTHER"));
          objc_release(v15);
          if ( (v16 & 1) == 0 )
          {
            -[NSMutableArray addObject:](v25, "addObject:", v11);
            v7 += (unsigned __int64)v14;
          }
        }
      }
      v6 = -[NSArray countByEnumeratingWithState:objects:count:](
             obj,
             "countByEnumeratingWithState:objects:count:",
             &v27,
             v31,
             16LL);
    }
    while ( v6 );
  }
  else
  {
    v7 = 0LL;
  }
  objc_release(obj);
  if ( v7 < v24->_bytesUsed )
  {
    v17 = objc_alloc_init(&OBJC_CLASS___AMPCapacityBarCategory);
    v18 = v17;
    if ( v24->_isCalculating )
    {
      -[AMPCapacityBarCategory setIdentifier:](v17, "setIdentifier:", CFSTR("DISK_CALC"));
      -[AMPCapacityBarCategory setHideLabel:](v18, "setHideLabel:", 0LL);
      -[AMPCapacityBarCategory setHidePopover:](v18, "setHidePopover:", 0LL);
    }
    else
    {
      -[AMPCapacityBarCategory setIdentifier:](v17, "setIdentifier:", CFSTR("DISK_OTHER"));
    }
    v19 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarCategory identifier](v18, "identifier"));
    v20 = objc_retainAutoreleasedReturnValue((id)sub_1000184E4());
    -[AMPCapacityBarCategory setName:](v18, "setName:", v20);
    objc_release(v20);
    objc_release(v19);
    v21 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarCategory identifier](v18, "identifier"));
    v22 = objc_retainAutoreleasedReturnValue(+[AMPCapacityBarView categoryColor:](&OBJC_CLASS___AMPCapacityBarView, "categoryColor:", v21));
    -[AMPCapacityBarCategory setColor:](v18, "setColor:", v22);
    objc_release(v22);
    objc_release(v21);
    -[AMPCapacityBarCategory setValue:](v18, "setValue:", v24->_bytesUsed - v7);
    -[NSMutableArray addObject:](v25, "addObject:", v18);
    objc_release(v18);
  }
  -[NSMutableArray sortUsingComparator:](v25, "sortUsingComparator:", &stru_1000B9090);
  objc_release(obj);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v25);
}