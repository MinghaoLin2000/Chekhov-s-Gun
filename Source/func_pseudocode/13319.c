-[TSUEncodedBlockInfoInternal isEqual:]
bool __cdecl -[TSUEncodedBlockInfoInternal isEqual:](TSUEncodedBlockInfoInternal *self, SEL a2, id a3)
{
  id v4; // x19
  char v5; // w20

  v4 = objc_retainAutoreleasedReturnValue((id)TSUProtocolCast(a3, 1LL));
  if ( v4 )
    v5 = TSUEncodedBlockInfoAreEqual(self, v4);
  else
    v5 = 0;
  objc_release(v4);
  return v5;
}