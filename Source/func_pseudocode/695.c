-[DeviceFileSharingViewController loadFileSharingApps:]
void __cdecl -[DeviceFileSharingViewController loadFileSharingApps:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x27
  id v5; // x28
  NSMutableArray *v6; // x22
  _UNKNOWN **v7; // x21
  _UNKNOWN **v8; // x19
  NSArray *v9; // x23
  NSMutableSet *v10; // x22
  NSSet *v11; // x23
  void *v12; // x0
  void *v13; // x23
  __int64 v14; // x28
  void *v15; // x24
  void *v16; // x25
  NSMutableArray *v17; // x27
  id v18; // x25
  void *v19; // x26
  NSMutableArray *v20; // x27
  void *v21; // x22
  void *v22; // x22
  void *v23; // x23
  NSArray *v24; // x24
  void *v25; // x23
  id v26; // x22
  void *v27; // x0
  void *v28; // x23
  __int64 v29; // x19
  void *v30; // x26
  FileSharingListItem *v31; // x24
  NSMutableArray *v32; // x25
  NSMutableArray *v33; // x23
  NSOutlineView *v34; // x23
  id v35; // [xsp+8h] [xbp-238h]
  id v36; // [xsp+10h] [xbp-230h]
  NSMutableSet *obj; // [xsp+18h] [xbp-228h]
  __int128 v38; // [xsp+20h] [xbp-220h] BYREF
  __int128 v39; // [xsp+30h] [xbp-210h]
  __int128 v40; // [xsp+40h] [xbp-200h]
  __int128 v41; // [xsp+50h] [xbp-1F0h]
  _QWORD v42[4]; // [xsp+68h] [xbp-1D8h] BYREF
  id v43; // [xsp+88h] [xbp-1B8h]
  __int128 v44; // [xsp+90h] [xbp-1B0h] BYREF
  __int128 v45; // [xsp+A0h] [xbp-1A0h]
  __int128 v46; // [xsp+B0h] [xbp-190h]
  __int128 v47; // [xsp+C0h] [xbp-180h]
  _BYTE v48[128]; // [xsp+D0h] [xbp-170h] BYREF
  _BYTE v49[128]; // [xsp+150h] [xbp-F0h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController selectedItems](self, "selectedItems"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController fileSharingAppItems](self, "fileSharingAppItems"));
  objc_release(v6);
  v7 = &AMDCopyErrorText_ptr;
  v8 = &AMDCopyErrorText_ptr;
  if ( v6 )
  {
    v35 = v5;
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController fileSharingApps](self, "fileSharingApps"));
    v10 = objc_retainAutoreleasedReturnValue(+[NSMutableSet setWithArray:](&OBJC_CLASS___NSMutableSet, "setWithArray:", v9));
    objc_release(v9);
    v36 = v4;
    v11 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v4));
    -[NSMutableSet minusSet:](v10, "minusSet:", v11);
    objc_release(v11);
    v46 = 0u;
    v47 = 0u;
    v44 = 0u;
    v45 = 0u;
    obj = objc_retain(v10);
    v12 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
            obj,
            "countByEnumeratingWithState:objects:count:",
            &v44,
            v49,
            16LL);
    if ( v12 )
    {
      v13 = v12;
      v14 = *(_QWORD *)v45;
      do
      {
        v15 = 0LL;
        do
        {
          if ( *(_QWORD *)v45 != v14 )
            objc_enumerationMutation(obj);
          v16 = objc_retainAutoreleasedReturnValue(
                  objc_msgSend(
                    *(id *)(*((_QWORD *)&v44 + 1) + 8LL * (_QWORD)v15),
                    "objectForKeyedSubscript:",
                    CFSTR("path")));
          v17 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController fileSharingAppItems](self, "fileSharingAppItems"));
          v42[0] = _NSConcreteStackBlock;
          v42[1] = 3254779904LL;
          v42[2] = sub_100011704;
          v42[3] = &unk_1000B8DF8;
          v18 = objc_retain(v16);
          v43 = v18;
          v19 = -[NSMutableArray indexOfObjectPassingTest:](v17, "indexOfObjectPassingTest:", v42);
          objc_release(v17);
          if ( v19 != (void *)0x7FFFFFFFFFFFFFFFLL )
          {
            v20 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController fileSharingAppItems](self, "fileSharingAppItems"));
            -[NSMutableArray removeObjectAtIndex:](v20, "removeObjectAtIndex:", v19);
            objc_release(v20);
          }
          objc_release(v43);
          objc_release(v18);
          v15 = (char *)v15 + 1;
        }
        while ( v13 != v15 );
        v13 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
                obj,
                "countByEnumeratingWithState:objects:count:",
                &v44,
                v49,
                16LL);
      }
      while ( v13 );
    }
    objc_release(obj);
    objc_release(obj);
    v5 = v35;
    v4 = v36;
    v8 = &AMDCopyErrorText_ptr;
    v7 = &AMDCopyErrorText_ptr;
  }
  else
  {
    v21 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    -[DeviceFileSharingViewController setFileSharingAppItems:](self, "setFileSharingAppItems:", v21);
    objc_release(v21);
  }
  v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7[253], "setWithArray:", v4));
  v23 = v8[269];
  v24 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController fileSharingApps](self, "fileSharingApps"));
  v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "setWithArray:", v24));
  objc_msgSend(v22, "minusSet:", v25);
  objc_release(v25);
  objc_release(v24);
  v40 = 0u;
  v41 = 0u;
  v38 = 0u;
  v39 = 0u;
  v26 = objc_retain(v22);
  v27 = objc_msgSend(v26, "countByEnumeratingWithState:objects:count:", &v38, v48, 16LL);
  if ( v27 )
  {
    v28 = v27;
    v29 = *(_QWORD *)v39;
    do
    {
      v30 = 0LL;
      do
      {
        if ( *(_QWORD *)v39 != v29 )
          objc_enumerationMutation(v26);
        v31 = objc_retainAutoreleasedReturnValue(
                +[FileSharingListItem fileSharingListItemWithAttributes:](
                  &OBJC_CLASS___FileSharingListItem,
                  "fileSharingListItemWithAttributes:",
                  *(_QWORD *)(*((_QWORD *)&v38 + 1) + 8LL * (_QWORD)v30)));
        v32 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController fileSharingAppItems](self, "fileSharingAppItems"));
        -[NSMutableArray addObject:](v32, "addObject:", v31);
        objc_release(v32);
        objc_release(v31);
        v30 = (char *)v30 + 1;
      }
      while ( v28 != v30 );
      v28 = objc_msgSend(v26, "countByEnumeratingWithState:objects:count:", &v38, v48, 16LL);
    }
    while ( v28 );
  }
  objc_release(v26);
  v33 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController fileSharingAppItems](self, "fileSharingAppItems"));
  -[NSMutableArray sortUsingComparator:](v33, "sortUsingComparator:", &stru_1000B8E28);
  objc_release(v33);
  v34 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
  -[NSOutlineView reloadData](v34, "reloadData");
  objc_release(v34);
  -[DeviceFileSharingViewController selectItems:](self, "selectItems:", v5);
  -[DeviceFileSharingViewController setFileSharingApps:](self, "setFileSharingApps:", v4);
  objc_release(v26);
  objc_release(v5);
  objc_release(v4);
}