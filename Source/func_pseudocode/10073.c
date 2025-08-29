-[TSPDatabaseObject initWithIdentifier:classType:]
TSPDatabaseObject *__cdecl -[TSPDatabaseObject initWithIdentifier:classType:](
        TSPDatabaseObject *self,
        SEL a2,
        signed __int64 a3,
        int a4)
{
  TSPDatabaseObject *result; // x0
  objc_super v7; // [xsp+0h] [xbp-20h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___TSPDatabaseObject;
  result = -[TSPDatabaseObject init](&v7, "init");
  if ( result )
  {
    result->_identifier = a3;
    result->_classType = a4;
  }
  return result;
}