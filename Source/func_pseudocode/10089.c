-[TSPDatabaseObjectWithFileState initWithIdentifier:classType:fileState:packageURL:]
// local variable allocation has failed, the output may be wrong!
TSPDatabaseObjectWithFileState *__cdecl -[TSPDatabaseObjectWithFileState initWithIdentifier:classType:fileState:packageURL:](
        TSPDatabaseObjectWithFileState *self,
        SEL a2,
        signed __int64 a3,
        int a4,
        id a5,
        id a6)
{
  __int64 v7; // x21
  id v10; // x19
  id v11; // x20
  TSPDatabaseObjectWithFileState *v12; // x21
  NSString *v13; // x0
  NSString *fileState; // x8
  NSURL *v15; // x0
  NSURL *packageURL; // x8
  objc_super v18; // [xsp+0h] [xbp-40h] BYREF

  v7 = *(_QWORD *)&a4;
  v10 = objc_retain(a5);
  v11 = objc_retain(a6);
  v18.receiver = self;
  v18.super_class = (Class)&OBJC_CLASS___TSPDatabaseObjectWithFileState;
  v12 = -[TSPDatabaseObject initWithIdentifier:classType:](&v18, "initWithIdentifier:classType:", a3, v7);
  if ( v12 )
  {
    v13 = (NSString *)objc_msgSend(v10, "copy");
    fileState = v12->_fileState;
    v12->_fileState = v13;
    objc_release(fileState);
    v15 = (NSURL *)objc_msgSend(v11, "copy");
    packageURL = v12->_packageURL;
    v12->_packageURL = v15;
    objc_release(packageURL);
  }
  objc_release(v11);
  objc_release(v10);
  return v12;
}