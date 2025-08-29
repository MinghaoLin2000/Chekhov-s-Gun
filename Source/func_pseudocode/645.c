-[FileSharingListItem initWithAttributes:]
FileSharingListItem *__cdecl -[FileSharingListItem initWithAttributes:](FileSharingListItem *self, SEL a2, id a3)
{
  id v4; // x19
  FileSharingListItem *v5; // x20
  void *v6; // x21
  void *v7; // x21
  void *v8; // x0
  void *v9; // x21
  void *v10; // x22
  NSURL *v11; // x23
  void *v12; // x23
  NSWorkspace *v13; // x24
  NSWorkspace *v14; // x25
  NSString *v15; // x26
  NSString *v16; // x25
  NSWorkspace *v17; // x25
  NSImage *v18; // x26
  NSImage *v19; // x25
  NSWorkspace *v20; // x26
  void *v21; // x27
  unsigned int v22; // w28
  NSImage *v23; // x25
  NSWorkspace *v24; // x0
  NSImage *v25; // x27
  void *v26; // x0
  void *v27; // x24
  NSString *v28; // x25
  void *v29; // x25
  id v30; // x26
  void *v31; // x27
  void *v32; // x26
  objc_super v34; // [xsp+0h] [xbp-60h] BYREF

  v4 = objc_retain(a3);
  v34.receiver = self;
  v34.super_class = (Class)&OBJC_CLASS___FileSharingListItem;
  v5 = -[FileSharingListItem init](&v34, "init");
  if ( !v5 )
    goto LABEL_30;
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("name")));
  -[FileSharingListItem setName:](v5, "setName:", v6);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("path")));
  -[FileSharingListItem setPath:](v5, "setPath:", v7);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("type")));
  v9 = v8;
  if ( v8 && !(unsigned int)objc_msgSend(v8, "isEqualToString:", CFSTR("app")) )
  {
    if ( ((unsigned int)objc_msgSend(v9, "isEqualToString:", CFSTR("file")) & 1) == 0
      && (unsigned int)objc_msgSend(v9, "isEqualToString:", CFSTR("folder")) )
    {
      -[FileSharingListItem setIsFolder:](v5, "setIsFolder:", 1LL);
    }
  }
  else
  {
    -[FileSharingListItem setIsApp:](v5, "setIsApp:", 1LL);
  }
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("url")));
  if ( v10 )
  {
    v11 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v10));
    -[FileSharingListItem setUrl:](v5, "setUrl:", v11);
    objc_release(v11);
  }
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("icon")));
  if ( v12 )
  {
    v13 = (NSWorkspace *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSImage), "initWithData:", v12);
    -[FileSharingListItem setIcon:](v5, "setIcon:", v13);
  }
  else
  {
    if ( -[FileSharingListItem isApp](v5, "isApp") )
    {
      v13 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
      v14 = objc_retainAutoreleasedReturnValue(NSFileTypeForHFSTypeCode(0x4150504Cu));
      v15 = objc_retainAutoreleasedReturnValue(-[NSWorkspace iconForFileType:](v13, "iconForFileType:", v14));
      -[FileSharingListItem setIcon:](v5, "setIcon:", v15);
    }
    else
    {
      if ( -[FileSharingListItem isFolder](v5, "isFolder") )
      {
        v16 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem path](v5, "path"));
        v13 = objc_retainAutoreleasedReturnValue(-[NSString pathExtension](v16, "pathExtension"));
        objc_release(v16);
        if ( -[NSWorkspace length](v13, "length") )
        {
          v17 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
          v18 = objc_retainAutoreleasedReturnValue(-[NSWorkspace iconForFileType:](v17, "iconForFileType:", v13));
          -[FileSharingListItem setIcon:](v5, "setIcon:", v18);
          objc_release(v18);
          objc_release(v17);
          v19 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem icon](v5, "icon"));
          v20 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
          v21 = objc_retainAutoreleasedReturnValue(-[NSWorkspace _defaultDocumentIcon](v20, "_defaultDocumentIcon"));
          v22 = (unsigned int)-[NSImage isEqualTo:](v19, "isEqualTo:", v21);
          objc_release(v21);
          objc_release(v20);
          objc_release(v19);
          if ( v22 )
            -[FileSharingListItem setIcon:](v5, "setIcon:", 0LL);
        }
        v23 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem icon](v5, "icon"));
        objc_release(v23);
        if ( v23 )
          goto LABEL_23;
        v14 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
        v15 = objc_retainAutoreleasedReturnValue(NSFileTypeForHFSTypeCode(0x666C6472u));
        v24 = v14;
      }
      else
      {
        v13 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
        v14 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem path](v5, "path"));
        v15 = objc_retainAutoreleasedReturnValue(-[NSWorkspace pathExtension](v14, "pathExtension"));
        v24 = v13;
      }
      v25 = objc_retainAutoreleasedReturnValue(-[NSWorkspace iconForFileType:](v24, "iconForFileType:", v15));
      -[FileSharingListItem setIcon:](v5, "setIcon:", v25);
      objc_release(v25);
    }
    objc_release(v15);
    objc_release(v14);
  }
LABEL_23:
  objc_release(v13);
  v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("size")));
  v27 = v26;
  if ( v26 )
  {
    v28 = objc_retainAutoreleasedReturnValue(
            +[NSByteCountFormatter stringFromByteCount:countStyle:](
              &OBJC_CLASS___NSByteCountFormatter,
              "stringFromByteCount:countStyle:",
              objc_msgSend(v26, "longLongValue"),
              0LL));
    -[FileSharingListItem setSize:](v5, "setSize:", v28);
    objc_release(v28);
  }
  v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("date")));
  if ( v29 )
  {
    v30 = objc_alloc_init((Class)&OBJC_CLASS___NSDateFormatter);
    objc_msgSend(v30, "setFormatterBehavior:", 1040LL);
    objc_msgSend(v30, "setDateStyle:", 2LL);
    objc_msgSend(v30, "setTimeStyle:", 1LL);
    objc_msgSend(v30, "setDoesRelativeDateFormatting:", 1LL);
    v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v30, "stringFromDate:", v29));
    -[FileSharingListItem setDate:](v5, "setDate:", v31);
    objc_release(v31);
    objc_release(v30);
  }
  if ( -[FileSharingListItem isApp](v5, "isApp") )
  {
    v32 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    -[FileSharingListItem setChildren:](v5, "setChildren:", v32);
    objc_release(v32);
  }
  objc_release(v29);
  objc_release(v27);
  objc_release(v12);
  objc_release(v10);
  objc_release(v9);
LABEL_30:
  objc_release(v4);
  return v5;
}