-[TSUWarning isEqual:]
bool __cdecl -[TSUWarning isEqual:](TSUWarning *self, SEL a2, id a3)
{
  void *v3; // x21
  void *v4; // x24
  id v6; // x20
  __int64 v7; // x0
  id v8; // x19
  void *kind; // x20
  NSString *message; // x27
  NSString *v11; // x20
  NSString *v12; // x23
  unsigned __int8 v13; // w22
  NSString *detailMessage; // x28
  NSString *v15; // x23
  NSString *v16; // x25
  NSDictionary *userInfo; // x26
  NSDictionary *v18; // x0
  NSDictionary *v19; // x25
  NSDictionary *v20; // x22
  void *v21; // x26

  v6 = objc_retain(a3);
  v7 = objc_opt_class(&OBJC_CLASS___TSUWarning);
  v8 = objc_retainAutoreleasedReturnValue((id)TSUDynamicCast(v7, v6));
  objc_release(v6);
  if ( v8 )
  {
    kind = (void *)self->_kind;
    if ( kind == objc_msgSend(v8, "kind") )
    {
      message = self->_message;
      v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "message"));
      if ( message != v11 )
      {
        v12 = self->_message;
        v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "message"));
        if ( !-[NSString isEqualToString:](v12, "isEqualToString:", v3) )
        {
          v13 = 0;
          goto LABEL_16;
        }
      }
      detailMessage = self->_detailMessage;
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "detailMessage"));
      if ( detailMessage == v15
        || (v16 = self->_detailMessage,
            v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "detailMessage")),
            -[NSString isEqualToString:](v16, "isEqualToString:", v4)) )
      {
        userInfo = self->_userInfo;
        v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "userInfo"));
        if ( userInfo == v18 )
        {
          objc_release(userInfo);
          v13 = 1;
        }
        else
        {
          v19 = v18;
          v20 = self->_userInfo;
          v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "userInfo"));
          v13 = -[NSDictionary isEqualToDictionary:](v20, "isEqualToDictionary:", v21);
          objc_release(v21);
          objc_release(v19);
        }
        if ( detailMessage == v15 )
        {
LABEL_15:
          objc_release(v15);
          if ( message == v11 )
          {
LABEL_17:
            objc_release(v11);
            goto LABEL_18;
          }
LABEL_16:
          objc_release(v3);
          goto LABEL_17;
        }
      }
      else
      {
        v13 = 0;
      }
      objc_release(v4);
      goto LABEL_15;
    }
  }
  v13 = 0;
LABEL_18:
  objc_release(v8);
  return v13;
}