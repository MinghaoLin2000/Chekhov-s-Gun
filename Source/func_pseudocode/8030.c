-[SPCloudStorageHelper currentiCloudAccount]
id __cdecl -[SPCloudStorageHelper currentiCloudAccount](SPCloudStorageHelper *self, SEL a2)
{
  id v3; // x21
  void *v4; // x20
  id v5; // x21
  id v6; // x22
  MM_Account *v7; // x0
  MM_Account *currentAcct; // x8
  MM_Account *v9; // x19

  v3 = objc_retainAutoreleasedReturnValue(-[SPCloudStorageHelper acAccount](self, "acAccount"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "username"));
  objc_release(v3);
  if ( v4 && !-[NSString isEqualToString:](self->_acctID, "isEqualToString:", v4) )
  {
    objc_storeStrong((id *)&self->_acctID, v4);
    v5 = objc_alloc((Class)&OBJC_CLASS___MM_Account);
    v6 = objc_retainAutoreleasedReturnValue(-[SPCloudStorageHelper acAccount](self, "acAccount"));
    v7 = (MM_Account *)objc_msgSend(v5, "initWithACAccount:", v6);
    currentAcct = self->_currentAcct;
    self->_currentAcct = v7;
    objc_release(currentAcct);
    objc_release(v6);
  }
  v9 = objc_retainAutoreleaseReturnValue(self->_currentAcct);
  objc_release(v4);
  return v9;
}