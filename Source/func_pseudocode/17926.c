-[IKPTRecentsService pullUserImageWithReply:]
void __cdecl -[IKPTRecentsService pullUserImageWithReply:](IKPTRecentsService *self, SEL a2, id a3)
{
  void (__fastcall **v3)(id, void *); // x19
  NSProcessInfo *v4; // x20
  ODNode *v5; // x20
  NSString *v6; // x22
  NSArray *v7; // x24
  ODRecord *v8; // x21
  NSArray *v9; // x0
  NSArray *v10; // x22
  id v11; // x23
  NSProcessInfo *v12; // x24
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = (void (__fastcall **)(id, void *))objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo disableSuddenTermination](v4, "disableSuddenTermination");
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(+[ODNode nodeWithSession:type:error:](&OBJC_CLASS___ODNode, "nodeWithSession:type:error:", 0LL, 8705LL, 0LL));
  v6 = objc_retainAutoreleasedReturnValue(NSUserName());
  v7 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObject:](&OBJC_CLASS___NSArray, "arrayWithObject:", kODAttributeTypeJPEGPhoto));
  v8 = objc_retainAutoreleasedReturnValue(
         -[ODNode recordWithRecordType:name:attributes:error:](
           v5,
           "recordWithRecordType:name:attributes:error:",
           kODRecordTypeUsers,
           v6,
           v7,
           0LL));
  objc_release(v7);
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(-[ODRecord valuesForAttribute:error:](v8, "valuesForAttribute:error:", kODAttributeTypeJPEGPhoto, 0LL));
  v10 = v9;
  if ( v9 && -[NSArray count](v9, "count") )
    v11 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndex:](v10, "objectAtIndex:", 0LL));
  else
    v11 = 0LL;
  v3[2](v3, v11);
  v12 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo enableSuddenTermination](v12, "enableSuddenTermination");
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  objc_release(v8);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}