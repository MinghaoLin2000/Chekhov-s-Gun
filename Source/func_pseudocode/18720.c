$s3__C13CIImageOptionVMa
void type metadata accessor for CIImageOption()
{
  unsigned __int64 ForeignTypeMetadata; // x0
  __int64 v1; // x1

  if ( !qword_1000968E8 )
  {
    ForeignTypeMetadata = swift_getForeignTypeMetadata(0LL, &unk_10008D698);
    if ( !v1 )
      atomic_store(ForeignTypeMetadata, (unsigned __int64 *)&qword_1000968E8);
  }
}