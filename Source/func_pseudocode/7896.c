$s3__C10WindowTagsVMa
void type metadata accessor for WindowTags()
{
  unsigned __int64 ForeignTypeMetadata; // x0
  __int64 v1; // x1

  if ( !qword_100029E18 )
  {
    ForeignTypeMetadata = swift_getForeignTypeMetadata(0LL, &unk_100026570);
    if ( !v1 )
      atomic_store(ForeignTypeMetadata, (unsigned __int64 *)&qword_100029E18);
  }
}