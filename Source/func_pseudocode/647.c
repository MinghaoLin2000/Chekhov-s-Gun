-[FileSharingListItem isEqual:]
bool __cdecl -[FileSharingListItem isEqual:](FileSharingListItem *self, SEL a2, id a3)
{
  id v4; // x19
  NSString *v5; // x21
  NSString *v6; // x0
  NSString *v7; // x22
  NSString *v8; // x23
  void *v9; // x24
  unsigned int v10; // w25
  NSURL *v11; // x21
  NSURL *v12; // x0
  NSURL *v13; // x22
  NSURL *v14; // x23
  void *v15; // x24
  unsigned int v16; // w25
  NSString *v17; // x21
  NSString *v18; // x0
  NSString *v19; // x22
  NSString *v20; // x23
  void *v21; // x24
  unsigned int v22; // w25
  unsigned int v23; // w21
  unsigned int v24; // w21
  NSString *v25; // x21
  NSString *v26; // x0
  NSString *v27; // x22
  NSString *v28; // x23
  void *v29; // x24
  unsigned int v30; // w25
  NSString *v31; // x21
  NSString *v32; // x0
  NSString *v33; // x22
  NSString *v34; // x23
  void *v35; // x24
  unsigned int v36; // w25
  unsigned __int8 v37; // w20
  NSMutableArray *v39; // x21
  NSMutableArray *v40; // x22
  NSMutableArray *v41; // x23
  void *v42; // x24

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem name](self, "name"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  if ( v5 == v6 )
  {
    objc_release(v5);
    objc_release(v5);
  }
  else
  {
    v7 = v6;
    v8 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem name](self, "name"));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
    v10 = -[NSString isEqualToString:](v8, "isEqualToString:", v9);
    objc_release(v9);
    objc_release(v8);
    objc_release(v7);
    objc_release(v5);
    if ( !v10 )
      goto LABEL_21;
  }
  v11 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem url](self, "url"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "url"));
  if ( v11 == v12 )
  {
    objc_release(v11);
    objc_release(v11);
  }
  else
  {
    v13 = v12;
    v14 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem url](self, "url"));
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "url"));
    v16 = (unsigned int)-[NSURL isEqual:](v14, "isEqual:", v15);
    objc_release(v15);
    objc_release(v14);
    objc_release(v13);
    objc_release(v11);
    if ( !v16 )
      goto LABEL_21;
  }
  v17 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem path](self, "path"));
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "path"));
  if ( v17 == v18 )
  {
    objc_release(v17);
    objc_release(v17);
  }
  else
  {
    v19 = v18;
    v20 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem path](self, "path"));
    v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "path"));
    v22 = -[NSString isEqualToString:](v20, "isEqualToString:", v21);
    objc_release(v21);
    objc_release(v20);
    objc_release(v19);
    objc_release(v17);
    if ( !v22 )
      goto LABEL_21;
  }
  v23 = -[FileSharingListItem isApp](self, "isApp");
  if ( v23 != (unsigned int)objc_msgSend(v4, "isApp") )
    goto LABEL_21;
  v24 = -[FileSharingListItem isFolder](self, "isFolder");
  if ( v24 != (unsigned int)objc_msgSend(v4, "isFolder") )
    goto LABEL_21;
  v25 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem size](self, "size"));
  v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "size"));
  if ( v25 == v26 )
  {
    objc_release(v25);
    objc_release(v25);
  }
  else
  {
    v27 = v26;
    v28 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem size](self, "size"));
    v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "size"));
    v30 = -[NSString isEqualToString:](v28, "isEqualToString:", v29);
    objc_release(v29);
    objc_release(v28);
    objc_release(v27);
    objc_release(v25);
    if ( !v30 )
      goto LABEL_21;
  }
  v31 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem date](self, "date"));
  v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "date"));
  if ( v31 == v32 )
  {
    objc_release(v31);
    objc_release(v31);
  }
  else
  {
    v33 = v32;
    v34 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem date](self, "date"));
    v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "date"));
    v36 = -[NSString isEqualToString:](v34, "isEqualToString:", v35);
    objc_release(v35);
    objc_release(v34);
    objc_release(v33);
    objc_release(v31);
    if ( !v36 )
    {
LABEL_21:
      v37 = 0;
      goto LABEL_22;
    }
  }
  v39 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem children](self, "children"));
  v40 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "children"));
  if ( v39 == v40 )
  {
    v37 = 1;
  }
  else
  {
    v41 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem children](self, "children"));
    v42 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "children"));
    v37 = (unsigned __int8)-[NSMutableArray isEqualToArray:](v41, "isEqualToArray:", v42);
    objc_release(v42);
    objc_release(v41);
  }
  objc_release(v40);
  objc_release(v39);
LABEL_22:
  objc_release(v4);
  return v37;
}