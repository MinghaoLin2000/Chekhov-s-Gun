-[TSPDatabaseObjectWithDataState initWithIdentifier:classType:dataState:]
// local variable allocation has failed, the output may be wrong!
TSPDatabaseObjectWithDataState *__cdecl -[TSPDatabaseObjectWithDataState initWithIdentifier:classType:dataState:](
        TSPDatabaseObjectWithDataState *self,
        SEL a2,
        signed __int64 a3,
        int a4,
        signed __int64 a5)
{
  TSPDatabaseObjectWithDataState *result; // x0
  objc_super v7; // [xsp+0h] [xbp-20h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___TSPDatabaseObjectWithDataState;
  result = -[TSPDatabaseObject initWithIdentifier:classType:](&v7, "initWithIdentifier:classType:", a3, *(_QWORD *)&a4);
  if ( result )
    result->_dataState = a5;
  return result;
}