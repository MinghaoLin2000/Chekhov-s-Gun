-[TSPDocumentProperties init]
TSPDocumentProperties *__cdecl -[TSPDocumentProperties init](TSPDocumentProperties *self, SEL a2)
{
  TSPDocumentProperties *v2; // x0
  TSPDocumentProperties *v3; // x19
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___TSPDocumentProperties;
  v2 = -[TSPDocumentProperties init](&v5, "init");
  v3 = v2;
  if ( v2 )
    -[TSPDocumentProperties updateDocumentUUIDAndPreserveShareUUID:preserveStableDocumentUUID:](
      v2,
      "updateDocumentUUIDAndPreserveShareUUID:preserveStableDocumentUUID:",
      0LL,
      1LL);
  return v3;
}