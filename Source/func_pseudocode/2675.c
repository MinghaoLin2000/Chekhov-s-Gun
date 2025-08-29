-[AutofillNode initWithPlaylist:]
AutofillNode *__cdecl -[AutofillNode initWithPlaylist:](AutofillNode *self, SEL a2, id a3)
{
  id v4; // x19
  AutofillNode *v5; // x20
  void *v6; // x21
  void *v7; // x22
  NSNumber *v8; // x21
  void *v9; // x21
  void *v10; // x22
  NSNumber *v11; // x21
  objc_super v13; // [xsp+0h] [xbp-40h] BYREF

  v4 = objc_retain(a3);
  v13.receiver = self;
  v13.super_class = (Class)&OBJC_CLASS___AutofillNode;
  v5 = -[AutofillNode init](&v13, "init");
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
    -[AutofillNode setName:](v5, "setName:", v6);
    objc_release(v6);
    -[AutofillNode setKind:](v5, "setKind:", objc_msgSend(v4, "kind"));
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "persistentID"));
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSNumber numberWithUnsignedLongLong:](
             &OBJC_CLASS___NSNumber,
             "numberWithUnsignedLongLong:",
             objc_msgSend(v7, "unsignedLongLongValue")));
    -[AutofillNode setPersistentID:](v5, "setPersistentID:", v8);
    objc_release(v8);
    objc_release(v7);
    if ( -[AutofillNode isFolder](v5, "isFolder") )
    {
      v9 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
      -[AutofillNode setChildren:](v5, "setChildren:", v9);
      objc_release(v9);
    }
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "parentID"));
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSNumber numberWithUnsignedLongLong:](
              &OBJC_CLASS___NSNumber,
              "numberWithUnsignedLongLong:",
              objc_msgSend(v10, "unsignedLongLongValue")));
    -[AutofillNode setParentID:](v5, "setParentID:", v11);
    objc_release(v11);
    objc_release(v10);
  }
  objc_release(v4);
  return v5;
}